/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSOperationQueue, NSString, NSNotificationCenter;

@interface __NSObserver : NSObject  {
    NSNotificationCenter *nc;
    NSOperationQueue *queue;
    NSString *name;
    id object;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id block;

}

+ (id)observerWithCenter:(id)arg1 queue:(id)arg2 name:(id)arg3 object:(id)arg4 block:(id)arg5;
+ (BOOL)isAnObserver:(id)arg1;
+ (void)forgetObserver:(id)arg1;

- (id)object;
- (id)name;
- (void)dealloc;
- (void)_doit:(id)arg1;

@end
