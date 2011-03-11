/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class ADRequestProperties, NSMutableArray, ADAdSpecification;

@interface ADAdBatchRequest : PBRequest  {
    ADRequestProperties *_requestProperties;
    ADAdSpecification *_specification;
    NSMutableArray *_requesterIdentifiers;
    unsigned long long _defaultsLastUpdate;
    BOOL _hasDefaultsLastUpdate;
}

@property(readonly) BOOL hasRequestProperties;
@property(readonly) BOOL hasSpecification;
@property(readonly) int requesterIdentifiersCount;
@property(readonly) BOOL hasDefaultsLastUpdate;
@property unsigned long long defaultsLastUpdate;
@property(retain) NSMutableArray * requesterIdentifiers;
@property(retain) ADAdSpecification * specification;
@property(retain) ADRequestProperties * requestProperties;


- (unsigned int)requestTypeCode;
- (unsigned long long)defaultsLastUpdate;
- (BOOL)hasRequestProperties;
- (BOOL)hasSpecification;
- (int)requesterIdentifiersCount;
- (void)setRequesterIdentifier:(id)arg1 atIndex:(unsigned int)arg2;
- (id)requesterIdentifierAtIndex:(unsigned int)arg1;
- (void)addRequesterIdentifier:(id)arg1;
- (void)setDefaultsLastUpdate:(unsigned long long)arg1;
- (Class)responseClass;
- (BOOL)hasDefaultsLastUpdate;
- (id)requesterIdentifiers;
- (void)setRequesterIdentifiers:(id)arg1;
- (id)specification;
- (void)setSpecification:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setRequestProperties:(id)arg1;
- (id)requestProperties;

@end
