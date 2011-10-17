/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUDownloadManager;

@interface SUDownloadManagerDataSource : SUTableDataSource  {
    SUDownloadManager *_downloadManager;
}

@property(readonly) SUDownloadManager * downloadManager;


- (id)downloadManager;
- (int)numberOfSections;
- (int)numberOfRowsInSection:(int)arg1;
- (void)reloadData;
- (void)dealloc;
- (id)_headerViewForDownloadsSection;
- (id)_headerViewForPreordersSection;
- (id)_newPreorderAccessoryButton;
- (id)downloadForIndexPath:(id)arg1;
- (BOOL)isPreordersSection:(int)arg1;
- (BOOL)isDownloadsSection:(int)arg1;
- (id)preorderForIndexPath:(id)arg1;
- (id)_headerViewWithTitle:(id)arg1 subtitle:(id)arg2;
- (id)initWithDownloadManager:(id)arg1;
- (void)reloadCellContexts;
- (BOOL)canSelectIndexPath:(id)arg1;
- (id)headerViewForSection:(int)arg1;
- (BOOL)canDeleteIndexPath:(id)arg1;
- (void)configureCell:(id)arg1 forIndexPath:(id)arg2;
- (BOOL)deleteIndexPath:(id)arg1;

@end