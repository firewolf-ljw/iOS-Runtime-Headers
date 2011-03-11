/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class WebThreadCaller, CALayer;

@interface WAKWindow : WAKResponder  {

  /* Error parsing encoded ivar type info: ^{WKWindow={_WKObject="referenceCount"I"classInfo"^{_WKClassInfo}}@"WAKWindow"{CGRect="origin"{CGPoint="x"f"y"f}"size"{CGSize="width"f"height"f}}^{WKView}^{WKView}^{WKView}{CGSize="width"f"height"f}{CGSize="width"f"height"f}fb1} */
    struct WKWindow { struct _WKObject { 
            unsigned int referenceCount; 
            struct _WKClassInfo {} *classInfo; 
        } x1; id x2; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x3; void*x4; void*x5; void*x6; void*x7; int x8; in double x9; out void*x10; void*x11; struct CGRect { 
            struct CGPoint { 
                float x; 
                float y; 
            } origin; 
            struct CGSize { 
                float width; 
                float height; 
            } size; 
        } x12; struct WKView {} *x13; struct WKView {} *x14; struct WKView {} *x15; struct CGSize { 
            float width; 
            float height; 
        } x16; struct CGSize { 
            float width; 
            float height; 
        } x17; float x18; unsigned int x19 : 1; } *_wkWindow;

    CALayer *_hostLayer;

  /* Error parsing encoded ivar type info: ^{TileCache={RetainPtr<CALayer>="m_ptr"@"CALayer"}@"WAKWindow"{RetainPtr<WebThreadCaller>="m_ptr"@"WebThreadCaller"}ii@"NSString"{IntPoint="m_x"i"m_y"i}{IntSize="m_width"i"m_height"i}BB{HashMap<WebCore::TileCache::TileIndex,WTF::RefPtr<WebCore::TileCache::Tile>,WebCore::TileCache::TileIndexHash,WebCore::TileCache::TileIndexHashTraits,WTF::HashTraits<WTF::RefPtr<WebCore::TileCache::Tile> > >="m_impl"{HashTable<WebCore::TileCache::TileIndex,std::pair<WebCore::TileCache::TileIndex, WTF::RefPtr<WebCore::TileCache::Tile> >,WTF::PairFirstExtractor<std::pair<WebCore::TileCache::TileIndex, WTF::RefPtr<WebCore::TileCache::Tile> > >,WebCore::TileCache::TileIndexHash,WTF::PairHashTraits<WebCore::TileCache::TileIndexHashTraits, WTF::HashTraits<WTF::RefPtr<WebCore::TileCache::Tile> > >,WebCore::TileCache::TileIndexHashTraits>="m_table"^{pair<WebCore::TileCache::TileIndex,WTF::RefPtr<WebCore::TileCache::Tile> >}"m_tableSize"i"m_tableSizeMask"i"m_keyCount"i"m_deletedCount"i}}{Timer<WebCore::TileCache>="_vptr$TimerBase"^^?"m_nextFireTime"d"m_repeatInterval"d"m_heapIndex"i"m_heapInsertionOrder"I"m_object"^{TileCache}"m_function"{?="__pfn"^"__delta"i}}{Vector<WebCore::IntRect,0ul>="m_size"I"m_buffer"{VectorBuffer<WebCore::IntRect,0ul>="m_buffer"^{IntRect}"m_capacity"I}}{Mutex="m_mutex"{_opaque_pthread_mutex_t="__sig"l"__opaque"[40c]}}{Mutex="m_mutex"{_opaque_pthread_mutex_t="__sig"l"__opaque"[40c]}}} */
    struct TileCache { struct RetainPtr<CALayer> { 
            CALayer *m_ptr; 
        } x1; id x2; /* Warning: Unrecognized filer type: '"' using 'void*' */ void*x3; void*x4; void*x5; void*x6; void*x7; int x8; in double x9; out void*x10; void*x11; struct RetainPtr<WebThreadCaller> { 
            WebThreadCaller *m_ptr; 
        } x12; int x13; int x14; id x15; void*x16; inout unsigned short x17; unsigned short x18; void*x19; const int x20; in void*x21; void*x22; struct IntPoint { 
            int m_x; 
            int m_y; 
        } x23; struct IntSize { 
            int m_width; 
            int m_height; 
        } x24; boolx25; boolx26; struct HashMap<WebCore::TileCache::TileIndex,WTF::RefPtr<WebCore::TileCache::Tile>,WebCore::TileCache::TileIndexHash,WebCore::TileCache::TileIndexHashTraits,WTF::HashTraits<WTF::RefPtr<WebCore::TileCache::Tile> > > { 
            struct HashTable<WebCore::TileCache::TileIndex,std::pair<WebCore::TileCache::TileIndex, WTF::RefPtr<WebCore::TileCache::Tile> >,WTF::PairFirstExtractor<std::pair<WebCore::TileCache::TileIndex, WTF::RefPtr<WebCore::TileCache::Tile> > >,WebCore::TileCache::TileIndexHash,WTF::PairHashTraits<WebCore::TileCache::TileIndexHashTraits, WTF::HashTraits<WTF::RefPtr<WebCore::TileCache::Tile> > >,WebCore::TileCache::TileIndexHashTraits> { 
                struct pair<WebCore::TileCache::TileIndex,WTF::RefPtr<WebCore::TileCache::Tile> > {} *m_table; 
                int m_tableSize; 
                int m_tableSizeMask; 
                int m_keyCount; 
                int m_deletedCount; 
            } m_impl; 
        } x27; struct Timer<WebCore::TileCache> { 
            int (**_vptr$TimerBase)(); 
            double m_nextFireTime; 
            double m_repeatInterval; 
            int m_heapIndex; 
            unsigned int m_heapInsertionOrder; 
            struct TileCache {} *m_object; 
            struct { 
                void**__pfn; 
            } m_function; 
        } x28; struct Vector<WebCore::IntRect,0ul> { 
            unsigned int m_size; 
            struct VectorBuffer<WebCore::IntRect,0ul> { 
                struct IntRect {} *m_buffer; 
                unsigned int m_capacity; 
            } m_buffer; 
        } x29; struct Mutex { 
            struct _opaque_pthread_mutex_t { 
                long __sig; 
                BOOL __opaque[40]; 
            } m_mutex; 
        } x30; struct Mutex { 
            struct _opaque_pthread_mutex_t { 
                long __sig; 
                BOOL __opaque[40]; 
            } m_mutex; 
        } x31; } *_tileCache;

    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _cachedVisibleRect;
    CALayer *_rootLayer;
}

+ (void)setOrientationProvider:(id)arg1;
+ (id)_wrapperForWindowRef:(struct WKWindow { struct _WKObject { unsigned int x_1_1_1; struct _WKClassInfo {} *x_1_1_2; } x1; id x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct WKView {} *x4; struct WKView {} *x5; struct WKView {} *x6; struct CGSize { float x_7_1_1; float x_7_1_2; } x7; struct CGSize { float x_8_1_1; float x_8_1_2; } x8; float x9; unsigned int x10 : 1; }*)arg1;
+ (BOOL)hasLandscapeOrientation;

- (void)makeKeyWindow;
- (void)setContentView:(id)arg1;
- (id)contentView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (void)willRotate;
- (id)initWithLayer:(id)arg1;
- (struct WKWindow { struct _WKObject { unsigned int x_1_1_1; struct _WKClassInfo {} *x_1_1_2; } x1; id x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct WKView {} *x4; struct WKView {} *x5; struct WKView {} *x6; struct CGSize { float x_7_1_1; float x_7_1_2; } x7; struct CGSize { float x_8_1_1; float x_8_1_2; } x8; float x9; unsigned int x10 : 1; }*)_windowRef;
- (void)layoutTiles;
- (void)setScreenSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setAvailableScreenSize:(struct CGSize { float x1; float x2; })arg1;
- (float)screenScale;
- (void)setScreenScale:(float)arg1;
- (void)setTilingMode:(int)arg1;
- (void)layoutTilesNowForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)tilesOpaque;
- (void)setTileMinificationFilter:(id)arg1;
- (void)setRootLayer:(id)arg1;
- (void)sendEvent:(id)arg1 contentChange:(int*)arg2;
- (void)close;
- (void)removeAllNonVisibleTiles;
- (void)setTilesOpaque:(BOOL)arg1;
- (void)layoutTilesNow;
- (void)removeAllTiles;
- (void)setUseOrientationDependentFontAntialiasing:(BOOL)arg1;
- (void)setTilingDirection:(int)arg1;
- (void)didRotate;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (id)firstResponder;
- (BOOL)isKeyWindow;
- (void)setNeedsDisplay;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)recursiveDescription;
- (void)dealloc;
- (id)description;
- (void)sendEvent:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_newFirstResponderAfterResigning;
- (int)keyViewSelectionDirection;
- (BOOL)makeFirstResponder:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 display:(BOOL)arg2;
- (id)rootLayer;
- (id)tileMinificationFilter;
- (int)tilingMode;
- (int)tilingDirection;
- (BOOL)hasPendingDraw;
- (void)hostLayerSizeChanged;
- (id)hostLayer;
- (BOOL)useOrientationDependentFontAntialiasing;
- (struct CGPoint { float x1; float x2; })convertBaseToScreen:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })convertScreenToBase:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGSize { float x1; float x2; })screenSize;
- (struct CGSize { float x1; float x2; })availableScreenSize;
- (oneway void)_webcore_releaseOnWebThread;
- (oneway void)release;

@end
