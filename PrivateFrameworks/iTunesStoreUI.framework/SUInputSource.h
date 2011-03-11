/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUInputSource : NSObject  {
}

@property(readonly) long long expectedLength;
@property(readonly) BOOL hasBytesAvailable;
@property(readonly) unsigned int minimumReadLength;


- (void)close;
- (BOOL)hasBytesAvailable;
- (long long)expectedLength;
- (id)copyAllData:(id*)arg1;
- (BOOL)open:(id*)arg1;
- (unsigned int)minimumReadLength;
- (int)read:(char *)arg1 maxLength:(unsigned int)arg2 error:(id*)arg3;

@end
