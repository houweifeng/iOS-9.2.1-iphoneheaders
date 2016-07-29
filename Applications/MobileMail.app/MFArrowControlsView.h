/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>

@protocol MFArrowControlsViewDelegate;
@class UIButton;

@interface MFArrowControlsView : UIView {

	UIButton* _upButton;
	UIButton* _downButton;
	BOOL _isShowingSmallIcons;
	id<MFArrowControlsViewDelegate> _delegate;

}

@property (assign,nonatomic) id<MFArrowControlsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIButton * downButton;                               //@synthesize downButton=_downButton - In the implementation block
@property (nonatomic,readonly) UIButton * upButton;                                 //@synthesize upButton=_upButton - In the implementation block
-(UIButton *)upButton;
-(void)_arrowButtonWasTapped:(id)arg1 ;
-(void)_updateImagesForControlHeight:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MFArrowControlsViewDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(id<MFArrowControlsViewDelegate>)delegate;
-(UIButton *)downButton;
@end

