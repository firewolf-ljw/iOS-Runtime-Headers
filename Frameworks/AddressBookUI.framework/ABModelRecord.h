/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray;

@interface ABModelRecord : NSObject  {
    void *_record;
    int _highlightIndex;
    BOOL _isGroup;
    NSArray *_namePieces;
}


- (void)dealloc;
- (id)initWithRecord:(void*)arg1 highlightIndex:(long)arg2 group:(BOOL)arg3 namePieces:(id)arg4;
- (long)highlightIndex;
- (BOOL)isGroup;
- (id)namePieces;
- (void*)record;

@end
