/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSMutableArray, RTFTextTable;

@interface RTFReaderTableState : NSObject  {
    RTFTextTable *_currentTable;
    RTFTextTable *_previousTable;
    NSMutableArray *_currentRowArray;
    NSMutableArray *_previousRowArray;
    int _currentRow;
    int _currentColumn;
    int _currentDefinitionColumn;
    BOOL _currentRowIsLast;
}


- (void)dealloc;

@end
