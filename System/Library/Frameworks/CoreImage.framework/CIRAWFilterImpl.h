/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSDictionary, NSNumber, NSArray, NSObject, CIVector, NSString, CIFilter;

@interface CIRAWFilterImpl : CIFilter {

	CGImageSourceRef _inputImageSource;
	CGImageRef _cgImage;
	CIImage* _inputImage;
	CIImage* _transformedImage;
	CGSize _nativeSize;
	NSDictionary* _rawDictionary;
	NSDictionary* _rawReconstructionDefaultsDictionary;
	NSNumber* _sushiMode;
	NSArray* _supportedDecoderVersions;
	NSArray* _filters;
	NSObject* _typeIdentifierHint;
	NSNumber* _hasRawImageSource;
	NSNumber* _defaultOrientation;
	NSArray* _neutralColour;
	NSNumber* inputNeutralChromaticityX;
	NSNumber* inputNeutralChromaticityY;
	NSNumber* inputNeutralTemperature;
	NSNumber* inputNeutralTint;
	CIVector* inputNeutralLocation;
	NSDictionary* outputImageProperties;
	NSNumber* inputEV;
	NSNumber* inputBoost;
	NSNumber* inputDraftMode;
	NSNumber* inputScaleFactor;
	NSNumber* inputIgnoreOrientation;
	NSNumber* inputImageOrientation;
	NSNumber* inputEnableSharpening;
	NSNumber* inputEnableNoiseTracking;
	NSNumber* inputEnableVendorLensCorrection;
	NSNumber* inputNoiseReductionAmount;
	NSNumber* inputLuminanceNoiseReductionAmount;
	NSNumber* inputColorNoiseReductionAmount;
	NSNumber* inputNoiseReductionSharpnessAmount;
	NSNumber* inputNoiseReductionContrastAmount;
	NSNumber* inputNoiseReductionDetailAmount;
	NSString* inputDecoderVersion;
	NSNumber* inputBoostShadowAmount;
	NSNumber* inputBias;
	CIFilter* inputLinearSpaceFilter;

}

@property (readonly) BOOL hasRawImageSource; 
@property (retain,readonly) CIImage * transformedImage; 
@property (retain,readonly) NSDictionary * rawDictionary; 
@property (retain,readonly) NSDictionary * rawReconstructionDefaultsDictionary; 
@property (retain,readonly) NSNumber * sushiMode; 
@property (readonly) int rawMajorVersion; 
@property (retain,readonly) NSArray * sourceFilters; 
@property (retain,readonly) NSArray * filters; 
@property (readonly) int subsampling; 
@property (readonly) CGSize nativeSize; 
+(void)convertNeutralX:(id)arg1 y:(id)arg2 toTemperature:(id*)arg3 tint:(id*)arg4 ;
+(void)convertNeutralTemperature:(id)arg1 tint:(id)arg2 toX:(id*)arg3 y:(id*)arg4 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)optionKeys;
+(CGColorSpaceRef)adobeLinearRGBColorSpace;
+(CGColorSpaceRef)linearRGBColorSpace;
+(id)applyMatrix:(const double*)arg1 toCIImage:(id)arg2 ;
+(id)customAttributes;
+(id)filterWithImageURL:(id)arg1 options:(id)arg2 ;
+(id)filterWithImageData:(id)arg1 options:(id)arg2 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(id)defaultNeutralTemperature;
-(void)setInputNeutralTemperature:(id)arg1 ;
-(id)defaultNeutralTint;
-(void)setInputNeutralTint:(id)arg1 ;
-(id)defaultNeutralChromaticityX;
-(void)setInputNeutralChromaticityX:(id)arg1 ;
-(id)defaultNeutralChromaticityY;
-(void)setInputNeutralChromaticityY:(id)arg1 ;
-(id)inputNeutralChromaticityX;
-(id)inputNeutralChromaticityY;
-(id)inputNeutralTemperature;
-(id)inputNeutralTint;
-(id)whitePointArray;
-(id)whitePoint;
-(void)getWhitePointVectorsR:(id*)arg1 g:(id*)arg2 b:(id*)arg3 ;
-(void)updateTemperatureAndTint;
-(void)updateChomaticityXAndY;
-(void)setInputEV:(id)arg1 ;
-(void)setInputScaleFactor:(id)arg1 ;
-(id)defaultInputLuminanceNoiseReductionAmount;
-(void)setInputLuminanceNoiseReductionAmount:(id)arg1 ;
-(id)defaultInputColorNoiseReductionAmount;
-(void)setInputColorNoiseReductionAmount:(id)arg1 ;
-(id)defaultInputNoiseReductionContrastAmount;
-(void)setInputNoiseReductionContrastAmount:(id)arg1 ;
-(id)defaultInputNoiseReductionDetailAmount;
-(void)setInputNoiseReductionDetailAmount:(id)arg1 ;
-(id)defaultInputNoiseReductionSharpnessAmount;
-(void)setInputNoiseReductionSharpnessAmount:(id)arg1 ;
-(id)defaultInputEnableVendorLensCorrection;
-(void)setInputEnableVendorLensCorrection:(id)arg1 ;
-(void)setInputIgnoreOrientation:(id)arg1 ;
-(void)setInputEnableNoiseTracking:(id)arg1 ;
-(void)setInputNoiseReductionAmount:(id)arg1 ;
-(void)setInputEnableSharpening:(id)arg1 ;
-(void)setInputDraftMode:(id)arg1 ;
-(void)setInputBoost:(id)arg1 ;
-(id)defaultBoostShadowAmount;
-(void)setInputBoostShadowAmount:(id)arg1 ;
-(id)defaultImageOrientation;
-(void)setInputImageOrientation:(id)arg1 ;
-(id)defaultDecoderVersion;
-(void)setInputDecoderVersion:(id)arg1 ;
-(id)defaultInputBiasAmount;
-(id)inputNeutralLocation;
-(id)inputLinearSpaceFilter;
-(id)supportedDecoderVersions;
-(id)RAWFiltersValueForKeyPath:(id)arg1 ;
-(void)setInputNeutralLocation:(id)arg1 ;
-(void)setInputLinearSpaceFilter:(id)arg1 ;
-(id)activeKeys;
-(id)outputNativeSize;
-(CGImageRef)cgImage;
-(id)outputImage;
-(id)inputImage;
-(id)inputBias;
-(void)setInputBias:(id)arg1 ;
-(void)setInputImage:(id)arg1 ;
-(id)initWithImageSource:(CGImageSourceRef)arg1 options:(id)arg2 ;
-(NSDictionary *)rawReconstructionDefaultsDictionary;
-(id)rawOptions;
-(NSArray *)sourceFilters;
-(NSNumber *)sushiMode;
-(CIImage *)transformedImage;
-(CGSize)nativeSize;
-(void)invalidateFilters;
-(void)invalidateTransformedImage;
-(void)invalidateInputImage;
-(id)rawOptionsWithSubsampling:(BOOL)arg1 ;
-(int)subsampling;
-(CGAffineTransform)scaleTransform;
-(void)invalidateCoreGraphicsImage;
-(BOOL)hasRawImageSource;
-(int)rawMajorVersion;
-(void)setTempTintAtPoint:(CGPoint)arg1 ;
-(NSArray *)filters;
-(CGAffineTransform)imageTransform;
-(NSDictionary *)rawDictionary;
-(id)outputKeys;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDefaults;
-(void)finalize;
@end

