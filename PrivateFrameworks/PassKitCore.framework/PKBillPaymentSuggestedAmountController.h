/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKBillPaymentSuggestedAmountController : NSObject {
    PKAccount * _account;
    NSArray * _approvedTransactionsBillPaymentForPreviousStatement;
    NSArray * _approvedTransactionsBillPaymentSinceStatement;
    NSArray * _approvedTransactionsPurchasesForPreviousStatement;
    NSArray * _approvedTransactionsPurchasesSinceStatement;
    PKAccountServiceAccountResolutionCofiguration * _configuration;
    bool  _currentStatementIsLastMonthsStatement;
    NSDecimalNumber * _currentStatementPaymentsSum;
    NSArray * _currentStatementSelectedSuggestedAmountEvents;
    NSMutableArray * _differentialPrivacyFeatures;
    _DPStringRecorder * _differentialPrivacyRecorder;
    bool  _isMonthOne;
    bool  _isMonthZero;
    bool  _isOnPaymentPlan;
    bool  _isOnPlanCompletion;
    NSMutableDictionary * _merchantCategoryTransactionSums;
    NSDateFormatter * _monthAndDayFormatter;
    NSDateFormatter * _monthFormatter;
    long long  _numberOfActiveInstallments;
    long long  _numberOfActiveStatementedInstallments;
    NSDecimalNumber * _previousStatementPaymentsSum;
    NSArray * _previousStatementSelectedSuggestedAmountEvents;
    NSDecimalNumber * _statementPurchasesSum;
    PKTransactionSource * _transactionSource;
}

@property (nonatomic, readonly) PKAccount *account;
@property (nonatomic, readonly) NSArray *approvedTransactionsBillPaymentForPreviousStatement;
@property (nonatomic, readonly) NSArray *approvedTransactionsBillPaymentSinceStatement;
@property (nonatomic, readonly) NSArray *approvedTransactionsPurchasesForPreviousStatement;
@property (nonatomic, readonly) NSArray *approvedTransactionsPurchasesSinceStatement;
@property (nonatomic, retain) PKAccountServiceAccountResolutionCofiguration *configuration;
@property (nonatomic, readonly) NSArray *currentStatementSelectedSuggestedAmountEvents;
@property (nonatomic, readonly) NSArray *previousStatementSelectedSuggestedAmountEvents;
@property (nonatomic, readonly) PKTransactionSource *transactionSource;

+ (void)_approvedTransactionsForPreviousStatementForAccount:(id)arg1 transactionSource:(id)arg2 transactionType:(long long)arg3 completion:(id /* block */)arg4;
+ (void)_approvedTransactionsSinceStatementForAccount:(id)arg1 transactionSource:(id)arg2 transactionType:(long long)arg3 completion:(id /* block */)arg4;
+ (void)approvedTransactionsBillPaymentForPreviousStatementForAccount:(id)arg1 transactionSource:(id)arg2 completion:(id /* block */)arg3;
+ (void)approvedTransactionsBillPaymentSinceStatementForAccount:(id)arg1 transactionSource:(id)arg2 completion:(id /* block */)arg3;
+ (void)approvedTransactionsPurchasesForPreviousStatementForAccount:(id)arg1 transactionSource:(id)arg2 completion:(id /* block */)arg3;
+ (void)approvedTransactionsPurchasesSinceStatementForAccount:(id)arg1 transactionSource:(id)arg2 completion:(id /* block */)arg3;
+ (void)currentStatementSelectedSuggestedAmountEventsForAccount:(id)arg1 completion:(id /* block */)arg2;
+ (void)defaultControllerForAccount:(id)arg1 transactionSource:(id)arg2 configuration:(id)arg3 completion:(id /* block */)arg4;
+ (void)previousStatementSelectedSuggestedAmountEventsForAccount:(id)arg1 completion:(id /* block */)arg2;

- (void).cxx_destruct;
- (bool)_allMandatoryValuesAreSameAmount;
- (bool)_calculateCurrentStatementIsLastMonthsStatement;
- (id)_calculateThresholdForLastPaymentCategory:(unsigned long long)arg1 statementBalance:(id)arg2 suggestedAmountWithSameCategory:(id)arg3;
- (bool)_categoryIsCurrentBalanceType:(unsigned long long)arg1;
- (bool)_categoryIsPaymentPlan:(unsigned long long)arg1;
- (id)_createDefaultAmountSuggestionListFromAccount;
- (id)_filterSuggestions:(id)arg1 belowThreshold:(id)arg2;
- (void)_generateAmountSuggestionListUsingTransactionHistoryForList:(id)arg1;
- (void)_initializeDifferentialPrivacy:(id)arg1 accountSummary:(id)arg2;
- (id)_messageForSuggestion:(id)arg1;
- (void)_minimumMerchcantCategoriesAboveMinimumAmount:(id)arg1 minMerchantCategory1:(long long*)arg2 minMerchantCategory2:(long long*)arg3 minMerchantCategorySum1:(id*)arg4 minMerchantCategorySum2:(id*)arg5;
- (id)_planCompletionTitleString;
- (void)_populatePriorityValuesForList:(id)arg1;
- (void)_populateStringValuesForList:(id)arg1;
- (id)_remainingStatementBalanceGapDescriptionText;
- (id)_remainingStatementBalanceGapTitleText;
- (id)_remainingStatementBalanceMessageString;
- (id)_remainingStatementBalanceTitleString;
- (void)_setDifferentialPrivacyFeature:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (bool)_suggestedAmountListIsValidAfterPurgeIfNecessary:(id)arg1;
- (id)_suggestedAmountsForPayOffDateForStatementBalance:(id)arg1 creditUtilization:(id)arg2 lastPaymentCategory:(unsigned long long)arg3;
- (id)_titleForSuggestion:(id)arg1;
- (void)_zerothOrFirstMonthBillPaymentSuggestionsForList:(id)arg1;
- (id)account;
- (id)approvedTransactionsBillPaymentForPreviousStatement;
- (id)approvedTransactionsBillPaymentSinceStatement;
- (id)approvedTransactionsPurchasesForPreviousStatement;
- (id)approvedTransactionsPurchasesSinceStatement;
- (id)configuration;
- (id)currentStatementSelectedSuggestedAmountEvents;
- (id)differentialPrivacyFeaturesAsString;
- (id)generateAmountSuggestionList;
- (id)initWithAccount:(id)arg1 transactionSource:(id)arg2 currentStatementSelectedSuggestedAmountEvents:(id)arg3 previousStatementSelectedSuggestedAmountEvents:(id)arg4 approvedTransactionsPurchasesSinceStatement:(id)arg5 approvedTransactionsPurchasesForPreviousStatement:(id)arg6 approvedTransactionsBillPaymentSinceStatement:(id)arg7 approvedTransactionsBillPaymentForPreviousStatement:(id)arg8 configuration:(id)arg9;
- (id)previousStatementSelectedSuggestedAmountEvents;
- (void)recordPaymentActionWithDifferentialPrivacy:(unsigned long long)arg1;
- (void)setConfiguration:(id)arg1;
- (id)transactionSource;

@end