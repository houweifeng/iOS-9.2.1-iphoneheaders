/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSArray;

@interface PLPhotoEditModel : NSObject <NSCopying> {

	NSString* _effectFilterName;
	long long _effectFilterVersion;
	BOOL _smartToneEnabled;
	double _smartToneLevel;
	double _autoSmartToneLevel;
	NSString* _autoSmartToneIdentifier;
	double _brightnessLevelOffset;
	double _contrastLevelOffset;
	double _exposureLevelOffset;
	double _shadowsLevelOffset;
	double _blackPointLevelOffset;
	double _highlightsLevelOffset;
	BOOL _smartColorEnabled;
	double _autoSmartColorLevel;
	NSString* _autoSmartColorIdentifier;
	double _smartColorLevel;
	double _colorContrastLevelOffset;
	double _colorVibrancyLevelOffset;
	double _colorCastLevelOffset;
	BOOL _smartBWEnabled;
	double _smartBWLevel;
	double _bwStrengthLevelOffset;
	double _bwNeutralGammaLevelOffset;
	double _bwToneLevelOffset;
	double _bwHueLevelOffset;
	double _bwGrainLevelOffset;
	BOOL _whiteBalanceEnabled;
	double _whiteBalanceFaceI;
	double _whiteBalanceFaceQ;
	double _whiteBalanceFaceStrength;
	double _whiteBalanceFaceWarmth;
	double _straightenAngle;
	CGRect _normalizedCropRect;
	long long _cropConstraintWidth;
	long long _cropConstraintHeight;
	long long _appliedOrientation;
	BOOL _autoCropped;
	NSDictionary* _smartToneStatistics;
	NSDictionary* _smartColorStatistics;
	NSDictionary* _smartBWStatistics;
	NSDictionary* _autoWhiteBalanceSettings;
	NSString* _autoWhiteBalanceIdentifier;
	NSArray* _redEyeCorrections;
	NSArray* _autoRedEyeCorrections;
	NSArray* _legacyAutoEnhanceFilters;
	BOOL _legacyAutoEnhanceIsOn;

}

@property (nonatomic,copy,readonly) NSString * effectFilterName;                                   //@synthesize effectFilterName=_effectFilterName - In the implementation block
@property (nonatomic,readonly) long long effectFilterVersion;                                      //@synthesize effectFilterVersion=_effectFilterVersion - In the implementation block
@property (getter=isSmartToneEnabled,nonatomic,readonly) BOOL smartToneEnabled;                    //@synthesize smartToneEnabled=_smartToneEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * smartToneStatistics;                            //@synthesize smartToneStatistics=_smartToneStatistics - In the implementation block
@property (nonatomic,readonly) double autoSmartToneLevel;                                          //@synthesize autoSmartToneLevel=_autoSmartToneLevel - In the implementation block
@property (nonatomic,copy,readonly) NSString * autoSmartToneIdentifier;                            //@synthesize autoSmartToneIdentifier=_autoSmartToneIdentifier - In the implementation block
@property (nonatomic,readonly) double smartToneLevel;                                              //@synthesize smartToneLevel=_smartToneLevel - In the implementation block
@property (nonatomic,readonly) double brightnessLevelOffset;                                       //@synthesize brightnessLevelOffset=_brightnessLevelOffset - In the implementation block
@property (nonatomic,readonly) double contrastLevelOffset;                                         //@synthesize contrastLevelOffset=_contrastLevelOffset - In the implementation block
@property (nonatomic,readonly) double exposureLevelOffset;                                         //@synthesize exposureLevelOffset=_exposureLevelOffset - In the implementation block
@property (nonatomic,readonly) double highlightsLevelOffset;                                       //@synthesize highlightsLevelOffset=_highlightsLevelOffset - In the implementation block
@property (nonatomic,readonly) double shadowsLevelOffset;                                          //@synthesize shadowsLevelOffset=_shadowsLevelOffset - In the implementation block
@property (nonatomic,readonly) double blackPointLevelOffset;                                       //@synthesize blackPointLevelOffset=_blackPointLevelOffset - In the implementation block
@property (getter=isSmartColorEnabled,nonatomic,readonly) BOOL smartColorEnabled;                  //@synthesize smartColorEnabled=_smartColorEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * smartColorStatistics;                           //@synthesize smartColorStatistics=_smartColorStatistics - In the implementation block
@property (nonatomic,readonly) double autoSmartColorLevel;                                         //@synthesize autoSmartColorLevel=_autoSmartColorLevel - In the implementation block
@property (nonatomic,copy,readonly) NSString * autoSmartColorIdentifier;                           //@synthesize autoSmartColorIdentifier=_autoSmartColorIdentifier - In the implementation block
@property (nonatomic,readonly) double smartColorLevel;                                             //@synthesize smartColorLevel=_smartColorLevel - In the implementation block
@property (nonatomic,readonly) double colorContrastLevelOffset;                                    //@synthesize colorContrastLevelOffset=_colorContrastLevelOffset - In the implementation block
@property (nonatomic,readonly) double colorVibrancyLevelOffset;                                    //@synthesize colorVibrancyLevelOffset=_colorVibrancyLevelOffset - In the implementation block
@property (nonatomic,readonly) double colorCastLevelOffset;                                        //@synthesize colorCastLevelOffset=_colorCastLevelOffset - In the implementation block
@property (getter=isSmartBWEnabled,nonatomic,readonly) BOOL smartBWEnabled;                        //@synthesize smartBWEnabled=_smartBWEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * smartBWStatistics;                              //@synthesize smartBWStatistics=_smartBWStatistics - In the implementation block
@property (nonatomic,readonly) double smartBWLevel;                                                //@synthesize smartBWLevel=_smartBWLevel - In the implementation block
@property (nonatomic,readonly) double bwStrengthLevelOffset;                                       //@synthesize bwStrengthLevelOffset=_bwStrengthLevelOffset - In the implementation block
@property (nonatomic,readonly) double bwNeutralGammaLevelOffset;                                   //@synthesize bwNeutralGammaLevelOffset=_bwNeutralGammaLevelOffset - In the implementation block
@property (nonatomic,readonly) double bwToneLevelOffset;                                           //@synthesize bwToneLevelOffset=_bwToneLevelOffset - In the implementation block
@property (nonatomic,readonly) double bwHueLevelOffset;                                            //@synthesize bwHueLevelOffset=_bwHueLevelOffset - In the implementation block
@property (nonatomic,readonly) double bwGrainLevelOffset;                                          //@synthesize bwGrainLevelOffset=_bwGrainLevelOffset - In the implementation block
@property (getter=isWhiteBalanceEnabled,nonatomic,readonly) BOOL whiteBalanceEnabled;              //@synthesize whiteBalanceEnabled=_whiteBalanceEnabled - In the implementation block
@property (nonatomic,readonly) double whiteBalanceFaceI;                                           //@synthesize whiteBalanceFaceI=_whiteBalanceFaceI - In the implementation block
@property (nonatomic,readonly) double whiteBalanceFaceQ;                                           //@synthesize whiteBalanceFaceQ=_whiteBalanceFaceQ - In the implementation block
@property (nonatomic,readonly) double whiteBalanceFaceStrength;                                    //@synthesize whiteBalanceFaceStrength=_whiteBalanceFaceStrength - In the implementation block
@property (nonatomic,readonly) double whiteBalanceFaceWarmth;                                      //@synthesize whiteBalanceFaceWarmth=_whiteBalanceFaceWarmth - In the implementation block
@property (nonatomic,readonly) long long appliedOrientation;                                       //@synthesize appliedOrientation=_appliedOrientation - In the implementation block
@property (nonatomic,readonly) CGRect normalizedCropRect;                                          //@synthesize normalizedCropRect=_normalizedCropRect - In the implementation block
@property (getter=isCropConstrained,nonatomic,readonly) BOOL cropConstrained; 
@property (nonatomic,readonly) long long cropConstraintWidth;                                      //@synthesize cropConstraintWidth=_cropConstraintWidth - In the implementation block
@property (nonatomic,readonly) long long cropConstraintHeight;                                     //@synthesize cropConstraintHeight=_cropConstraintHeight - In the implementation block
@property (nonatomic,readonly) double straightenAngle;                                             //@synthesize straightenAngle=_straightenAngle - In the implementation block
@property (nonatomic,readonly) BOOL hasIdentityCrop; 
@property (getter=isAutoCropped,nonatomic,readonly) BOOL autoCropped;                              //@synthesize autoCropped=_autoCropped - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * autoWhiteBalanceSettings;                       //@synthesize autoWhiteBalanceSettings=_autoWhiteBalanceSettings - In the implementation block
@property (nonatomic,copy,readonly) NSString * autoWhiteBalanceIdentifier;                         //@synthesize autoWhiteBalanceIdentifier=_autoWhiteBalanceIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * redEyeCorrections;                                   //@synthesize redEyeCorrections=_redEyeCorrections - In the implementation block
@property (nonatomic,copy,readonly) NSArray * autoRedEyeCorrections;                               //@synthesize autoRedEyeCorrections=_autoRedEyeCorrections - In the implementation block
@property (nonatomic,readonly) BOOL hasRedEyeCorrections; 
@property (nonatomic,readonly) BOOL hasAnyAutoEnhancement; 
@property (nonatomic,copy,readonly) NSArray * legacyAutoEnhanceFilters;                            //@synthesize legacyAutoEnhanceFilters=_legacyAutoEnhanceFilters - In the implementation block
@property (nonatomic,readonly) BOOL legacyAutoEnhanceIsOn;                                         //@synthesize legacyAutoEnhanceIsOn=_legacyAutoEnhanceIsOn - In the implementation block
+(long long)identityCropConstraint;
+(double)referenceWhiteBalanceFaceILevelOfType:(long long)arg1 ;
+(double)referenceWhiteBalanceFaceQLevelOfType:(long long)arg1 ;
+(double)referenceWhiteBalanceFaceStrengthLevelOfType:(long long)arg1 ;
+(double)referenceWhiteBalanceFaceWarmthLevelOfType:(long long)arg1 ;
+(id)_identityModel;
+(void)_loadReferenceLevelsFromCIFilterWithName:(id)arg1 attributeKeys:(id)arg2 intoLevelStructs:(/*function pointer*/void**)arg3 ;
+(void)_loadSubfilterReferenceLevelsIfNeeded;
+(double)_referenceValueOfType:(long long)arg1 fromLevels:(SCD_Struct_PL23)arg2 ;
+(double)referenceStraightenAngleOfType:(long long)arg1 ;
+(long long)identityOrientation;
+(CGRect)identityNormalizedCropRect;
+(double)referenceSmartToneLevelOfType:(long long)arg1 ;
+(double)referenceSmartColorLevelOfType:(long long)arg1 ;
+(double)referenceBrightnessLevelOfType:(long long)arg1 ;
+(double)referenceContrastLevelOfType:(long long)arg1 ;
+(double)referenceExposureLevelOfType:(long long)arg1 ;
+(double)referenceHighlightsLevelOfType:(long long)arg1 ;
+(double)referenceShadowsLevelOfType:(long long)arg1 ;
+(double)referenceBlackPointLevelOfType:(long long)arg1 ;
+(double)referenceColorContrastLevelOfType:(long long)arg1 ;
+(double)referenceColorVibrancyLevelOfType:(long long)arg1 ;
+(double)referenceColorCastLevelOfType:(long long)arg1 ;
+(double)referenceSmartBWLevelOfType:(long long)arg1 ;
+(double)referenceBWStrengthLevelOfType:(long long)arg1 ;
+(double)referenceBWNeutralGammaLevelOfType:(long long)arg1 ;
+(double)referenceBWToneLevelOfType:(long long)arg1 ;
+(double)referenceBWHueLevelOfType:(long long)arg1 ;
+(double)referenceBWGrainLevelOfType:(long long)arg1 ;
-(BOOL)_pu_hasIrisConflicts;
-(id)pl_aggregateNameForEffectFilter;
-(id)pl_aggregateKeysForPreviousPhotoEditModel:(id)arg1 ;
-(BOOL)pl_isCropEnabled;
-(CGRect)pl_dataCropRectForImageGeometry:(id)arg1 straightenAngle:(double)arg2 ;
-(BOOL)pl_isCropConstraintEnabled;
-(CGSize)pl_dataCropConstraintSizeForImageGeometry:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)mutableCopy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToPhotoEditModel:(id)arg1 ;
-(NSArray *)legacyAutoEnhanceFilters;
-(long long)effectFilterVersion;
-(BOOL)isGeometryIdentity;
-(void)_copyValuesFromModel:(id)arg1 interpolationStartModel:(id)arg2 progress:(double)arg3 ;
-(double)autoSmartToneLevel;
-(double)autoSmartColorLevel;
-(BOOL)isAutoCropped;
-(NSDictionary *)autoWhiteBalanceSettings;
-(BOOL)_shouldEarlyExitComparisonToModel:(id)arg1 returnValue:(BOOL*)arg2 ;
-(BOOL)isEffectFilterEqualToPhotoEditModel:(id)arg1 ;
-(BOOL)isSmartTonePrecisionEqualToPhotoEditModel:(id)arg1 ;
-(BOOL)isSmartColorPrecisionEqualToPhotoEditModel:(id)arg1 ;
-(BOOL)isSmartBWPrecisionEqualToPhotoEditModel:(id)arg1 ;
-(BOOL)isRedEyeCorrectionEqualToPhotoEditModel:(id)arg1 ;
-(BOOL)isCropConstrained;
-(id)_debugDictionaryRepresentation;
-(BOOL)isCropConstraintEqualToPhotoEditModel:(id)arg1 ;
-(BOOL)hasAnyAutoEnhancement;
-(BOOL)hasRedEyeCorrections;
-(BOOL)hasIdentityCrop;
-(BOOL)isIdentityModel;
-(BOOL)isVisuallyEqualToPhotoEditModel:(id)arg1 ;
-(NSArray *)redEyeCorrections;
-(double)straightenAngle;
-(long long)appliedOrientation;
-(CGRect)normalizedCropRect;
-(long long)cropConstraintWidth;
-(long long)cropConstraintHeight;
-(NSArray *)autoRedEyeCorrections;
-(NSString *)autoSmartToneIdentifier;
-(NSString *)autoSmartColorIdentifier;
-(NSString *)autoWhiteBalanceIdentifier;
-(BOOL)legacyAutoEnhanceIsOn;
-(NSDictionary *)smartToneStatistics;
-(NSDictionary *)smartColorStatistics;
-(BOOL)isSmartToneEnabled;
-(double)smartToneLevel;
-(BOOL)isSmartColorEnabled;
-(double)smartColorLevel;
-(BOOL)isWhiteBalanceEnabled;
-(double)whiteBalanceFaceI;
-(double)whiteBalanceFaceQ;
-(double)whiteBalanceFaceStrength;
-(double)whiteBalanceFaceWarmth;
-(NSString *)effectFilterName;
-(BOOL)isGeometryEqualToPhotoEditModel:(id)arg1 ;
-(NSDictionary *)smartBWStatistics;
-(double)brightnessLevelOffset;
-(double)contrastLevelOffset;
-(double)exposureLevelOffset;
-(double)highlightsLevelOffset;
-(double)shadowsLevelOffset;
-(double)blackPointLevelOffset;
-(double)colorContrastLevelOffset;
-(double)colorVibrancyLevelOffset;
-(double)colorCastLevelOffset;
-(double)smartBWLevel;
-(double)bwStrengthLevelOffset;
-(double)bwNeutralGammaLevelOffset;
-(double)bwToneLevelOffset;
-(double)bwHueLevelOffset;
-(double)bwGrainLevelOffset;
-(BOOL)isSmartBWEnabled;
@end

