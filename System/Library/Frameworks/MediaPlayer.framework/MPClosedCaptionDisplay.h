/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView;

@interface MPClosedCaptionDisplay : UIView {

	UILabel* _label;
	UIView* _backgroundView;
	BOOL _hidden;
	BOOL _rotating;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNeedsLayout;
-(void)setText:(id)arg1 ;
-(void)startLayoutChange:(BOOL)arg1 ;
-(void)endLayoutChange;
-(void)_updatePositioning:(BOOL)arg1 ;
-(void)_hidePanel;
@end

