/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKSessionGlobals : NSObject  {
    unsigned int *_activePIDList;
    unsigned int _activePIDListSize;
    unsigned int _activePIDListCount;
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } _lock;
}


- (void)registerPID:(unsigned int)arg1;
- (void)unregisterPID:(unsigned int)arg1;
- (BOOL)hasActivePID:(unsigned int)arg1;
- (void)lock;
- (void)unlock;
- (id)init;

@end
