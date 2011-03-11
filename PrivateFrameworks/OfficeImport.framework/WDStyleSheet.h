/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary, WDStyle, NSMutableArray, WDDocument, WDParagraphProperties, WDCharacterProperties;

@interface WDStyleSheet : NSObject  {
    NSMutableDictionary *mStyleDictionary;
    WDDocument *mDocument;
    WDCharacterProperties *mDefaultCharacterProperties;
    WDParagraphProperties *mDefaultParagraphProperties;
    WDStyle *mDefaultParagraphStyle;
    WDStyle *mDefaultCharacterStyle;
    WDStyle *mDefaultTableStyle;
    WDStyle *mDefaultListStyle;
    NSMutableArray *mStylesInOrder;
    NSMutableDictionary *mIdDictionaryForName;
}


- (void)dealloc;
- (id)styleNameToId:(id)arg1;
- (void)setDefaultParagraphStyle:(id)arg1;
- (int)styleCount;
- (id)styleIdFromStyleName:(id)arg1;
- (id)styleWithName:(id)arg1;
- (id)paragraphStyleWithStartingName:(id)arg1;
- (id)createStyleWithName:(id)arg1 type:(int)arg2;
- (void)removeStyleWithId:(id)arg1;
- (id)defaultCharacterStyle;
- (void)setDefaultCharacterStyle:(id)arg1;
- (id)styleIdForName:(id)arg1;
- (void)initializeDefaultProperties;
- (void)setName:(id)arg1 forId:(id)arg2;
- (id)initWithDocument:(id)arg1;
- (id)createStyleWithId:(id)arg1 type:(int)arg2;
- (id)styleWithId:(id)arg1;
- (void)setDefaultListStyle:(id)arg1;
- (void)addStyle:(id)arg1 name:(id)arg2;
- (id)defaultCharacterProperties;
- (id)defaultParagraphProperties;
- (id)defaultParagraphStyle;
- (id)defaultListStyle;
- (void)createDefaultStyles;
- (id)document;
- (void)setDefaultTableStyle:(id)arg1;
- (id)defaultTableStyle;
- (id)styles;

@end
