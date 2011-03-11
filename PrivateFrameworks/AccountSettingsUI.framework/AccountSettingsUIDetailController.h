/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

@class UIBarButtonItem, UIProgressIndicator, NSTimer;

@interface AccountSettingsUIDetailController : PSListController  {
    UIProgressIndicator *_progressIndicator;
    NSTimer *_idleJiggleTimer;
    void *_powerAssertion;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_doneButton;
    BOOL _addedToTaskList;
    BOOL _validationInProgress;
}

@property(retain) UIBarButtonItem * doneButton;
@property(retain) UIBarButtonItem * cancelButton;

+ (BOOL)shouldPresentAsModalSheet;

- (void)startValidationWithPrompt:(id)arg1;
- (id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(BOOL)arg4 context:(id)arg5;
- (void)stopValidationWithPrompt:(id)arg1 showButtons:(BOOL)arg2;
- (void)confirmationView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)confirmDeleteAccountWithDataclasses:(id)arg1 context:(id)arg2;
- (void)setTaskCompletionEnabled:(BOOL)arg1;
- (void)dismissWithAnimation:(BOOL)arg1;
- (void)reloadParentSpecifier;
- (void)removeParentSpecifier;
- (void)setCellsChecked:(BOOL)arg1;
- (id)specifiers;
- (void)viewDidLoad;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)setCancelButton:(id)arg1;
- (id)cancelButton;
- (id)init;
- (void)dealloc;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)doneButtonClicked:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (BOOL)shouldReloadSpecifiersOnResume;
- (BOOL)presentedAsModalSheet;
- (void)startValidationWithPrompt:(id)arg1 userInteraction:(BOOL)arg2;
- (void)updateValidationPrompt:(id)arg1;
- (void)stopValidationWithPrompt:(id)arg1 showButtons:(BOOL)arg2 animated:(BOOL)arg3;
- (void)reloadParentSpecifiers;
- (id)showConfirmationViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 destructive:(BOOL)arg4 cancelButtonIndex:(int)arg5 context:(id)arg6;
- (id)_alertViewWithButtons:(id)arg1 title:(id)arg2 message:(id)arg3 cancelButtonIndex:(int)arg4 context:(id)arg5;
- (id)_actionSheetWithButtons:(id)arg1 title:(id)arg2 destructive:(BOOL)arg3 cancelButtonIndex:(int)arg4 context:(id)arg5;
- (void)_layoutProgressIndicator;
- (void)_jiggleIdleTimer;
- (void)_preventSleepAndDimming:(BOOL)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;

@end
