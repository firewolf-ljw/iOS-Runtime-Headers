/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUScriptMediaItemCollection;

@interface SUScriptMediaPickerEvent : SUScriptObject  {
    SUScriptMediaItemCollection *_collection;
}

@property(getter=_collection,retain,readonly) SUScriptMediaItemCollection * collection;

+ (id)webScriptNameForKey:(const char *)arg1;

- (void)dealloc;
- (id)_collection;
- (void)set_collection:(id)arg1;
- (id)initWithCollection:(id)arg1;
- (id)_className;

@end
