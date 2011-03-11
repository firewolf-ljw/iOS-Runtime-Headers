/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@class NSData, NSArray;

@interface CPSearchMatcher : NSObject  {
    NSArray *_components;
    NSData *_context;
    BOOL _contextIsDiacriticSensitive;
}


- (void)dealloc;
- (id)initWithSearchString:(id)arg1;
- (BOOL)matchesUTF8String:(const char *)arg1;
- (BOOL)matches:(id)arg1;
- (id)initWithSearchString:(id)arg1 andLocale:(id)arg2 andOptions:(int)arg3;
- (id)initWithSearchString:(id)arg1 andLocale:(id)arg2;
- (id)initWithSearchString:(id)arg1 options:(int)arg2;

@end
