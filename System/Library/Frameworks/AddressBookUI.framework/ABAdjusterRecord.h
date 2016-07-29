/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIScrollView, NSTimer;

@interface ABAdjusterRecord : NSObject {

	UIScrollView* _scrollView;
	double _adjustment;
	BOOL _manuallyAdjusted;
	NSTimer* _delayedScrollTimer;

}

@property (nonatomic,retain) UIScrollView * scrollView;                 //@synthesize scrollView=_scrollView - In the implementation block
@property (assign,nonatomic) double adjustment;                         //@synthesize adjustment=_adjustment - In the implementation block
@property (assign,nonatomic) BOOL manuallyAdjusted;                     //@synthesize manuallyAdjusted=_manuallyAdjusted - In the implementation block
@property (nonatomic,retain) NSTimer * delayedScrollTimer;              //@synthesize delayedScrollTimer=_delayedScrollTimer - In the implementation block
+(id)recordWithScrollView:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)setDelayedScrollTimer:(NSTimer *)arg1 ;
-(NSTimer *)delayedScrollTimer;
-(double)adjustment;
-(void)setAdjustment:(double)arg1 ;
-(void)setManuallyAdjusted:(BOOL)arg1 ;
-(void)_adjustTableForKeyboardInfo:(id)arg1 ;
-(void)cancelDelayedAdjustments;
-(BOOL)manuallyAdjusted;
@end

