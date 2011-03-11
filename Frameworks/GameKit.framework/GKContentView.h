/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIActivityIndicatorView, UIImageView, UILabel, UIButton, UITableView, UIFont, UIImage, NSString, NSArray;

@interface GKContentView : UIView  {
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIImageView *_iconView;
    UIButton *_cancelButton;
    UIButton *_otherButton;
    UITableView *_table;
    UIImageView *_tableWellView;
    NSArray *_connectionButtons;
    UIActivityIndicatorView *_activityIndicator;
    BOOL _needsLayout;
}

@property(retain) UIImageView * iconView;
@property(retain) UILabel * messageLabel;
@property(retain) UILabel * titleLabel;
@property(retain) UIActivityIndicatorView * activityIndicator;
@property(readonly) UIFont * messageFont;
@property(readonly) UIFont * titleFont;
@property int numberOfMessageLines;
@property int numberOfTitleLines;
@property(retain,readonly) NSArray * connectionButtons;
@property(retain,readonly) UITableView * table;
@property(retain) UIButton * otherButton;
@property(retain) UIButton * cancelButton;
@property UIImage * icon;
@property NSString * message;
@property NSString * title;

+ (float)maxTextWidth;

- (void)setTitleLabel:(id)arg1;
- (void)setNumberOfTitleLines:(int)arg1;
- (void)showActivityIndicator:(BOOL)arg1;
- (id)messageFont;
- (id)messageLabel;
- (id)iconView;
- (id)initWithTitle:(id)arg1 message:(id)arg2 icon:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitle:(id)arg5;
- (void)setConnectionButtons:(unsigned int)arg1;
- (int)numberOfTitleLines;
- (void)_createMessageLabelIfNeeded;
- (int)numberOfMessageLines;
- (void)setNumberOfMessageLines:(int)arg1;
- (void)_createCancelButtonWithTitle:(id)arg1;
- (void)_createOtherButtonWithTitle:(id)arg1;
- (id)_createButton:(BOOL)arg1;
- (id)_createConnectionButtonWithType:(unsigned int)arg1;
- (void)setIconView:(id)arg1;
- (void)setMessageLabel:(id)arg1;
- (id)activityIndicator;
- (void)setActivityIndicator:(id)arg1;
- (id)connectionButtons;
- (id)otherButton;
- (void)setOtherButton:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)_createTitleLabelIfNeeded;
- (id)message;
- (id)titleLabel;
- (id)icon;
- (void)setCancelButton:(id)arg1;
- (id)cancelButton;
- (void)layout;
- (void)layoutIfNeeded;
- (id)table;
- (id)titleFont;
- (id)title;
- (void)dealloc;
- (void)setTitle:(id)arg1;

@end
