/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class NSMutableDictionary, AccountsManager;

@interface CalendarAccountsController : NSObject  {
    NSMutableDictionary *_lastCalendarRefreshDates;
    NSMutableDictionary *_lastStoreRefreshDates;
    NSMutableDictionary *_lastStoreListingRefreshDates;
    AccountsManager *_accountsManager;
}

+ (void)invalidate;
+ (id)sharedInstance;

- (void)dealloc;
- (id)titleForSource:(id)arg1 forBeginningOfSentence:(BOOL)arg2;
- (id)titleForStore:(void*)arg1 forBeginningOfSentence:(BOOL)arg2;
- (id)accountTypeTitleForStore:(void*)arg1;
- (id)accountTypeTitleForSource:(id)arg1;
- (int)sortOrderForSource:(id)arg1;
- (int)sortOrderForStoreType:(int)arg1;
- (BOOL)calendarNeedsRefresh:(void*)arg1;
- (BOOL)storeNeedsRefresh:(void*)arg1;
- (BOOL)storeListingNeedsRefresh:(void*)arg1;
- (void)refreshCalendar:(void*)arg1;
- (void)_refreshSubscribedStore:(void*)arg1;
- (void)_refreshStore:(void*)arg1;
- (void)refreshStore:(void*)arg1;
- (void)refreshListingForStore:(void*)arg1;
- (void*)copyMainCalendarForStore:(void*)arg1;
- (id)accountManager;

@end
