/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIPreviewAction, UILabel, UIImageView;

@interface _UIPreviewActionSheetItemView : UIView {

	BOOL _selected;
	UIPreviewAction* _action;
	UILabel* _label;
	UIImageView* _imageView;

}

@property (nonatomic,copy) UIPreviewAction * action;                      //@synthesize action=_action - In the implementation block
@property (assign,nonatomic,__weak) UILabel * label;                      //@synthesize label=_label - In the implementation block
@property (assign,nonatomic,__weak) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) BOOL selected;                               //@synthesize selected=_selected - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(UIPreviewAction *)action;
-(id)initWithFrame:(CGRect)arg1 action:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setAction:(UIPreviewAction *)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(UIImageView *)imageView;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(BOOL)selected;
-(void)_updateLabelFont;
-(void)_contentSizeChanged:(id)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)_updateTitleFromAction;
-(void)_updateImageFromAction;
-(void)_updateConstraints;
@end

