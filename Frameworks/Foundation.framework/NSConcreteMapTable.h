/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSWeakCallback;

@interface NSConcreteMapTable : NSMapTable  {
    struct NSSlice { 
        void **items; 
        BOOL wantsStrong; 
        BOOL wantsWeak; 
        BOOL shouldCopyIn; 
        BOOL usesStrong; 
        BOOL usesWeak; 
        BOOL usesSentinel; 
        BOOL pointerPersonality; 
        BOOL integerPersonality; 
        BOOL simpleReadClear; 
        NSWeakCallback *callback; 
        int (*sizeFunction)(); 
        int (*hashFunction)(); 
        int (*isEqualFunction)(); 
        int (*describeFunction)(); 
        int (*acquireFunction)(); 
        int (*relinquishFunction)(); 
        int (*allocateFunction)(); 
        int (*freeFunction)(); 
        int (*readAt)(); 
        int (*clearAt)(); 
        int (*storeAt)(); 
    } keys;
    struct NSSlice { 
        void **items; 
        BOOL wantsStrong; 
        BOOL wantsWeak; 
        BOOL shouldCopyIn; 
        BOOL usesStrong; 
        BOOL usesWeak; 
        BOOL usesSentinel; 
        BOOL pointerPersonality; 
        BOOL integerPersonality; 
        BOOL simpleReadClear; 
        NSWeakCallback *callback; 
        int (*sizeFunction)(); 
        int (*hashFunction)(); 
        int (*isEqualFunction)(); 
        int (*describeFunction)(); 
        int (*acquireFunction)(); 
        int (*relinquishFunction)(); 
        int (*allocateFunction)(); 
        int (*freeFunction)(); 
        int (*readAt)(); 
        int (*clearAt)(); 
        int (*storeAt)(); 
    } values;
    unsigned int count;
    unsigned int capacity;
    unsigned int keyOptions;
    unsigned int valueOptions;
    unsigned int mutations;
    int growLock;
    boolshouldRehash;
}


- (id)allValues;
- (id)allKeys;
- (id)keyEnumerator;
- (Class)classForCoder;
- (void)finalize;
- (unsigned int)hash;
- (id)objectEnumerator;
- (void)removeObjectForKey:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)copy;
- (void)dealloc;
- (id)objectForKey:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long *x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (unsigned int)count;
- (void)raiseCountUnderflowException;
- (unsigned int)realCount;
- (void)checkCount:(const char *)arg1;
- (void)zeroPairedEntries;
- (void)_setBackingStore;
- (id)initWithKeyOptions:(unsigned int)arg1 valueOptions:(unsigned int)arg2 capacity:(unsigned int)arg3;
- (id)initWithKeyPointerFunctions:(id)arg1 valuePointerFunctions:(id)arg2 capacity:(unsigned int)arg3;
- (id)keyPointerFunctions;
- (id)valuePointerFunctions;
- (BOOL)containsKeys:(const void**)arg1 values:(const void**)arg2 count:(unsigned int)arg3;
- (id)dump;
- (void)grow;
- (void)assign:(unsigned int)arg1 key:(const void*)arg2 value:(const void*)arg3 isNew:(BOOL)arg4;
- (void)setItem:(const void*)arg1 forAbsentKey:(const void*)arg2;
- (void)replaceItem:(const void*)arg1 forExistingKey:(const void*)arg2;
- (unsigned int)rehashAround:(unsigned int)arg1;
- (BOOL)mapMember:(const void*)arg1 originalKey:(const void**)arg2 value:(const void**)arg3;
- (void)setItem:(const void*)arg1 forKnownAbsentKey:(const void*)arg2;
- (void*)existingItemForSetItem:(const void*)arg1 forAbsentKey:(const void*)arg2;
- (unsigned int)getKeys:(const void**)arg1 values:(const void**)arg2;
- (void)_initBlock;
- (void)rehash;
- (void)removeAllItems;

@end
