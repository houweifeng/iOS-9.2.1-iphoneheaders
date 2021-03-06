/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UILabel;

@interface CMKAvalancheIndicatorView : UIView {

	BOOL _showsWhenStarted;
	UIView* __backgroundView;
	UILabel* __countLabel;
	long long __numberOfPhotos;

}

@property (assign,nonatomic) BOOL showsWhenStarted;                    //@synthesize showsWhenStarted=_showsWhenStarted - In the implementation block
@property (nonatomic,readonly) UIView * _backgroundView;               //@synthesize _backgroundView=__backgroundView - In the implementation block
@property (nonatomic,readonly) UILabel * _countLabel;                  //@synthesize _countLabel=__countLabel - In the implementation block
@property (nonatomic,readonly) long long _numberOfPhotos;              //@synthesize _numberOfPhotos=__numberOfPhotos - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(UIView *)_backgroundView;
-(void)reset;
-(CGSize)intrinsicContentSize;
-(void)_commonCMKAvalancheIndicatorViewInitialization;
-(BOOL)showsWhenStarted;
-(void)setShowsWhenStarted:(BOOL)arg1 ;
-(long long)_numberOfPhotos;
-(void)_performCaptureAnimation;
-(void)incrementWithCaptureAnimation:(BOOL)arg1 ;
-(void)finishIncrementingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_updateCountLabelWithNumberOfPhotos;
-(UILabel *)_countLabel;
@end

