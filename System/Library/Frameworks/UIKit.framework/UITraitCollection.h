/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface UITraitCollection : NSObject <NSCopying, NSSecureCoding> {

	SCD_Struct_UI98 _builtinTraits;
	NSDictionary* _clientDefinedTraits;

}

@property (getter=music_isContainedWithinSplitViewDetail,nonatomic,readonly) BOOL music_containedWithinSplitViewDetail; 
@property (getter=music_isContainedWithinSplitViewPrimary,nonatomic,readonly) BOOL music_containedWithinSplitViewPrimary; 
@property (nonatomic,readonly) BOOL MPU_hasCompactHeight; 
@property (nonatomic,readonly) BOOL MPU_hasCompactWidth; 
@property (nonatomic,readonly) BOOL MPU_hasRegularHeight; 
@property (nonatomic,readonly) BOOL MPU_hasRegularWidth; 
@property (nonatomic,readonly) long long barMetrics; 
@property (nonatomic,readonly) long long barPosition; 
@property (nonatomic,readonly) long long userInterfaceIdiom; 
@property (nonatomic,readonly) double displayScale; 
@property (nonatomic,readonly) long long horizontalSizeClass; 
@property (nonatomic,readonly) long long verticalSizeClass; 
@property (nonatomic,readonly) long long forceTouchCapability; 
+(id)music_traitCollectionWithContainedWithinSplitViewDetail:(BOOL)arg1 ;
+(id)music_traitCollectionWithContainedWithinSplitViewPrimary:(BOOL)arg1 ;
+(id)traitCollectionWithBarMetrics:(long long)arg1 ;
+(id)traitCollectionWithBarPosition:(long long)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)traitCollectionWithDisplayScale:(double)arg1 ;
+(id)traitCollectionWithHorizontalSizeClass:(long long)arg1 ;
+(id)traitCollectionWithVerticalSizeClass:(long long)arg1 ;
+(id)traitCollectionWithTraitsFromCollections:(id)arg1 ;
+(id)_emptyTraitCollection;
+(id)traitCollectionWithUserInterfaceIdiom:(long long)arg1 ;
+(id)traitCollectionWithInteractionModel:(unsigned long long)arg1 ;
+(id)traitCollectionWithTouchLevel:(long long)arg1 ;
+(id)traitCollectionWithPrimaryInteractionModel:(unsigned long long)arg1 ;
+(id)traitCollectionWithUserInterfaceStyle:(long long)arg1 ;
+(id)traitCollectionWithForceTouchCapability:(long long)arg1 ;
+(id)_traitCollectionWithValue:(id)arg1 forTraitNamed:(id)arg2 ;
-(BOOL)_maps_isLegacyLandscape;
-(BOOL)music_isContainedWithinSplitViewPrimary;
-(BOOL)music_isContainedWithinSplitViewDetail;
-(BOOL)MPU_hasCompactHeight;
-(BOOL)MPU_hasCompactWidth;
-(BOOL)MPU_hasRegularWidth;
-(BOOL)MPU_hasRegularHeight;
-(BOOL)mf_supportsPopoverPresentation;
-(long long)barMetrics;
-(long long)barPosition;
-(id)_namedImageDescription;
-(long long)userInterfaceIdiom;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)verticalSizeClass;
-(long long)horizontalSizeClass;
-(unsigned long long)primaryInteractionModel;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithBuiltinTraitStorage:(SCD_Struct_UI98*)arg1 clientDefinedTraits:(id)arg2 ;
-(double)displayScale;
-(BOOL)containsTraitsInCollection:(id)arg1 ;
-(unsigned long long)interactionModel;
-(long long)userInterfaceStyle;
-(id)_valueForTraitNamed:(id)arg1 ;
-(long long)_compare:(id)arg1 ;
-(BOOL)_matchesIntersectionWithTraitCollection:(id)arg1 ;
-(long long)touchLevel;
-(long long)forceTouchCapability;
@end

