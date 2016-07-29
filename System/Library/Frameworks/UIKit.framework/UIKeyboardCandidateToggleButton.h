/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIButton.h>

@class NSString, UIKBThemedView;

@interface UIKeyboardCandidateToggleButton : UIButton {

	NSString* _arrowDirection;
	UIKBThemedView* _themedView;

}

@property (nonatomic,copy) NSString * arrowDirection;                  //@synthesize arrowDirection=_arrowDirection - In the implementation block
@property (nonatomic,retain) UIKBThemedView * themedView;              //@synthesize themedView=_themedView - In the implementation block
+(id)arrowImageName;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)_setRenderConfig:(id)arg1 ;
-(void)setThemedView:(UIKBThemedView *)arg1 ;
-(UIKBThemedView *)themedView;
-(NSString *)arrowDirection;
-(void)setArrowDirection:(NSString *)arg1 ;
-(void)setArrowColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(CGRect)labelFrameFromFrame:(CGRect)arg1 ;
-(void)updateArrow;
-(id)arrowColorForState:(unsigned long long)arg1 ;
@end

