/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

@interface AYAddress : NSObject <NSCopying> {
}

+ (void)startListeningToNetworkConfiguration;
+ (void)updateNetmasksFromStoreWithChangedKeys:(id)arg1;
+ (void)stopListeningToNetworkConfiguration;
+ (unsigned int)netMaskForIPV4Address:(id)arg1;
+ (id)_createAddressFromSockaddrBuffer:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1;
+ (id)addressWithData:(id)arg1;
+ (id)addressWithString:(id)arg1;
+ (id)addressOfPeerFromSocket:(int)arg1;
+ (id)addressOfLocalFromSocket:(int)arg1;
+ (id)addressesFromDataAddresses:(id)arg1;
+ (id)IPV4AddressesFromDataAddresses:(id)arg1;
+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)initAddressWithData:(id)arg1;
- (id)initAddressWithPeerFromSocket:(int)arg1;
- (id)initAddressWithLocalFromSocket:(int)arg1;
- (id)addressAsString;
- (BOOL)isLocalAddressConnectingTo:(id)arg1;
- (void)getAddressAsSockAddr:(struct sockaddr { unsigned char x1; unsigned char x2; BOOL x3[14]; }*)arg1 length:(int*)arg2;
- (id)URLToAddressWithScheme:(id)arg1;
- (id)URLToAddressWithScheme:(id)arg1 andPort:(int)arg2;
- (void)dumpInternal;
- (id)initAddressWithString:(id)arg1;
- (id)addressAsData;
- (id)URLToAddressWithScheme:(id)arg1 andPort:(int)arg2 URI:(id)arg3;
- (int)port;
- (id)type;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;

@end
