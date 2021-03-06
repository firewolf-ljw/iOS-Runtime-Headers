/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIFilter : NSObject <NSCopying, NSSecureCoding> {
    void *_priv;
}

@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) NSArray *inputKeys;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) CIImage *outputImage;
@property (nonatomic, readonly) NSArray *outputKeys;

// Image: /System/Library/Frameworks/CoreImage.framework/CoreImage

+ (id)_filterArrayFromImageMetadata:(struct CGImageMetadata { }*)arg1 inputImageExtent:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (id)_filterArrayFromProperties:(id)arg1;
+ (id)_filterArrayFromProperties:(id)arg1 inputImageExtent:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (struct CGImageMetadata { }*)_imageMetadataFromFilters:(id)arg1 inputImageExtent:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (id)_propertyArrayFromFilters:(id)arg1 inputImageExtent:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (id)allCategories:(BOOL)arg1;
+ (id)customAttributes;
+ (id)filterArrayFromSerializedXMP:(id)arg1 inputImageExtent:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 error:(id*)arg3;
+ (id)filterNamesInCategories:(id)arg1;
+ (id)filterNamesInCategory:(id)arg1;
+ (id)filterWithImageData:(id)arg1 options:(id)arg2;
+ (id)filterWithImageURL:(id)arg1 options:(id)arg2;
+ (id)filterWithName:(id)arg1;
+ (id)filterWithName:(id)arg1 compatibilityVersion:(int)arg2;
+ (id)filterWithName:(id)arg1 compatibilityVersion:(int)arg2 keysAndValues:(id)arg3;
+ (id)filterWithName:(id)arg1 keysAndValues:(id)arg2;
+ (id)filterWithName:(id)arg1 setDefaults:(BOOL)arg2;
+ (id)filterWithName:(id)arg1 withInputParameters:(id)arg2;
+ (id)filterWithString:(id)arg1;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)localizedDescriptionForFilterName:(id)arg1;
+ (id)localizedNameForCategory:(id)arg1;
+ (id)localizedNameForFilterName:(id)arg1;
+ (id)localizedReferenceDocumentationForFilterName:(id)arg1;
+ (void)registerFilterName:(id)arg1 constructor:(id)arg2 classAttributes:(id)arg3;
+ (id)serializedXMPFromFilters:(id)arg1 inputImageExtent:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (BOOL)supportsSecureCoding;

- (id)_copyFilterWithZone:(struct _NSZone { }*)arg1;
- (void)_crashed_when_dealloc_called_setValue_nil_forKey_probably_because_the_subclass_already_released_it:(id)arg1;
- (BOOL)_filterClassInCategory:(id)arg1;
- (BOOL)_isIdentity;
- (id)_serializedXMPString;
- (id)apply:(id)arg1;
- (id)apply:(id)arg1 arguments:(id)arg2 options:(id)arg3;
- (id)apply:(id)arg1 image:(id)arg2 arguments:(id)arg3 inSpace:(struct CGColorSpace { }*)arg4;
- (id)apply:(id)arg1 image:(id)arg2 arguments:(id)arg3 inoutSpace:(struct CGColorSpace { }*)arg4;
- (id)attributes;
- (int)compatibilityVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customAttributes;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)finalize;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)inputKeys;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)name;
- (id)outputImage;
- (id)outputKeys;
- (void)setDefaults;
- (void)setIdentity;
- (void)setOption:(id)arg1 forKey:(id)arg2;
- (void)setUserInfo:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)userInfo;
- (id)valueForUndefinedKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices

+ (id)_pl_filterArrayFromProperties:(id)arg1 inputImageExtent:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
+ (id)_pl_propertyArrayFromFilters:(id)arg1 inputImageExtent:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;

@end
