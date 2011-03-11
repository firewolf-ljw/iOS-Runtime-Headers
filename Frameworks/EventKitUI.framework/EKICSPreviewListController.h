/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKICSPreviewModel, NSMutableArray, <EKICSPreviewListDelegate>;

@interface EKICSPreviewListController : UITableViewController  {
    EKICSPreviewModel *_model;
    BOOL _allowsImport;
    BOOL _allowsSubitems;
    NSMutableArray *_sections;
    <EKICSPreviewListDelegate> *_listDelegate;
}

@property <EKICSPreviewListDelegate> * listDelegate;
@property BOOL allowsSubitems;
@property BOOL allowsImport;


- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)viewDidLoad;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (id)listDelegate;
- (void)updateImportButton;
- (void)importAllPressed:(id)arg1;
- (void)buildSections;
- (void)setListDelegate:(id)arg1;
- (void)setAllowsSubitems:(BOOL)arg1;
- (BOOL)allowsImport;
- (void)setAllowsImport:(BOOL)arg1;
- (BOOL)allowsSubitems;
- (id)initWithModel:(id)arg1;

@end
