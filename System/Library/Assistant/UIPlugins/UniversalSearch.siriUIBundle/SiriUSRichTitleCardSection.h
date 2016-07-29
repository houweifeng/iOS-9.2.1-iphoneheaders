/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/UniversalSearch.siriUIBundle/UniversalSearch
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UniversalSearch/SiriUSTitleCardSection.h>
#import <UniversalSearch/SearchUIRichTitleCardSection.h>

@class NSString, UIImage, NSURL, NSArray;

@interface SiriUSRichTitleCardSection : SiriUSTitleCardSection <SearchUIRichTitleCardSection> {

	BOOL _centered;
	NSString* _subtitle;
	NSString* _contentRatingText;
	UIImage* _titleImage;

}

@property (nonatomic,copy) NSString * subtitle;                                    //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * contentRatingText;                           //@synthesize contentRatingText=_contentRatingText - In the implementation block
@property (nonatomic,retain) UIImage * titleImage;                                 //@synthesize titleImage=_titleImage - In the implementation block
@property (assign,nonatomic) BOOL centered;                                        //@synthesize centered=_centered - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * type; 
@property (nonatomic,copy,readonly) NSURL * url; 
@property (nonatomic,readonly) BOOL hideDivider; 
@property (nonatomic,readonly) BOOL hasTopPadding; 
@property (nonatomic,readonly) BOOL hasBottomPadding; 
@property (nonatomic,readonly) NSString * punchoutPickerLabel; 
@property (nonatomic,readonly) NSString * punchoutPickerDismissLabel; 
@property (nonatomic,readonly) NSArray * punchoutOptions; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,readonly) BOOL shouldCropImageToCircle; 
-(NSString *)type;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setCentered:(BOOL)arg1 ;
-(NSString *)contentRatingText;
-(void)setContentRatingText:(NSString *)arg1 ;
-(UIImage *)titleImage;
-(void)setTitleImage:(UIImage *)arg1 ;
-(BOOL)centered;
@end

