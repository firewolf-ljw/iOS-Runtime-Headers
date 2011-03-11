/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSString;

@interface NSSQLColumn : NSSQLProperty  {
    NSString *_columnName;
    int _sqlType;
    unsigned int _precision;
    int _scale;
    unsigned int _fetchIndex;
    unsigned int _slot;
    unsigned int _allowAliasing;
}


- (void)setScale:(int)arg1;
- (void)dealloc;
- (id)description;
- (int)scale;
- (void)setAllowAliasing:(BOOL)arg1;
- (void)copyValuesForReadOnlyFetch:(id)arg1;
- (BOOL)allowAliasing;
- (id)initWithEntity:(id)arg1 propertyDescription:(id)arg2;
- (void)_setSQLType:(unsigned int)arg1;
- (void)_setColumnName:(id)arg1;
- (void)_setSlotIfDefault:(unsigned int)arg1;
- (unsigned int)sqlType;
- (id)initWithColumnName:(id)arg1 sqlType:(unsigned int)arg2;
- (id)initForReadOnlyFetching;
- (unsigned int)precision;
- (void)setPrecision:(unsigned int)arg1;
- (unsigned int)roughSizeEstimate;
- (unsigned int)fetchIndex;
- (void)_setFetchIndex:(unsigned int)arg1;
- (unsigned int)slot;
- (id)columnName;
- (id)cloneForReadOnlyFetching;

@end
