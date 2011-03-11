/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIURLResolver : NSObject  {
}

+ (id)sharedResolver;
+ (id)urlCacheName;
+ (id)urlCacheChangedNotificationName;
+ (void)invalidate;

- (id)_copyRegularExpressionsFromArray:(id)arg1;
- (BOOL)_string:(id)arg1 matchesPatterns:(id)arg2;
- (BOOL)_url:(id)arg1 matchesHostPatterns:(id)arg2 pathPatterns:(id)arg3;
- (BOOL)_url:(id)arg1 matchesHostWhitelist:(id)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)init;
- (void)dealloc;

@end
