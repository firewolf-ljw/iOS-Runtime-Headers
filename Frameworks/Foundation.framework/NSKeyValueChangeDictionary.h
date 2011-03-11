/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSObject, NSIndexSet;

@interface NSKeyValueChangeDictionary : NSDictionary  {
    int _retainCountMinusOne;
    struct { 
        unsigned int kind; 
        NSObject *oldValue; 
        NSObject *newValue; 
        NSIndexSet *indexes; 
    } _details;
    NSObject *_originalObservable;
    BOOL _isPriorNotification;
    BOOL _isRetainingObjects;
}


- (id)keyEnumerator;
- (oneway void)release;
- (id)retain;
- (void)dealloc;
- (id)objectForKey:(id)arg1;
- (unsigned int)retainCount;
- (unsigned int)count;
- (void)setDetailsNoCopy:(struct { unsigned int x1; id x2; id x3; id x4; })arg1 originalObservable:(id)arg2;
- (id)initWithDetailsNoCopy:(struct { unsigned int x1; id x2; id x3; id x4; })arg1 originalObservable:(id)arg2 isPriorNotification:(BOOL)arg3;
- (void)retainObjects;
- (void)setOriginalObservable:(id)arg1;

@end
