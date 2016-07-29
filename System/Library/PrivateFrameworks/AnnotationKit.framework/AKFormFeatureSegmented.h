/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKFormFeature.h>

@class AKFormFeatureLine, NSArray;

@interface AKFormFeatureSegmented : AKFormFeature {

	AKFormFeatureLine* _baseline;
	NSArray* _characterSegmentRects;
	CGRect _enclosingRegionRect;

}

@property (nonatomic,retain) AKFormFeatureLine * baseline;                 //@synthesize baseline=_baseline - In the implementation block
@property (assign,nonatomic) CGRect enclosingRegionRect;                   //@synthesize enclosingRegionRect=_enclosingRegionRect - In the implementation block
@property (nonatomic,retain) NSArray * characterSegmentRects;              //@synthesize characterSegmentRects=_characterSegmentRects - In the implementation block
+(id)segments:(id)arg1 withEnclosingRect:(CGRect)arg2 baseline:(id)arg3 onPage:(id)arg4 ;
-(void)setEnclosingRegionRect:(CGRect)arg1 ;
-(CGRect)enclosingRegionRect;
-(id)initWithCharacterSegments:(id)arg1 enclosingRect:(CGRect)arg2 baseline:(id)arg3 onPage:(id)arg4 ;
-(NSArray *)characterSegmentRects;
-(void)setCharacterSegmentRects:(NSArray *)arg1 ;
-(AKFormFeatureLine *)baseline;
-(void)setBaseline:(AKFormFeatureLine *)arg1 ;
@end

