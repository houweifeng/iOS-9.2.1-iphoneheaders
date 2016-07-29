/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKit/_UITableViewCellActionButton.h>
#import <libobjc.A.dylib/SBBulletinCellButton.h>

@class CKAudioProgressView, UILabel, NSString;

@interface CKAudioProgressTableViewActionButton : _UITableViewCellActionButton <SBBulletinCellButton> {

	CKAudioProgressView* _progressView;
	double _duration;
	double _currentProgress;
	double _lastProgress;
	UILabel* _label;

}

@property (nonatomic,retain) CKAudioProgressView * progressView;              //@synthesize progressView=_progressView - In the implementation block
@property (assign,nonatomic) double duration;                                 //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double currentProgress;                          //@synthesize currentProgress=_currentProgress - In the implementation block
@property (assign,nonatomic) double lastProgress;                             //@synthesize lastProgress=_lastProgress - In the implementation block
@property (nonatomic,retain) UILabel * label;                                 //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)removeFromSuperview;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setProgressView:(CKAudioProgressView *)arg1 ;
-(CKAudioProgressView *)progressView;
-(void)setCurrentProgress:(double)arg1 ;
-(double)currentProgress;
-(void)_updateTime:(id)arg1 ;
-(void)didFinish:(id)arg1 ;
-(void)didStop:(id)arg1 ;
-(void)setLastProgress:(double)arg1 ;
-(void)_playButtonHit:(id)arg1 ;
-(CGSize)labelSizeThatFits:(CGSize)arg1 ;
-(double)lastProgress;
@end

