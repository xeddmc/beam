// Copyright 2018 The Beam Team
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#pragma once

#include "api_base.h"
#include "wallet/core/wallet.h"
#include "wallet/core/wallet_db.h"
#include "wallet_api_defs.h"
#include "wallet/core/contracts/i_shaders_manager.h"

namespace beam::wallet
{
    class WalletApi
        : public ApiBase
    {
    public:
        // MUST BE SAFE TO CALL FROM ANY THREAD
        WalletApi(IWalletApiHandler& handler,
                  ACL acl,
                  std::string appid,
                  std::string appname,
                  IWalletDB::Ptr wdb,
                  Wallet::Ptr wallet,
                  ISwapsProvider::Ptr swaps,
                  IShadersManager::Ptr contracts);

        virtual IWalletDB::Ptr       getWalletDB() const;
        virtual Wallet::Ptr          getWallet() const;
        virtual ISwapsProvider::Ptr  getSwaps() const;
        virtual IShadersManager::Ptr getContracts() const;
        virtual Height               get_CurrentHeight() const;

        void assertWalletThread() const;
        void checkCAEnabled() const;
        bool getCAEnabled() const;

        WALLET_API_METHODS(BEAM_API_RESPONSE_FUNC)
        WALLET_API_METHODS(BEAM_API_HANDLE_FUNC)


        template<typename T>
        void doResponse(const JsonRpcId& id, const T& response)
        {
            json msg;
            getResponse(id, response, msg);
            _handler.sendAPIResponse(msg);
        }

        void FillAddressData(const AddressData& data, WalletAddress& address);
        void doTxAlreadyExistsError(const JsonRpcId& id);

         template<typename T>
        static void doPagination(size_t skip, size_t count, std::vector<T>& res)
        {
            if (count > 0)
            {
                size_t start = skip;
                size_t size = res.size();

                if (start < size)
                {
                    res.erase(res.begin(), res.begin() + start);
                    if (count < res.size())
                    {
                        res.erase(res.begin() + count, res.end());
                    }
                }
                else res = {};
            }
        }

        template<typename T>
        void onHandleIssueConsume(bool issue, const JsonRpcId& id, const T& data);

        template<typename T>
        void setTxAssetParams(const JsonRpcId& id, TxParameters& tx, const T& data);

    private:
        void onHandleInvokeContractWithTX(const JsonRpcId &id, const InvokeContract& data);
        void onHandleInvokeContractNoTX(const JsonRpcId &id, const InvokeContract& data);

        bool checkTxAccessRights(const TxParameters&);
        void checkTxAccessRights(const TxParameters&, ApiError code, const std::string& errmsg);

        WALLET_API_METHODS(BEAM_API_PARSE_FUNC)

        template<typename T>
        std::pair<T, IWalletApi::MethodInfo> onParseIssueConsume(bool issue, const JsonRpcId& id, const json& params);

        // If no fee read and no min fee provided this function calculates minimum fee itself
        Amount getBeamFeeParam(const json& params, const std::string& name, Amount feeMin) const;
        Amount getBeamFeeParam(const json& params, const std::string& name) const;

        std::string getTokenType(TokenType type) const;

    protected:
        // Do not access these directly, use getters
        IWalletDB::Ptr       _wdb;
        Wallet::Ptr          _wallet;
        ISwapsProvider::Ptr  _swaps;

        std::shared_ptr<bool> _contractsGuard = std::make_shared<bool>(true);
        IShadersManager::Ptr  _contracts;

        struct RequestHeaderMsg
            : public proto::FlyClient::RequestEnumHdrs
            , public proto::FlyClient::Request::IHandler
        {
            typedef boost::intrusive_ptr<RequestHeaderMsg> Ptr;
            ~RequestHeaderMsg() override = default;

            RequestHeaderMsg(const JsonRpcId id, std::weak_ptr<bool> guard, WalletApi& wapi)
                : _id(id)
                , _guard(guard)
                , _wapi(wapi)
            {}

            void OnComplete(proto::FlyClient::Request&) override;

        private:
            JsonRpcId _id;
            std::weak_ptr<bool> _guard;
            WalletApi& _wapi;
        };

        std::map<TokenType, std::string> _ttypesMap;
    };
}
