/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIButton.h>

@class UIView, UIImageView, NSMutableArray, NSString;

@interface CMKImageWell : UIButton {

	long long _cameraOrientation;
	UIView* __containerView;
	UIImageView* __thumbnailImageView;
	UIImageView* __maskImageView;
	NSMutableArray* __dimmingViewQueue;
	NSString* __uuid;
	UIEdgeInsets _tappableEdgeInsets;

}

@property (assign,nonatomic) long long cameraOrientation;                       //@synthesize cameraOrientation=_cameraOrientation - In the implementation block
@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;                   //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
@property (nonatomic,readonly) UIView * _containerView;                         //@synthesize _containerView=__containerView - In the implementation block
@property (nonatomic,readonly) UIImageView * _thumbnailImageView;               //@synthesize _thumbnailImageView=__thumbnailImageView - In the implementation block
@property (nonatomic,readonly) UIImageView * _maskImageView;                    //@synthesize _maskImageView=__maskImageView - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _dimmingViewQueue;              //@synthesize _dimmingViewQueue=__dimmingViewQueue - In the implementation block
@property (setter=_setUuid:,nonatomic,retain) NSString * _uuid;                 //@synthesize _uuid=__uuid - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(NSString *)_uuid;
-(CGSize)intrinsicContentSize;
-(UIView *)_containerView;
-(void)_setUuid:(id)arg1 ;
-(void)_commonCMKImageWellInitialization;
-(UIImageView *)_thumbnailImageView;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)tappableEdgeInsets;
-(void)prepareForThumbnailUpdateFromCapture;
-(void)setThumbnailImage:(id)arg1 uuid:(id)arg2 animated:(BOOL)arg3 ;
-(void)recoverFromFailedThumbnailUpdate;
-(void)setCameraOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setThumbnailImage:(id)arg1 animated:(BOOL)arg2 ;
-(id)_maskImage;
-(void)_updateThumbnailTransformFromCameraOrientation;
-(void)_removeFirstDimmingView;
-(void)_performEmitAnimationWithImage:(id)arg1 orientation:(long long)arg2 withCompletionBlock:(/*^block*/id)arg3 ;
-(CGAffineTransform)_affineTransformForImageOrientation:(long long)arg1 ;
-(void)setCameraOrientation:(long long)arg1 ;
-(long long)cameraOrientation;
-(UIImageView *)_maskImageView;
-(NSMutableArray *)_dimmingViewQueue;
@end

