/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <UIKit/UIImageView.h>

@class UILabel, NSURL;

@interface ACSportsLoadingImageView : UIImageView {

	BOOL _imageIsOfAthlete;
	UILabel* _abbreviationLabel;
	NSURL* _imageURL;
	CGSize _fitToSize;

}

@property (nonatomic,copy) NSURL * imageURL;                //@synthesize imageURL=_imageURL - In the implementation block
@property (assign,nonatomic) CGSize fitToSize;              //@synthesize fitToSize=_fitToSize - In the implementation block
-(id)_genericTeamBackgroundImage;
-(void)setImageFromAthlete:(id)arg1 ;
-(void)setImageFromTeam:(id)arg1 showAbbreviationWithPlaceholder:(BOOL)arg2 ;
-(void)setFitToSize:(CGSize)arg1 ;
-(CGSize)fitToSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
@end

