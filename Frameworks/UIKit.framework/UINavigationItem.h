/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UINavigationBar, UIView, NSString, UIBarButtonItem, UIImageView;

@interface UINavigationItem : NSObject <NSCoding> {
    NSString *_title;
    NSString *_backButtonTitle;
    UIBarButtonItem *_backBarButtonItem;
    NSString *_prompt;
    int _tag;
    id _context;
    UINavigationBar *_navigationBar;
    UIView *_defaultTitleView;
    UIView *_titleView;
    UIView *_backButtonView;
    UIBarButtonItem *_leftBarButtonItem;
    UIBarButtonItem *_rightBarButtonItem;
    UIView *_customLeftView;
    UIView *_customRightView;
    BOOL _hidesBackButton;
    UIImageView *_frozenTitleView;
}

@property(copy) NSString * title;
@property(retain) UIBarButtonItem * backBarButtonItem;
@property(copy) NSString * prompt;
@property BOOL hidesBackButton;
@property(retain) UIBarButtonItem * leftBarButtonItem;
@property(retain) UIBarButtonItem * rightBarButtonItem;
@property(retain) UIView * titleView;

+ (id)defaultFont;
+ (void)_initializeSafeCategory;

- (void)setHidesBackButton:(BOOL)arg1;
- (id)_titleView;
- (void)setContext:(id)arg1;
- (void)setLeftBarButtonItem:(id)arg1;
- (void)setTag:(int)arg1;
- (int)tag;
- (float)width;
- (id)initWithTitle:(id)arg1;
- (id)titleView;
- (id)navigationBar;
- (id)context;
- (id)rightBarButtonItem;
- (id)leftBarButtonItem;
- (id)prompt;
- (id)backBarButtonItem;
- (void)setNavigationBar:(id)arg1;
- (void)_freezeCurrentTitleView;
- (void)_cleanupFrozenTitleView;
- (void)_setTitleAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_setTitle:(id)arg1 animated:(BOOL)arg2;
- (void)setBackButtonTitle:(id)arg1;
- (void)_setBackButtonTitle:(id)arg1 lineBreakMode:(int)arg2;
- (void)setBackBarButtonItem:(id)arg1;
- (id)backButtonTitle;
- (id)currentBackButtonTitle;
- (void)setWidth:(float)arg1;
- (void)_removeTitleAndButtonViews;
- (void)_removeBackButtonView;
- (void)_removeCustomLeftView;
- (void)_removeCustomRightView;
- (id)existingBackButtonView;
- (id)backButtonView;
- (void)updateNavigationBarButtonsAnimated:(BOOL)arg1;
- (BOOL)hidesBackButton;
- (void)setHidesBackButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setObject:(id)arg1 forLeftRightKeyPath:(id)arg2 animated:(BOOL)arg3;
- (void)_setLeftBarButtonItem:(id)arg1;
- (void)setLeftBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)_setRightBarButtonItem:(id)arg1;
- (void)setRightBarButtonItem:(id)arg1;
- (void)setRightBarButtonItem:(id)arg1 animated:(BOOL)arg2;
- (void)_setCustomLeftView:(id)arg1;
- (id)customLeftView;
- (void)setCustomLeftView:(id)arg1;
- (void)setCustomLeftView:(id)arg1 animated:(BOOL)arg2;
- (void)_setCustomRightView:(id)arg1;
- (id)customRightView;
- (void)setCustomRightView:(id)arg1;
- (void)setCustomRightView:(id)arg1 animated:(BOOL)arg2;
- (void)_updateViewsForBarSizeChangeIfNecessary;
- (void)setCustomTitleView:(id)arg1;
- (id)customTitleView;
- (void)setCustomLeftItem:(id)arg1;
- (id)customLeftItem;
- (void)setCustomLeftItem:(id)arg1 animated:(BOOL)arg2;
- (void)setCustomRightItem:(id)arg1;
- (id)customRightItem;
- (void)setCustomRightItem:(id)arg1 animated:(BOOL)arg2;
- (void)setTitleView:(id)arg1;
- (id)title;
- (void)setPrompt:(id)arg1;
- (id)_leftBarButtonItem;
- (id)_rightBarButtonItem;
- (id)_customLeftView;
- (id)_customRightView;
- (id)_automationID;
- (void)encodeWithCoder:(id)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)init;
- (void)mergeValuesFromItem:(id)arg1;
- (void)resetAllValues;

@end
