/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class WebSerializedJSValuePrivate;

@interface WebSerializedJSValue : NSObject  {
    WebSerializedJSValuePrivate *_private;
}


- (id)initWithValue:(struct OpaqueJSValue { }*)arg1 context:(struct OpaqueJSContext { }*)arg2 exception:(const struct OpaqueJSValue {}**)arg3;
- (struct OpaqueJSValue { }*)deserialize:(struct OpaqueJSContext { }*)arg1;
- (void)dealloc;

@end
