/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITableView;

@interface UITableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    int _tableViewStyle;
    id _keyboardSupport;
    struct { 
        unsigned int clearsSelectionOnViewWillAppear : 1; 
    } _tableViewControllerFlags;
}

@property(retain) UITableView * tableView;
@property BOOL clearsSelectionOnViewWillAppear;

+ (void)_initializeSafeCategory;

- (void)loadView;
- (id)initWithStyle:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (BOOL)clearsSelectionOnViewWillAppear;
- (id)_existingTableView;
- (id)tableView;
- (void)setClearsSelectionOnViewWillAppear:(BOOL)arg1;
- (void)_adjustTableForKeyboardInfo:(id)arg1;
- (void)setTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)_gkTableView:(id)arg1 buttonCellWithTitle:(id)arg2 theme:(id)arg3;

@end
