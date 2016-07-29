/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIFontDescriptor, UIFont;

@interface PLCommentsFontCache : NSObject {

	UIFontDescriptor* __shortCaptionFontDescriptor;
	UIFontDescriptor* __emphasizedShortCaptionFontDescriptor;
	UIFontDescriptor* __shortSubheadlineFontDescriptor;
	UIFontDescriptor* __bodyFontDescriptor;
	UIFontDescriptor* __emphasizedBodyFontDescriptor;
	UIFontDescriptor* __shortBodyFontDescriptor;

}

@property (nonatomic,readonly) UIFont * youLikeFont; 
@property (nonatomic,readonly) UIFont * likeFont; 
@property (nonatomic,readonly) UIFont * commentTextFont; 
@property (nonatomic,readonly) UIFont * commentAttributionDateFont; 
@property (nonatomic,readonly) UIFont * commentAttributionNameFont; 
@property (nonatomic,readonly) UIFont * commentEntryFont; 
@property (nonatomic,readonly) UIFont * commentSendButtonFont; 
+(id)sharedCache;
-(void)dealloc;
-(id)init;
-(void)_invalidateCache;
-(void)_contentSizesDidChange:(id)arg1 ;
-(id)_shortCaptionFontDescriptor;
-(id)_bodyFontDescriptor;
-(id)_emphasizedShortCaptionFontDescriptor;
-(id)_shortSubheadlineFontDescriptor;
-(id)_shortBodyFontDescriptor;
-(id)_emphasizedBodyFontDescriptor;
-(UIFont *)youLikeFont;
-(UIFont *)likeFont;
-(UIFont *)commentTextFont;
-(UIFont *)commentAttributionDateFont;
-(UIFont *)commentAttributionNameFont;
-(UIFont *)commentEntryFont;
-(UIFont *)commentSendButtonFont;
@end

