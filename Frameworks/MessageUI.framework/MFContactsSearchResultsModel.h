/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@class NSMutableArray, NSMutableDictionary;

@interface MFContactsSearchResultsModel : NSObject  {
    NSMutableArray *_searchResults;
    NSMutableArray *_recentSearchResults;
    NSMutableDictionary *_localSearchResultsByAddress;
    NSMutableDictionary *_serverSearchResultsByAddress;
    NSMutableDictionary *_recipientsByAddress;
    unsigned int _finishedSearchingForRecentRecipients : 1;
    unsigned int _finishedSearchingForLocalContacts : 1;
    unsigned int _finishedSearchingForRemoteContacts : 1;
    unsigned int _favorMobileNumbers : 1;
}


- (id)init;
- (void)dealloc;
- (id)_bestRecipientForAddress:(id)arg1 fallback:(id)arg2;
- (void)_addBestRecipientsForRecipients:(id)arg1 excluding:(id)arg2 toArray:(id)arg3;
- (id)initWithFavorMobileNumbers:(BOOL)arg1;
- (void)resetIncludingResults:(BOOL)arg1;
- (id)results;
- (void)addResults:(id)arg1 ofType:(int)arg2;
- (void)finishedAddingResultsOfType:(int)arg1;

@end
