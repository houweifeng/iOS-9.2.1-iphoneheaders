/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ZWAlertManager : NSObject {

	NSString* _currentAlertID;

}

@property (nonatomic,retain) NSString * currentAlertID;              //@synthesize currentAlertID=_currentAlertID - In the implementation block
-(NSString *)currentAlertID;
-(void)showOrbZoomToggleOn;
-(void)showZoomEnabledAlertIfAppropriate;
-(void)showZoomDisabledAlertIfAppropriate;
-(BOOL)_shouldShowZoomAlert;
-(void)setCurrentAlertID:(NSString *)arg1 ;
-(void)showOrbZoomToggleOff;
@end
