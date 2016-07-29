/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/AccessibilityBundles/ZoomWindow.axuiservice/ZoomWindow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ZoomWindow/ZoomWindow-Structs.h>
@interface ZWKeyboardContext : NSObject {

	BOOL _zoomFollowsFocus;
	BOOL _zoomRepositionsForKeyboard;
	BOOL _userMovedKeyboardLens;
	CGRect _keyboardFrame;

}

@property (assign,nonatomic) CGRect keyboardFrame;                         //@synthesize keyboardFrame=_keyboardFrame - In the implementation block
@property (nonatomic,readonly) BOOL isKeyboardVisible; 
@property (assign,nonatomic) BOOL zoomFollowsFocus;                        //@synthesize zoomFollowsFocus=_zoomFollowsFocus - In the implementation block
@property (assign,nonatomic) BOOL zoomRepositionsForKeyboard;              //@synthesize zoomRepositionsForKeyboard=_zoomRepositionsForKeyboard - In the implementation block
@property (assign,nonatomic) BOOL userMovedKeyboardLens;                   //@synthesize userMovedKeyboardLens=_userMovedKeyboardLens - In the implementation block
-(void)setUserMovedKeyboardLens:(BOOL)arg1 ;
-(BOOL)userMovedKeyboardLens;
-(BOOL)zoomRepositionsForKeyboard;
-(void)setZoomFollowsFocus:(BOOL)arg1 ;
-(void)setZoomRepositionsForKeyboard:(BOOL)arg1 ;
-(BOOL)zoomFollowsFocus;
-(BOOL)isKeyboardVisible;
-(CGRect)keyboardFrame;
-(void)setKeyboardFrame:(CGRect)arg1 ;
@end

