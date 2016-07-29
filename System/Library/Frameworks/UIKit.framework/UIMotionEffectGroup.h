/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIMotionEffect.h>

@class NSArray;

@interface UIMotionEffectGroup : UIMotionEffect {

	NSArray* _motionEffects;

}

@property (nonatomic,copy) NSArray * motionEffects;              //@synthesize motionEffects=_motionEffects - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)motionEffects;
-(void)setMotionEffects:(NSArray *)arg1 ;
-(id)keyPathsAndRelativeValuesForViewerOffset:(UIOffset)arg1 ;
-(id)_keyPathsAndRelativeValuesForPose:(id)arg1 ;
@end

