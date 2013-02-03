/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray, GKMultiplayerCollectionViewLayout, UICollectionViewLayoutAttributes;

@interface GKMultiplayerCollectionViewLayout : UICollectionViewLayout <NSCopying> {
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct CGSize { 
        float width; 
        float height; 
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    struct CGSize { 
        float width; 
        float height; 
    UICollectionViewLayoutAttributes *_backgroundAttributes;
    } _backgroundInsets;
    } _buttonGap;
    float _buttonOrStatusOffset;
    } _buttonSize;
    } _contentSize;
    UICollectionViewLayoutAttributes *_infoAttributes;
    float _infoOffset;
    } _infoSize;
    } _insets;
    UICollectionViewLayoutAttributes *_inviteButtonAttributes;
    NSArray *_layoutData;
    GKMultiplayerCollectionViewLayout *_oldLayout;
    } _participantGap;
    UICollectionViewLayoutAttributes *_participantRangeAttributes;
    } _participantSize;
    float _participantsOffset;
    UICollectionViewLayoutAttributes *_playNowButtonAttributes;
    float _scrollNudge;
    BOOL _shouldShowInfoLabel;
    int _status;
    UICollectionViewLayoutAttributes *_statusAttributes;
    } _statusSize;
    float _titleOffset;
    float _viewWidth;
}

@property(retain) UICollectionViewLayoutAttributes * backgroundAttributes;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } backgroundInsets;
@property struct CGSize { float x1; float x2; } buttonGap;
@property float buttonOrStatusOffset;
@property struct CGSize { float x1; float x2; } buttonSize;
@property struct CGSize { float x1; float x2; } contentSize;
@property(retain) UICollectionViewLayoutAttributes * infoAttributes;
@property float infoOffset;
@property struct CGSize { float x1; float x2; } infoSize;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } insets;
@property(retain) UICollectionViewLayoutAttributes * inviteButtonAttributes;
@property(retain) NSArray * layoutData;
@property(retain) GKMultiplayerCollectionViewLayout * oldLayout;
@property struct CGSize { float x1; float x2; } participantGap;
@property(retain) UICollectionViewLayoutAttributes * participantRangeAttributes;
@property struct CGSize { float x1; float x2; } participantSize;
@property float participantsOffset;
@property(retain) UICollectionViewLayoutAttributes * playNowButtonAttributes;
@property float scrollNudge;
@property BOOL shouldShowInfoLabel;
@property int status;
@property(retain) UICollectionViewLayoutAttributes * statusAttributes;
@property struct CGSize { float x1; float x2; } statusSize;
@property float titleOffset;
@property float viewWidth;

- (id)backgroundAttributes;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })backgroundInsets;
- (struct CGSize { float x1; float x2; })buttonGap;
- (float)buttonOrStatusOffset;
- (struct CGSize { float x1; float x2; })buttonSize;
- (struct CGSize { float x1; float x2; })collectionViewContentSize;
- (struct CGSize { float x1; float x2; })contentSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)finalizeAnimatedBoundsChange;
- (id)infoAttributes;
- (float)infoOffset;
- (struct CGSize { float x1; float x2; })infoSize;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })insets;
- (id)inviteButtonAttributes;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutData;
- (int)numberOfColumnForWidth:(float)arg1;
- (id)oldLayout;
- (struct CGSize { float x1; float x2; })participantGap;
- (id)participantRangeAttributes;
- (struct CGSize { float x1; float x2; })participantSize;
- (float)participantsOffset;
- (id)playNowButtonAttributes;
- (void)prepareForAnimatedBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)prepareLayout;
- (void)prepareMetrics;
- (float)scrollNudge;
- (void)setBackgroundAttributes:(id)arg1;
- (void)setBackgroundInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setButtonGap:(struct CGSize { float x1; float x2; })arg1;
- (void)setButtonOrStatusOffset:(float)arg1;
- (void)setButtonSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setInfoAttributes:(id)arg1;
- (void)setInfoOffset:(float)arg1;
- (void)setInfoSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setInviteButtonAttributes:(id)arg1;
- (void)setLayoutData:(id)arg1;
- (void)setOldLayout:(id)arg1;
- (void)setParticipantGap:(struct CGSize { float x1; float x2; })arg1;
- (void)setParticipantRangeAttributes:(id)arg1;
- (void)setParticipantSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setParticipantsOffset:(float)arg1;
- (void)setPlayNowButtonAttributes:(id)arg1;
- (void)setScrollNudge:(float)arg1;
- (void)setShouldShowInfoLabel:(BOOL)arg1;
- (void)setStatus:(int)arg1;
- (void)setStatusAttributes:(id)arg1;
- (void)setStatusSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setTitleOffset:(float)arg1;
- (void)setViewWidth:(float)arg1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)shouldShowInfoLabel;
- (int)status;
- (id)statusAttributes;
- (struct CGSize { float x1; float x2; })statusSize;
- (float)titleOffset;
- (float)viewWidth;

@end