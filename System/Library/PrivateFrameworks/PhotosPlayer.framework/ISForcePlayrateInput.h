/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <PhotosPlayer/ISGestureInput.h>

@class ISDisplayLink;

@interface ISForcePlayrateInput : ISGestureInput {

	double _lastUpdate;
	double _smoothedVelocity;
	SCD_Struct_IS1 _cachedDurationCMTime;
	BOOL __active;
	ISDisplayLink* __displayLink;

}

@property (setter=_setDisplayLink:,nonatomic,retain) ISDisplayLink * _displayLink;              //@synthesize _displayLink=__displayLink - In the implementation block
@property (assign,setter=_setActive:,nonatomic) BOOL _active;                                   //@synthesize _active=__active - In the implementation block
-(id)init;
-(void)_setActive:(BOOL)arg1 ;
-(void)playerDidChange;
-(void)_setDisplayLink:(id)arg1 ;
-(ISDisplayLink *)_displayLink;
-(void)_handlePress:(id)arg1 ;
-(long long)inputType;
-(void)_handleUpdate;
-(BOOL)_isTouching;
-(id)newGestureRecognizer;
-(BOOL)_active;
@end

