/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class CHDChart;

@interface CHDSeriesCollection : EDSortedCollection  {
    CHDChart *mChart;
}

+ (id)seriesCollectionWithChart:(id)arg1;

- (unsigned int)addObject:(id)arg1;
- (unsigned int)nonEmptySeriesCount;
- (id)firstNonEmptySeries;
- (id)initWithChart:(id)arg1;

@end
