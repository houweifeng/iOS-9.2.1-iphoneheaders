/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <System/System-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class UIButton, NSString;

@interface SiriPronunciationItemCell : SiriUIContentCollectionViewCell {

	UIButton* _playButton;
	UIButton* _confirmButton;
	BOOL _showingPlaying;
	/*^block*/id _playHandler;
	/*^block*/id _confirmHandler;

}

@property (assign,nonatomic) BOOL showingPlaying;                //@synthesize showingPlaying=_showingPlaying - In the implementation block
@property (nonatomic,copy) NSString * playTitle; 
@property (nonatomic,copy) NSString * confirmTitle; 
@property (nonatomic,copy) id playHandler;                       //@synthesize playHandler=_playHandler - In the implementation block
@property (nonatomic,copy) id confirmHandler;                    //@synthesize confirmHandler=_confirmHandler - In the implementation block
+(id)_buttonStopImage;
+(id)_buttonPlayImage;
+(id)_flatImageFromSnippetBundleNamed:(id)arg1 ;
+(double)defaultCellHeight;
-(void)setShowingPlaying:(BOOL)arg1 ;
-(void)_confirmButtonTapped:(id)arg1 ;
-(void)setConfirmHandler:(id)arg1 ;
-(void)setConfirmTitle:(NSString *)arg1 ;
-(BOOL)showingPlaying;
-(void)setPlayTitle:(NSString *)arg1 ;
-(void)setPlayHandler:(id)arg1 ;
-(id)playHandler;
-(NSString *)playTitle;
-(NSString *)confirmTitle;
-(id)confirmHandler;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)_playButtonTapped:(id)arg1 ;
@end

