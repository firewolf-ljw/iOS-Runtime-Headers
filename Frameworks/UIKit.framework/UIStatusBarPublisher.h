/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableSet;

@interface UIStatusBarPublisher : NSObject  {
    struct __CFMachPort { } *_machPort;
    int _styleOverrides;
    NSMutableSet *_statusBarItems;
}


- (id)initWithCFMachPort:(struct __CFMachPort { }*)arg1;
- (unsigned int)publisherPort;
- (int)styleOverrides;
- (id)statusBarItems;
- (void)removeStatusBarItem:(int)arg1;
- (void)dealloc;
- (void)addStyleOverrides:(int)arg1;
- (void)removeStyleOverrides:(int)arg1;
- (void)addStatusBarItem:(int)arg1;

@end
