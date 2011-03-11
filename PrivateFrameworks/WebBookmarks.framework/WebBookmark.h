/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@class NSDictionary, NSString, NSData;

@interface WebBookmark : NSObject  {
    BOOL _folder;
    NSString *_title;
    NSString *_url;
    NSString *_UUID;
    NSString *_serverID;
    NSString *_syncKey;
    NSData *_syncData;
    BOOL _editable;
    BOOL _deletable;
    BOOL _hidden;
    NSDictionary *_extraAttributes;
    unsigned int _id;
    unsigned int _parentID;
    unsigned int _specialID;
    unsigned int _orderIndex;
    BOOL _inserted;
}

@property(retain) NSString * serverID;
@property(retain) NSString * syncKey;
@property(retain) NSData * syncData;
@property(retain) NSDictionary * extraAttributes;
@property(getter=isInserted,readonly) BOOL inserted;
@property(getter=isFolder,readonly) BOOL folder;
@property(getter=isHidden,readonly) BOOL hidden;
@property(getter=isDeletable,readonly) BOOL deletable;
@property(getter=isEditable,readonly) BOOL editable;
@property(readonly) unsigned int specialID;
@property(readonly) NSString * UUID;
@property(readonly) unsigned int identifier;
@property(readonly) unsigned int parentID;
@property(retain) NSString * address;
@property(retain) NSString * title;


- (BOOL)isFolder;
- (id)localizedTitle;
- (unsigned int)identifier;
- (BOOL)isEditable;
- (id)title;
- (BOOL)isHidden;
- (id)init;
- (void)dealloc;
- (id)description;
- (void)setTitle:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setSyncData:(id)arg1;
- (id)syncData;
- (void)_setID:(unsigned int)arg1;
- (void)_setUUID:(id)arg1;
- (void)_setInserted:(BOOL)arg1;
- (unsigned int)specialID;
- (void)_setHidden:(BOOL)arg1;
- (void)_markSpecial:(unsigned int)arg1;
- (id)_initWithSqliteRow:(struct sqlite3_stmt { }*)arg1;
- (void)_setParentID:(unsigned int)arg1;
- (void)_setOrderIndex:(unsigned int)arg1;
- (id)initWithTitle:(id)arg1 address:(id)arg2;
- (id)initStaticWithTitle:(id)arg1 address:(id)arg2;
- (id)initFolderWithParentID:(unsigned int)arg1;
- (id)shortTypeDescription;
- (BOOL)isDeletable;
- (unsigned int)_orderIndex;
- (id)address;
- (BOOL)isInserted;
- (id)UUID;
- (id)extraAttributes;
- (void)setExtraAttributes:(id)arg1;
- (void)setServerID:(id)arg1;
- (id)syncKey;
- (void)setSyncKey:(id)arg1;
- (id)serverID;
- (unsigned int)parentID;

@end
