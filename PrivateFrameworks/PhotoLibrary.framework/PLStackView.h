/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIImage, <PLStackViewDataSource>, UIGestureRecognizer, NSMutableIndexSet, NSIndexSet, PLExpandableView, CAReplicatorLayer, NSArray, PLTableView, PLStackItemView, NSMutableDictionary, NSMutableArray, CADynamicsBehavior;

@interface PLStackView : PLExpandableView <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate> {
    PLTableView *_tableView;
    CADynamicsBehavior *_behavior;
    NSMutableArray *_springs;
    NSMutableArray *_bakedAngles;
    UIGestureRecognizer *_pressRecognizer;
    PLExpandableView *_forwardingView;
    unsigned int _itemCount;
    <PLStackViewDataSource> *_dataSource;
    NSArray *_stackedViews;
    NSMutableIndexSet *_stackedItemIndexes;
    NSMutableIndexSet *_selectedIndexes;
    NSMutableIndexSet *_badgedIndexes;
    UIImage *_badgeImage;
    NSMutableDictionary *_customBadgeImages;
    UIImage *_placeholder;
    UIImage *_stackedImage;
    CAReplicatorLayer *_stackedImageLayer;
    PLStackItemView *_contextStackItemView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _expandedLayoutFrame;
    float _horizontalMargin;
    float _verticalMargin;
    unsigned int _numColumns;
    unsigned int _layoutCols;
    unsigned int _layoutRows;
    struct CGSize { 
        float width; 
        float height; 
    } _collapsedImageSize;
    struct CGSize { 
        float width; 
        float height; 
    } _expandedImageSize;
    struct CGSize { 
        float width; 
        float height; 
    } _preferredStackedImageSize;
    struct __CFDictionary { } *_viewsByIndex;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    } _displayedImageIndexes;
    NSMutableIndexSet *_collapsedStackIndexes;
    float _previousExpansionFraction;
    float _currentExpansionFraction;
    double _centerXVelocity;
    double _centerYVelocity;
    struct CGPoint { 
        float x; 
        float y; 
    } _anchorPoint;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _currentLayoutBounds;
    float _currentLayoutWidthSpace;
    float _currentLayoutHeightSpace;
    struct CGPoint { 
        float x; 
        float y; 
    } _currentLayoutOrigin;
    struct CGSize { 
        float width; 
        float height; 
    } _currentImageSize;
    struct CGPoint { 
        float x; 
        float y; 
    } _tableViewContentOffset;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _tableViewContentInset;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _layoutMargins;
    struct CGColorSpace { } *_deviceRGB;
    struct { 
        unsigned int allowsPinchToCollapse : 1; 
        unsigned int allowsSelection : 1; 
        unsigned int allowsSelectionGestures : 1; 
        unsigned int canCreateStackedImage : 1; 
        unsigned int showsTextBadges : 1; 
        unsigned int showLoadingIndicator : 1; 
        unsigned int expandingItemImagesLoadSynchronously : 1; 
        unsigned int didStartExpand : 1; 
        unsigned int dontChangeTransforms : 1; 
        unsigned int firstPass : 1; 
        unsigned int isHandlingPinch : 1; 
        unsigned int didBeginPinching : 1; 
        unsigned int dataSourceImplementsDataForImage : 1; 
        unsigned int dataSourceImplementsTextBadgeStringForImage : 1; 
        unsigned int dataSourceImplementsWillRemoveItemViewAtIndex : 1; 
        unsigned int dataSourceImplementsPreheatImagesInRange : 1; 
        unsigned int replaceBitmapWithStackItemViews : 1; 
        unsigned int dragSelectionState : 2; 
        unsigned int expansionFractionIsDirty : 1; 
        unsigned int imageSizeIsDirty : 1; 
        unsigned int isDisplayingContextMenu : 1; 
        unsigned int useExpandedBoundsForPointInside : 1; 
        unsigned int preventReload : 1; 
        unsigned int needsReload : 1; 
        unsigned int refreshStackedImage : 1; 
        unsigned int debugDelegateSupportsSingleTaps : 1; 
        unsigned int scrollingDownward : 1; 
    } _stackFlags;
    NSMutableArray *_inProgressAnimationContexts;
    NSMutableIndexSet *_unloadedIndexes;
}

@property <PLStackViewDataSource> * dataSource;
@property struct CGSize { float width; float height; } collapsedImageSize;
@property struct CGSize { float width; float height; } expandedImageSize;
@property BOOL canCreateStackedImage;
@property BOOL allowsPinchToCollapse;
@property BOOL showTextBadges;
@property BOOL expandingItemImagesLoadSynchronously;
@property(retain) UIImage * badgeImage;
@property(retain) NSIndexSet * badgedIndexes;
@property BOOL allowsSelection;
@property BOOL allowsSelectionGestures;
@property(retain) NSIndexSet * selectedIndexes;
@property PLStackItemView * contextStackItemView;
@property(retain) PLExpandableView * forwardingView;
@property(retain) UIImage * placeholder;
@property struct UIEdgeInsets { float top; float left; float bottom; float right; } layoutMargins;

+ (void)initialize;
+ (id)selectionBadgeImage;
+ (float)maxStackedAngle;
+ (void)_initializeSafeCategory;

- (BOOL)_isAnimating;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)tap:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)reloadData;
- (id)tableView;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (BOOL)pointInside:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (void)didMoveToSuperview;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)setDataSource:(id)arg1;
- (void)setPlaceholder:(id)arg1;
- (id)placeholder;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)dataSource;
- (void)setAllowsSelection:(BOOL)arg1;
- (BOOL)allowsSelection;
- (void)_reloadDataIfNeeded;
- (void)layoutSubviews;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)orientation;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_preheatImageDataForDownwardScroll:(BOOL)arg1;
- (BOOL)allowsSelectionGestures;
- (void)setAllowsSelectionGestures:(BOOL)arg1;
- (void)setCollapsedImageSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setExpandedImageSize:(struct CGSize { float x1; float x2; })arg1;
- (id)collapsedStackIndexes;
- (id)_stackedImage;
- (id)badgedIndexes;
- (BOOL)expandingItemImagesLoadSynchronously;
- (BOOL)canCreateStackedImage;
- (void)_calculateLayout;
- (void)reconfigureViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withSuperview:(id)arg2;
- (void)reconfigureViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)parentTableViewCellWillChange:(id)arg1;
- (BOOL)_canReload;
- (void)_reloadVisibleRows;
- (void)reloadItemAtIndex:(int)arg1 synchronously:(BOOL)arg2;
- (void)reloadItemAtIndex:(int)arg1;
- (void)unloadItemAtIndex:(int)arg1;
- (void)reloadImagesForItemAtIndex:(int)arg1;
- (void)insertItemsAtIndexes:(id)arg1;
- (void)removeItemsAtIndexes:(id)arg1;
- (void)_updateItemCount;
- (unsigned int)itemCount;
- (unsigned int)_numberOfRowsForNItems:(unsigned int)arg1;
- (id)visibleStackItemViewAtIndex:(int)arg1;
- (void)scrollToItemAtIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (id)visibleItemViews;
- (id)visibleItemIndexes;
- (void)_addAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_removeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_layoutStacked;
- (void)_tileStackItemsWithDuration:(double)arg1;
- (void)updateItemViewPositionForContractedState;
- (void)_setLayoutBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forState:(int)arg2 withDuration:(double)arg3;
- (id)itemViewAtIndex:(unsigned int)arg1 loadSynchronously:(BOOL)arg2;
- (void)refreshStackedImage;
- (void)_invalidateStackedImage;
- (void)_updateStackedImageView;
- (id)replicatorLayer;
- (BOOL)_stackedImageShouldBeSquare;
- (id)_createStackedImageWithViews:(id)arg1;
- (struct CGSize { float x1; float x2; })preferredStackedImageSize;
- (void)imageDidChangeForItemIndex:(unsigned int)arg1;
- (void)_imageDidChangeForItemsAtIndexes:(id)arg1;
- (void)_updateDisplayedImageIndexes;
- (void)_beginExpansion;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contractedLayoutBounds;
- (float)currentExpansionFraction;
- (struct CGPoint { float x1; float x2; })positionOfImageAtIndex:(int)arg1 inView:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameOfImageAtIndex:(int)arg1 inView:(id)arg2;
- (void)_moveItemsToTableView;
- (void)_moveItemsFromTableView;
- (void)_validateTableViewLayerAsAHackForRadar8952327;
- (id)_visibleImageViewAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)visibleStackItemViewAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)pinch:(id)arg1;
- (void)longPress:(id)arg1;
- (void)_pinchWasCanceled:(id)arg1;
- (float)continueTrackingPinch:(id)arg1;
- (void)finishStateTransition;
- (void)_addBehaviorToLayer:(id)arg1 withSprings:(id)arg2;
- (void)_removeBehavior;
- (void)_behaviorEnded:(BOOL)arg1;
- (void)_nudgeAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_cancelBehavior;
- (void)behaviorDidStop:(id)arg1;
- (void)setShowTextBadges:(BOOL)arg1;
- (BOOL)showTextBadges;
- (void)_badgeChangeAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_updateBadgesForOldIndexes:(id)arg1 newIndexes:(id)arg2 animated:(BOOL)arg3;
- (void)_updateBadgesForItemAtIndex:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)setBadgedIndexes:(id)arg1;
- (id)badgeImage;
- (void)_shiftCustomBadgeImagesStartingAtIndex:(unsigned int)arg1 by:(int)arg2;
- (id)customBadgeForItemAtIndex:(unsigned int)arg1;
- (void)setCustomBadgeImage:(id)arg1 forItemAtIndex:(unsigned int)arg2;
- (void)setBadgeImage:(id)arg1;
- (void)setAllowsSelection:(BOOL)arg1 animated:(BOOL)arg2;
- (void)showLoadingIndicatorWithAnimation:(int)arg1;
- (void)hideLoadingIndicatorWithAnimation:(int)arg1;
- (void)_dragSelect:(id)arg1;
- (void)_setSelectedIndexes:(id)arg1 animated:(BOOL)arg2;
- (void)deselectAll:(BOOL)arg1;
- (id)selectedIndexes;
- (void)setSelectedIndexes:(id)arg1;
- (void)_setSelectionState:(int)arg1 forStackItemView:(id)arg2;
- (void)_deselectAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_displayContextMenu:(id)arg1;
- (void)_autohideMenu;
- (void)_hideMenu;
- (struct CGSize { float x1; float x2; })collapsedImageSize;
- (struct CGSize { float x1; float x2; })expandedImageSize;
- (void)setCanCreateStackedImage:(BOOL)arg1;
- (void)setAllowsPinchToCollapse:(BOOL)arg1;
- (BOOL)allowsPinchToCollapse;
- (void)setExpandingItemImagesLoadSynchronously:(BOOL)arg1;
- (void)_setTableView:(id)arg1;
- (void)scrollToItemAtIndex:(unsigned int)arg1 atScrollPosition:(int)arg2 animated:(BOOL)arg3;
- (void)scrollWithMotionBlurToItemAtIndex:(unsigned int)arg1 atScrollPosition:(int)arg2;
- (void)_layoutItemViewsFromIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2 inTableCell:(id)arg3 atRow:(unsigned int)arg4;
- (id)contextStackItemView;
- (void)setContextStackItemView:(id)arg1;
- (id)forwardingView;
- (void)setForwardingView:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })layoutMargins;
- (void)setLayoutMargins:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct CGSize { float x1; float x2; })_currentImageSize;
- (id)_stackedViews;
- (float)completeTrackingPinch:(id)arg1 toState:(int)arg2 duration:(double)arg3;
- (void)stateDidChangeFrom:(int)arg1;
- (void)setExpandedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })expandedContentFrame;
- (void)beginTrackingPinch:(id)arg1;
- (void)expandWithAnimation:(BOOL)arg1;
- (int)snapState:(BOOL)arg1;
- (id)accessibilityLabel;
- (id)accessibilityContainer;
- (BOOL)isAccessibilityElement;

@end
