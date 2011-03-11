/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SSURLRequestProperties, NSString;

@interface SUNavigationHistoryItem : NSObject <NSCopying> {
    NSString *_title;
    SSURLRequestProperties *_urlRequestProperties;
}

@property(readonly) SSURLRequestProperties * URLRequestProperties;
@property(readonly) NSString * title;


- (id)initWithDictionary:(id)arg1;
- (id)title;
- (id)init;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)URLRequestProperties;
- (id)newViewControllerInSection:(id)arg1;

@end
