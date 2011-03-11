/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSSet, NSMutableSet;

@interface PLAirTunesServiceBrowser : NSObject <NSNetServiceBrowserDelegate> {
    struct _DNSServiceRef_t { } *_dnsService;
    NSMutableSet *_discoveredAirTunesServices;
    NSMutableSet *_availableAirTunesServices;
    BOOL _searchForAirTunesServers;
}

@property(readonly) NSSet * availableAirTunesServices;
@property BOOL searchForAirTunesServers;


- (void)_invalidate;
- (id)init;
- (void)dealloc;
- (BOOL)searchForAirTunesServers;
- (id)availableAirTunesServices;
- (void)_didFindService:(id)arg1 moreComing:(BOOL)arg2;
- (void)_didRemoveService:(id)arg1 moreComing:(BOOL)arg2;
- (void)_netServiceResolutionDidChange:(id)arg1;
- (void)_refresh;
- (void)setSearchForAirTunesServers:(BOOL)arg1;

@end
