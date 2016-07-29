/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Silex/SXVideoOverlayButton.h>

@class UIButton, _UIBackdropView;

@interface SXHighFidelityVideoOverlayButton : UIView <SXVideoOverlayButton> {

	long long _style;
	UIButton* _button;
	_UIBackdropView* _backdropView;
	id _target;
	SEL _action;

}
-(void)recalculateBackdropView;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 ;
-(long long)style;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)_playButtonActivate:(id)arg1 ;
-(void)_playButtonDeactivate:(id)arg1 ;
-(void)_playButtonTapped:(id)arg1 ;
@end
