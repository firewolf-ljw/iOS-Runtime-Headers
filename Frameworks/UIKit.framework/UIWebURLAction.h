/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebURLAction : NSObject  {
}

+ (BOOL)shouldImmediatelyShowActionSheetForURL:(id)arg1 forFrame:(id)arg2;
+ (BOOL)performActionWithTag:(int)arg1 forURL:(id)arg2 forFrame:(id)arg3 withPopoverController:(id)arg4 interactionDelegate:(id)arg5;
+ (BOOL)performActionWithTag:(int)arg1 forURL:(id)arg2 forFrame:(id)arg3 inView:(id)arg4 interactionDelegate:(id)arg5;
+ (id)actionSheetForURL:(id)arg1 withAllowedTypes:(unsigned int)arg2 inFrame:(id)arg3;
+ (BOOL)performDefaultActionForURL:(id)arg1 withAllowedTypes:(unsigned int)arg2 forFrame:(id)arg3 inView:(id)arg4;
+ (id)sharedInstance;

- (BOOL)performDefaultActionForURL:(id)arg1 withAllowedTypes:(unsigned int)arg2 forFrame:(id)arg3 inView:(id)arg4;
- (void)dealloc;

@end
