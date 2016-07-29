/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UISlider.h>

@class NSArray, AVLoadedTimeRangesView, UIImageView, AVRateBubbleView, NSString;

@interface AVScrubber : UISlider {

	NSArray* _loadedTimeRanges;
	AVLoadedTimeRangesView* _loadedTimeRangesMaxTrackView;
	UIImageView* _thumbView;
	double _touchLocationOffsetFromThumbViewCenter;
	double _beginTouchLocationInViewY;
	AVRateBubbleView* _rateBubbleView;
	float _rate;
	long long _scrubbingSpeed;

}

@property (nonatomic,retain) NSArray * loadedTimeRanges; 
@property (getter=isPreciseScrubbingFeasible,nonatomic,readonly) BOOL preciseScrubbingFeasible; 
@property (nonatomic,readonly) NSString * localizedScrubbingSpeedName; 
@property (assign,nonatomic) float rate;                                                                     //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) long long scrubbingSpeed;                                                       //@synthesize scrubbingSpeed=_scrubbingSpeed - In the implementation block
+(id)keyPathsForValuesAffectingPreciseScrubbingFeasible;
+(id)keyPathsForValuesAffectingLocalizedScrubbingSpeedName;
-(void)setLoadedTimeRanges:(NSArray *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)createThumbView;
-(void)_layoutSubviewsForBoundsChange:(BOOL)arg1 ;
-(void)_initSubviews;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSArray *)loadedTimeRanges;
-(BOOL)isPreciseScrubbingFeasible;
-(NSString *)localizedScrubbingSpeedName;
-(long long)scrubbingSpeed;
-(void)setScrubbingSpeed:(long long)arg1 ;
-(void)setRate:(float)arg1 ;
-(float)rate;
@end

