/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBHUDView.h>

@interface SBVolumeHUDView : SBHUDView {

	int _mode;
	BOOL _headphonesPresent;
	float _euVolumeLimit;

}

@property (assign,nonatomic) int mode;                            //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) BOOL headphonesPresent;              //@synthesize headphonesPresent=_headphonesPresent - In the implementation block
@property (assign,nonatomic) float EUVolumeLimit;                 //@synthesize euVolumeLimit=_euVolumeLimit - In the implementation block
+(float)volumeStepUpForCurrentVolume:(float)arg1 euVolumeLimit:(float)arg2 ;
+(BOOL)wouldShowAtLeastAYellowBlockForVolume:(float)arg1 euVolumeLimit:(float)arg2 ;
+(float)volumeStepDownForCurrentVolume:(float)arg1 euVolumeLimit:(float)arg2 ;
-(id)_blockColorForValue:(float)arg1 ;
-(void)_updateBlockView:(id)arg1 value:(float)arg2 blockSize:(CGSize)arg3 point:(CGPoint)arg4 ;
-(void)setHeadphonesPresent:(BOOL)arg1 ;
-(BOOL)headphonesPresent;
-(id)init;
-(void)setProgress:(float)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(float)EUVolumeLimit;
-(void)_updateImage;
-(void)_updateLabels;
-(void)setEUVolumeLimit:(float)arg1 ;
@end

