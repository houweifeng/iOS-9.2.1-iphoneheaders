/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <UIKit/UIView.h>

@protocol ADDimmerViewDelegate;
@class ADTapGestureRecognizer;

@interface ADDimmerView : UIView {

	id<ADDimmerViewDelegate> _delegate;
	BOOL _dimmed;
	ADTapGestureRecognizer* _gestureRecognizer;

}

@property (assign,nonatomic,__weak) id<ADDimmerViewDelegate> delegate; 
@property (nonatomic,retain) ADTapGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL dimmed;                                             //@synthesize dimmed=_dimmed - In the implementation block
@property (nonatomic,readonly) BOOL enabled; 
-(BOOL)enabled;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<ADDimmerViewDelegate>)arg1 ;
-(void)dealloc;
-(id<ADDimmerViewDelegate>)delegate;
-(void)setGestureRecognizer:(ADTapGestureRecognizer *)arg1 ;
-(ADTapGestureRecognizer *)gestureRecognizer;
-(void)_tapRecognized:(id)arg1 ;
-(void)setDimmed:(BOOL)arg1 ;
-(BOOL)dimmed;
@end

