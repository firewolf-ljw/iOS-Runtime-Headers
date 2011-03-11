/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class RTF_CMArchiveManager, NSMutableArray, RTF_OIXMLElement;

@interface RTFHTMLWriter : NSObject  {
    RTF_CMArchiveManager *_archiver;
    int _state;
    NSMutableArray *_textBuffer;
    NSMutableArray *_tableStack;
    NSMutableArray *_rowStack;
    RTF_OIXMLElement *_currentTableParagraph;
    RTF_OIXMLElement *_currentTable;
    RTF_OIXMLElement *_currentRow;
    BOOL _inited;
}


- (void)dealloc;
- (void)readerDidEndParagraph:(id)arg1;
- (void)readerDidEndTableRow:(id)arg1;
- (void)insertAttachmentNamed:(id)arg1 withData:(id)arg2;
- (id)initWithArchiver:(id)arg1;
- (id)_fontNameByAppendingSerif:(id)arg1;
- (id)_textBumpFromState:(id)arg1;
- (id)_textStyleStringFromState:(id)arg1;
- (id)_paragraphStyleStringFromState:(id)arg1;
- (id)_tableStyleStringFromCell:(id)arg1;
- (id)_cellStyleStringFromCell:(id)arg1;
- (void)_flushParagraph:(id)arg1;
- (void)startDocumentWithState:(id)arg1;
- (void)finishDocumentWithState:(id)arg1;
- (void)reader:(id)arg1 didParseString:(id)arg2;
- (void)readerDidStartTable:(id)arg1;
- (void)readerDidEndTable:(id)arg1;
- (void)readerDidStartTableRow:(id)arg1;
- (void)reader:(id)arg1 didEndTableCell:(id)arg2;

@end
