/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class SBIconViewMap, SBIconView, SBIcon;

@interface SBIconRotationContainer : UIView {

	SBIconCoordinate _coordinate;
	SBIconViewMap* _viewMap;
	SBIconView* _startView;
	SBIconView* _endView;
	CGPoint _wallpaperRelativeImageCenter;
	int _location;

}

@property (nonatomic,retain,readonly) SBIcon * endIcon; 
@property (nonatomic,readonly) SBIconCoordinate coordinate;                     //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,readonly) int location;                                    //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) CGPoint wallpaperRelativeImageCenter;              //@synthesize wallpaperRelativeImageCenter=_wallpaperRelativeImageCenter - In the implementation block
@property (nonatomic,readonly) CGPoint iconImageCenter; 
-(void)setWallpaperRelativeImageCenter:(CGPoint)arg1 ;
-(CGPoint)iconImageCenter;
-(id)initWithFrame:(CGRect)arg1 startIcon:(id)arg2 endIcon:(id)arg3 viewMap:(id)arg4 coordinate:(SBIconCoordinate)arg5 location:(int)arg6 ;
-(void)prepareToCrossfade;
-(void)crossfadeWithDuration:(double)arg1 ;
-(SBIcon *)endIcon;
-(CGPoint)wallpaperRelativeImageCenter;
-(void)dealloc;
-(int)location;
-(SBIconCoordinate)coordinate;
@end

