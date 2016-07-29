/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

@interface MFMessageContentProgressLayer : UIView {

	UIActivityIndicatorView* _progressIndicator;
	UILabel* _loadingText;
	UIEdgeInsets _edgeInsets;

}

@property (assign,nonatomic) UIEdgeInsets edgeInsets;              //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UIEdgeInsets)edgeInsets;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
@end

