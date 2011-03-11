/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDTableCell, NSMutableArray, WDDocument;

@interface WDText : NSObject  {
    NSMutableArray *mBlocks;
    WDDocument *mDocument;
    int mTextType;
    WDTableCell *mTableCell;
}


- (id)tableCell;
- (id)content;
- (void)dealloc;
- (BOOL)isEmpty;
- (void)addBlock:(id)arg1;
- (id)blocks;
- (int)indexOfBlock:(id)arg1;
- (id)addParagraphAtIndex:(int)arg1;
- (id)addTableAtIndex:(int)arg1;
- (void)removeLastBlock;
- (int)tableNestingLevel;
- (id)blockIterator;
- (id)newBlockIterator;
- (void)removeLastCharacter:(unsigned short)arg1;
- (id)runIterator;
- (id)newRunIterator;
- (id)initWithDocument:(id)arg1 textType:(int)arg2 tableCell:(id)arg3;
- (id)initWithDocument:(id)arg1 textType:(int)arg2;
- (id)lastBlock;
- (id)addTable;
- (id)document;
- (int)textType;
- (id)addParagraph;
- (int)blockCount;
- (id)blockAt:(int)arg1;

@end
