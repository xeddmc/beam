// Copyright 2019 The Beam Team
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

#include "strings_resources.h"

namespace beam
{
    const char kDefaultConfigFile[] = "beam-wallet.cfg";
    const char kBEAM[] = "BEAM";
    const char kGROTH[] = "GROTH";
    const char kASSET[] = "ASSET";
    const char kAGROTH[] = "AGROTH";
    const char kAmountASSET[] = "assets";
    const char kAmountAGROTH[] = "agroth";
    const char kNA[] = "N/A";

    // Coin statuses
    const char kCoinStatusAvailable[] = "Available";
    const char kCoinStatusUnavailable[] = "Unavailable";
    const char kCoinStatusSpent[] = "Spent";
    const char kCoinStatusMaturing[] = "Maturing";
    const char kCoinStatusOutgoing[] = "Outgoing";
    const char kCoinStatusIncoming[] = "Incoming/change";
    const char kCoinStatusConsumed[]    = "Consumed";

    // Errors
    const char kErrorUnknownCoinStatus[] = "Unknown coin status";
    const char kErrorUnknownTxStatus[] = "Unknown transaction status";
    const char kErrorUnknownTxType[] = "Unknown transaction type";
    const char kErrorUnknownSwapCoin[] = "Unknown SwapCoin";
    const char kErrorInvalidWID[] = "invalid WID";
    const char kErrorTreasuryBadN[] = "bad n (roundoff)";
    const char kErrorTreasuryBadM[] = "bad m/n";
    const char kErrorTreasuryNothingRemains[] = "Nothing remains";
    const char kErrorTreasuryPlanNotFound[] = "plan not found";
    const char kErrorTreasuryInvalidResponse[] = "invalid response";
    const char kErrorAddrExprTimeInvalid[] = "Operation failed: provided \"%1%\" parameter value \"%2%\" is not valid";
    const char kErrorSeedPhraseInvalid[] = "Invalid seed phrase provided: %1%";
    const char kErrorSeedPhraseNotProvided[] = "Seed phrase has not been provided.";
    const char kErrorTxIdParamReqired[] = "Failed, --tx_id param required";
    const char kErrorTxWithIdNotFound[] = "Failed, transaction with id: %1% does not exist.";
    const char kErrorTxIdParamInvalid[] = "Failed, invalid tx_id provided: %1%";
    const char kErrorPpExportFailed[] = "Failed to export payment proof, transaction does not exist.";
    const char kErrorPpCannotExportForReceiver[] = "Cannot export payment proof for receiver or self transaction.";
    const char kErrorPpExportFailedTxNotCompleted[] = "Failed to export payment proof. Transaction is not completed.";
    const char kErrorPpNotProvided[] = "No payment proof provided: --payment_proof parameter is missing";
    const char kErrorPpInvalid[] = "Payment proof is invalid";
    const char kErrorSubkeyNotSpecified[] = "Please, specify Subkey number --subkey=N (N > 0)";
    const char kErrorExportDataFail[] = "Failed to save exported data.";
    const char kErrorReceiverAddrMissing[] = "receiver's address is missing";
    const char kErrorAmountMissing[] = "amount is missing";
    const char kErrorNegativeAmount[] = "Unable to send negative (%1%) amount of coins";
    const char kErrorTooBigAmount[] = "Amount %1% is too big. Maximum supported amount is %2%.";
    const char kErrorZeroAmount[] = "Unable to send zero coins";
    const char kErrorFeeToLow[] = "Failed to initiate the send operation. The minimum fee is %1% GROTH.";
    const char kErrorSwapFeeRateMissing[] = "swap fee rate is missing";
    const char kErrorSwapWalletAddrNotResolved[] = "unable to resolve swap wallet address: %1%";
    const char kErrorSwapWalletAddrUnspecified[] = "swap wallet address should be specified";
    const char kErrorSwapWalletUserNameUnspecified[] = "user name of swap wallet should be specified";
    const char kErrorSwapWalletPwdNotProvided[] = "Please, provide password for swap wallet.";
    const char kErrorCommandNotSpecified[] = "command parameter not specified.";
    const char kErrorCommandUnknown[] = "unknown command: \'%1%\'";
    const char kErrorWalletNotInitialized[] = "Please initialize your wallet first... \nExample: beam-wallet --command=init";
    const char kErrorWalletAlreadyInitialized[] = "Your wallet is already initialized.";
    const char kErrorWalletPwdNotProvided[] = "Please, provide password for the wallet.";
    const char kErrorWalletPwdNotMatch[] = "Passwords do not match";
    const char kErrorSeedPhraseFail[] = "Please, provide a valid seed phrase for the wallet.";
    const char kErrorWalletNotCreated[] = "something went wrong, wallet not created...";
    const char kErrorCantOpenWallet[] = "Please check your password. If password is lost, restore wallet.db from latest backup or delete it and restore from seed phrase.";
    const char kErrorNodeAddrNotSpecified[] = "node address should be specified";
    const char kErrorNodeAddrUnresolved[] = "unable to resolve node address: %1%";
    const char kErrorNodePoolPeriodTooMuch[] = "The \"--node_poll_period\" parameter set to more than %1% hours may cause transaction problems.";
    const char kErrorSwapAmountMissing[] = "swap amount is missing";
    const char kErrorSwapCoinUnknown[] = "cannot swap asset coins";
    const char kErrorCantSwapAsset[] = "Unknown coin for swap";
    const char kErrorNoBTCNodeCredentials[] = "BTC node credentials should be provided";
    const char kErrorSwapAmountTooLow[] = "The swap amount must be greater than the redemption fee.";
    const char kErrorNoLTCNodeCredentials[] = "LTC node credentials should be provided";
    const char kErrorNoQTUMNodeCredentials[] = "Qtum node credentials should be provided";
    const char kErrorAmountTooLow[] = "The amount must be greater than the redemption fee.";
    const char kErrorUnableSendZeroCoin[] = "Unable to send zero coins";
    const char kErrorTxStatusInvalid[] = "Transaction could not be deleted. Invalid transaction status.";
    const char kErrorCancelTxInInvalidStatus[] = "You cannot cancel transaction in state: ";
    const char kErrorTxIdUnknown[] = "Unknown transaction ID.";
    const char kErrorImportPathInvalid[] = "Operation failed: provided path \"%1%\" is not valid";
    const char kErrorFileLocationParamReqired[] = "Failed, --file_location param required";
    const char kErrorConnectionFailed[] = "Connection Failed - Please check your network";
    const char kErrorNotEnoughtCoins[] = "Not enough coins for these transaction parameters";

    // Swap Tx statuses
    const char kSwapTxStatusInitial[] = "initial";
    const char kSwapTxStatusInvitation[] = "invitation";
    const char kSwapTxStatusBuildingBeamLockTX[] = "building Beam LockTX";
    const char kSwapTxStatusBuildingBeamRefundTX[] = "building Beam RefundTX";
    const char kSwapTxStatusBuildingBeamRedeemTX[] = "building Beam RedeemTX";
    const char kSwapTxStatusHandlingContractTX[] = "handling LockTX";
    const char kSwapTxStatusSendingRefundTX[] = "sending RefundTX";
    const char kSwapTxStatusSendingRedeemTX[] = "sending RedeemTX";
    const char kSwapTxStatusSendingBeamLockTX[] = "sending Beam LockTX";
    const char kSwapTxStatusSendingBeamRefundTX[] = "sending Beam RefundTX";
    const char kSwapTxStatusSendingBeamRedeemTX[] = "sending Beam RedeemTX";
    const char kSwapTxStatusCompleted[] = "completed";
    const char kSwapTxStatusCancelled[] = "canceled";
    const char kSwapTxStatusAborted[] = "aborted";
    const char kSwapTxStatusFailed[] = "failed";
    const char kSwapTxStatusExpired[] = "expired";

    // Coins available for swap
    const char kSwapCoinBTC[] = "BTC";
    const char kSwapCoinLTC[] = "LTC";
    const char kSwapCoinQTUM[] = "QTUM";
    const char kSwapCoinBCH[] = "BCH";
    const char kSwapCoinBSV[] = "BSV";
    const char kSwapCoinDOGE[] = "DOGE";
    const char kSwapCoinDASH[] = "DASH";

    // Treasury messages
    const char kTreasuryConsumeRemaining[] = "Maturity=%1%, Consumed = %2% / %3%";
    const char kTreasuryDataHash[] = "Treasury data hash: %1%";
    const char kTreasuryRecoveredCoinsTitle[] = "Recovered coins: %1%";
    const char kTreasuryRecoveredCoin[] = "\t%1%, Height=%2%";
    const char kTreasuryBurstsTitle[] = "Total bursts: %1%";
    const char kTreasuryBurst[] = "\tHeight=%1%, Value=%2%";
    const char kTreasuryID[] = "ID: %1%";

    // Address
    const char kAllAddrExprChanged[] = "Expiration for all addresses  was changed to \"%1%\".";
    const char kAddrExprChanged[] = "Expiration for address %1% was changed to \"%2%\".";
    const char kWalletIdNewGenerated[] = "New WalletID (SBBS address) generated: %1%";
    const char kAddrNewGeneratedLabel[] = "comment = %1%";

    const char kAddrListComment[]  = "Comment: ";
    const char kAddrListAddress[]  = "Address: ";
    const char kAddrListIdentity[] = "Identity: ";
    const char kAddrListActive[]   = "Active: ";
    const char kAddrListExprDate[] = "Expires: ";
    const char kAddrListCreated[]  = "Created: ";
    const char kAddrListWalletID[] = "Wallet ID: ";
    const char kAddrListType[]     = "Type: ";

    // Seed phrase
    const char kSeedPhraseGeneratedTitle[] = "======\nGenerated seed phrase: \n\n\t";
    const char kSeedPhraseGeneratedMessage[] = "\n\n\tIMPORTANT\n\n\tYour seed phrase is the access key to all the cryptocurrencies in your wallet.\n\tPrint or write down the phrase to keep it in a safe or in a locked vault.\n\tWithout the phrase you will not be able to recover your money.\n======";
    const char kSeedPhraseReadTitle[] = "Generating seed phrase...";

    // Wallet info
    const char kWalletSummaryFormat[] = "____Wallet summary____\n\n%1%%2%\n%3%%4%\n\n%5%%6%\n%7%%8%\n%9%%10%\n%11%%12%\n%13%%14%\n%15%%16%\n%17%%18%\n%19%%20%\n%21%%22%\n\n";
    const char kWalletAssetSummaryFormat[] = "____Asset summary____\n\n%1%%2%\n%3%%4%\n%5%%6%\n%7%%8%\n%9%%10%\n%11%%12%\n\n%13%%14%\n%15%%16%\n%17%%18%\n%19%%20%\n%21%%22%\n\n";
    const char kWalletUnreliableAsset[] = "This asset has been burned or reissued at block %1%. This allows owner to unregister asset and register it again with different metadata but the same Asset ID technically producing completely new asset. All coins and transactions before block %1% could potentially belong to another asset.\n\n";
    const char kWalletNoInfo[] = "Asset info is not available. Asset may never exited, be unregistered or asset info needs to be updated using asset_info command.\n\n";
    const char kWalletAssetOwnerFormat[] = "Asset Owner ID";
    const char kWalletAssetIDFormat[] = "Asset ID";
    const char kWalletAssetNameFormat[] = "Asset Name";
    const char kWalletAssetLockHeightFormat[] = "Lock Height";
    const char kWalletAssetRefreshHeightFormat[] = "Refresh Height";
    const char kWalletAssetEmissionFormat[] = "Total Emission";
    const char kBeamFee[] = " (BEAM Fee)";
    const char kBeamRefund[] = " (BEAM Refund)";
    const char kWalletSummaryFieldCurHeight[] = "Current height";
    const char kWalletSummaryFieldCurStateID[] = "Current state ID";
    const char kWalletSummaryFieldAvailable[] = "Available";
    const char kWalletSummaryFieldMaturing[] = "Maturing";
    const char kWalletSummaryFieldInProgress[] = "In progress";
    const char kWalletSummaryFieldUnavailable[] = "Unavailable";
    const char kWalletSummaryFieldAvailableCoinbase[] = "Available coinbase";
    const char kWalletSummaryFieldTotalCoinbase[] = "Total coinbase";
    const char kWalletSummaryFieldAvaliableFee[] = "Available fee";
    const char kWalletSummaryFieldTotalFee[] = "Total fee";
    const char kWalletSummaryFieldTotalUnspent[] = "Total unspent";
    const char kCoinsTableHeadFormat[] = "COINS\n\n  | %1% | %2% | %3% | %4% | %5% | %6% |";
    const char kCoinColumnId[] = "ID";
    const char kCoinColumnMaturity[] = "Maturity";
    const char kCoinColumnStatus[] = "Status";
    const char kCoinColumnType[] = "Type";
    const char kCoinsTableFormat[] = "    %1%   %2%   %3%   %4%   %5%   %6%  ";
    const char kCoinConfirmationsCount[] = "Count of confirmations before you can't spend coin is: %1%";

    // Tx history
    const char kTxHistoryTableHead[] = "TRANSACTIONS\n\n  | %1% | %2% | %3% | %4% | %5% | %6% | %7% |";
    const char kTxHistoryTableFormat[] = "    %1%   %2%   %3%   %4%   %5%   %6%   %7%  ";
    const char kTxHistoryColumnDatetTime[] = "datetime";
    const char kTxHistoryColumnHeight[] = "height";
    const char kTxHistoryColumnDirection[] = "direction";
    const char kTxHistoryColumnAmount[] = "amount, BEAM";
    const char kAssetTxHistoryColumnAmount[] = "amount, %1%";
    const char kTxHistoryColumnStatus[] = "status";
    const char kTxHistoryColumnId[] = "ID";
    const char kTxHistoryColumnKernelId[] = "kernel ID";
    const char kTxDirectionSelf[] = "self transaction";
    const char kTxDirectionOut[] = "outgoing";
    const char kTxDirectionIn[] = "incoming";
    const char kTxHistoryEmpty[] = "No transactions";
    const char kNoCoins[] = "No coins";
    const char kNoShieldedCoins[] = "No Shielded coins";
    const char kTxHistoryUnreliableTxs[] = "\n    ---- Transactions below might belong to another asset ----\n\n";
    const char kTxHistoryUnreliableCoins[] = "\n    ---- Coins below might belong to another asset ----\n\n";
    const char kTxAddress[] = "address";
    const char kSwapTxHistoryEmpty[] = "No swap transactions";
    const char kSwapTxHistoryTableHead[] = "SWAP TRANSACTIONS\n\n  | %1% | %2% | %3% | %4% | %5% | %6% |";
    const char kSwapTxHistoryTableFormat[] = "    %1%   %2%   %3%   %4%   %5%   %6%  ";
    const char kTxHistoryColumnSwapAmount[] = "swap amount";
    const char kTxHistoryColumnSwapType[] = "swap type";
    const char kOrphanedAseetTxs[]   = "____Orphaned transactions____\n\nThis sections includes transactions that do not have valid Asset ID.\n";
    const char kNoAssetsInWallet[]   = "You do not have any assets in your wallet";
    const char kNoAssetTxsInWallet[] = "You do not have any asset transactions in your wallet";

    // Tx Details
    const char kTxDetailsFormat[] = "Transaction details:\n\n%1%Status:            %2%";
    const char kTxDetailsFailReason[] = "\nReason:            %1%";

    const char kPpExportedFrom[] = "Exported form: %1%";
    const char kSubKeyInfo[] = "Secret Subkey %1%: %2%";
    const char kOwnerKeyInfo[] = "Owner Viewer key: %1%";
    const char kDataExportedMessage[] = "Data has been successfully exported.";

    const char kVersionInfo[] = "Beam Wallet %1% (%2%)";
    const char kRulesSignatureInfo[] = "Rules signature: %1%";
    const char kStartMessage[] = "starting a wallet...";
    const char kWalletCreatedMessage[] = "wallet successfully created...";
    const char kDefaultAddrLabel[] = "default";
    const char kWalletOpenedMessage[] = "wallet successfully opened...";

    const char kNodePoolPeriod[] = "Node poll period = %1% ms";
    const char kNodePoolPeriodRounded[] = "Node poll period has been automatically rounded up to block rate: %1% ms";

    const char kPpRequired[] = "Parameter set: Payment proof required: %1%";

    // Confidential assets
    const char kErrorAssetIdOrMetaRequired[] = "Asset ID or Asset metadata is required";
    const char kErrorAssetMetadataRequired[] = "Asset metadata required";
    const char kErrorAssetIDRequired[]       = "Asset ID required";
    const char kErrorAssetNonSTDMeta[]       = "Bad (non-std) asset metadata";
    const char kErrorAssetNotFound[]         = "Asset not found in a local database. Check asset ID, update asset info using asset_info command or provide asset metadata";
    const char kErrorAssetNotOwned[]         = "You do not own the asset";
    const char kErrorAssetLoadMeta[]         = "Cannot load asset metadata";

    // Laser
#ifdef BEAM_LASER_SUPPORT
    const char kLaserWaitPeer[] = "Waiting";
    const char kLaserOpening[] = "Opening";
    const char kLaserOpenFailed[] = "OpenFailed";
    const char kLaserOpen[] = "Open";
    const char kLaserUpdating[] = "Updating";
    const char kLaserClosing[] = "Closing";
    const char kLaserClosed[] = "Closed";
    const char kLaserExpired[] = "Expired";
    const char kLaserUnknown[] = "Unknown";
    const char kLaserErrorParamsRead[] = "Can't read lightning params";
    const char kLaserErrorMyAmountMissing[] = "My amount is missing.";
    const char kLaserErrorTrgAmountMissing[] = "Remote side amount is missing.";
    const char kLaserErrorChannelIdMissing[] = "channel ID is missing";
    const char kLaserChannelListTableHead[] = "Laser Channels:\n\n%1%|%2%|%3%|%4%|%5%|%6%";
    const char kLaserChannelListChannelId[] = "channel Id";
    const char kLaserChannelListAMy[] = "aMy";
    const char kLaserChannelListATrg[] = "aTrg";
    const char kLaserChannelListState[] = "state";
    const char kLaserChannelListFee[] = "fee";
    const char kLaserChannelListValidTill[] = "valid till";
    const char kLaserChannelTableBody[] = "%1%|%2%|%3%|%4%|%5%|%6%";
    const char kLaserErrorOpenFailed[] = "Open failed : %1%";
    const char kLaserMessageClosed[] = "Closed : %1%";
    const char kLaserMessageExpired[] = "Expired : %1%";
    const char kLaserErrorTransferFailed[] = "Transfer to channel : %1% - failed.";
    const char kLaserMessageChannelServed[] = "Channel: %1% served";
    const char kLaserMessageUpdateFinished[] = "Update finished: %1%";
    const char kLaserMessageCloseFailed[] = "Close failed: %1%";

    const char kLaserCurrentState[] = "Current state is %1%";
#endif  // BEAM_LASER_SUPPORT

    // lelantus
    const char kErrorShieldedIDMissing[] = "shielded id is missing";
    const char kErrorWindowBeginMissing[] = "window begin is missing";
}
