/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary, NSString, DOMElement, DOMHTMLInputElement;

@interface UIWebFormCompletionController : NSObject  {
    DOMHTMLInputElement *_element;
    NSString *_fieldName;
    DOMElement *_form;
    BOOL _isLoginForm;
    NSMutableDictionary *_items;
}

+ (void)preFillInWebFrame:(id)arg1;
+ (BOOL)previousDataCompletionEnabled;
+ (BOOL)shouldSaveFormData;
+ (BOOL)addressBookCompletionEnabled;
+ (BOOL)passwordCompletionEnabled;
+ (BOOL)shouldSaveUsernamesAndPasswords;
+ (id)_cryptData:(id)arg1 encode:(BOOL)arg2;
+ (void)_loadCompletionDB;
+ (void)_pruneCompletionDB;
+ (void)_reapABMarker:(id)arg1 forFrame:(id)arg2 fieldName:(id)arg3;
+ (void)_saveCompletionDB:(id)arg1;
+ (void)_saveCompletionDBSoon;
+ (void)_appWillTerminate:(id)arg1;
+ (id)domainsWithPreviousData;
+ (void)clearPreviousDataForDomain:(id)arg1;
+ (void)clearPreviousDataDatabase;
+ (BOOL)_frame:(id)arg1 sourceFrame:(id)arg2 willSubmitLoginForm:(id)arg3 withValues:(id)arg4 autoFiller:(id)arg5 submissionListener:(id)arg6;
+ (void)alertPrompt:(id)arg1 clickedButtonAtIndex:(int)arg2;
+ (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
+ (void)_frame:(id)arg1 sourceFrame:(id)arg2 willSubmitRegularForm:(id)arg3 withValues:(id)arg4;
+ (void)frame:(id)arg1 sourceFrame:(id)arg2 willSubmitForm:(id)arg3 withValues:(id)arg4 submissionListener:(id)arg5;
+ (unsigned int)_indexOfMarkerInMatches:(id)arg1 matchingABMatch:(id)arg2;
+ (id)_abMultiValuesForPerson:(void*)arg1 property:(id)arg2 property:(int)arg3 key:(id)arg4 label:(id)arg5;
+ (id)_abValuesForPerson:(void*)arg1 property:(id)arg2 propertyID:(int)arg3 key:(id)arg4 label:(id)arg5;
+ (id)_abValuesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3;
+ (void)_addABMatchesToArray:(id)arg1 forString:(id)arg2 atABPointer:(id)arg3;
+ (void)_addPreviousDataMatchesToArray:(id)arg1 forString:(id)arg2 frame:(id)arg3 fieldName:(id)arg4;
+ (id)_credentialMatchesForString:(id)arg1 frame:(id)arg2;
+ (id)_matchesForString:(id)arg1 frame:(id)arg2 fieldName:(id)arg3 control:(id)arg4;
+ (id)currentFormInFrame:(id)arg1;
+ (id)firstFormInFrame:(id)arg1;
+ (id)currentOrFirstFrameAndForm:(id*)arg1 inWebView:(id)arg2;
+ (BOOL)_autoFillPasswordInFrame:(id)arg1 autoFiller:(id)arg2;
+ (BOOL)autoFillInWebView:(id)arg1;
+ (id)preFillForm:(id)arg1 inFrame:(id)arg2;
+ (BOOL)credentialIsNeverSaveMarker:(id)arg1;
+ (void)clearAutoFillStateForFrame:(id)arg1;
+ (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;

- (void)acceptedAutoFillWord:(id)arg1;
- (BOOL)hasCurrentSuggestions;
- (id)queryString;
- (id)unsortedListItemsWithQueryString:(id)arg1;
- (id)computeListItemsAndInitiallySelectedIndex:(unsigned int*)arg1 withQueryString:(id)arg2;
- (id)initWithDOMElement:(id)arg1 webFrame:(id)arg2;
- (void)sourceFieldTextDidChange;
- (id)selectedListItem:(id)arg1;
- (void)autoFillCommand:(id)arg1;
- (BOOL)doSourceFieldCommandBySelector:(SEL)arg1;
- (BOOL)shouldSuppressAutocomplete;
- (void)reflectSelectedListItem:(id)arg1;
- (void)reflectFinalSelectedListItem:(id)arg1;
- (id)reflectedStringForHighlightedListItem:(id)arg1;
- (id)reflectedStringForActivatedListItem:(id)arg1;
- (BOOL)leavingFieldReflectsSelectedListItem;
- (BOOL)returnPerformsActionWhenShowingList;
- (BOOL)showsListForSingleListItem;
- (void)sourceFieldTextDidEndEditing;
- (void)abortCompletion;
- (BOOL)currentTextChangeIsProgrammatic;
- (void)autoFillWithElementValue;
- (id)webFrame;
- (struct { id x1; unsigned int x2; })suggestionsForString:(id)arg1 inputIndex:(unsigned int)arg2;
- (void)dealloc;

@end
