/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage, NSArray;

@interface SearchUITextAreaData : NSObject {

	BOOL _secondaryTitleDetached;
	NSString* _title;
	unsigned long long _titleMaxLines;
	NSString* _secondaryTitle;
	UIImage* _secondaryImage;
	UIImage* _embeddedThumbnail;
	NSArray* _richTextData;
	NSString* _footnote;

}

@property (nonatomic,copy) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) unsigned long long titleMaxLines;              //@synthesize titleMaxLines=_titleMaxLines - In the implementation block
@property (nonatomic,copy) NSString * secondaryTitle;                       //@synthesize secondaryTitle=_secondaryTitle - In the implementation block
@property (assign,nonatomic) BOOL secondaryTitleDetached;                   //@synthesize secondaryTitleDetached=_secondaryTitleDetached - In the implementation block
@property (nonatomic,retain) UIImage * secondaryImage;                      //@synthesize secondaryImage=_secondaryImage - In the implementation block
@property (nonatomic,retain) UIImage * embeddedThumbnail;                   //@synthesize embeddedThumbnail=_embeddedThumbnail - In the implementation block
@property (nonatomic,retain) NSArray * richTextData;                        //@synthesize richTextData=_richTextData - In the implementation block
@property (nonatomic,copy) NSString * footnote;                             //@synthesize footnote=_footnote - In the implementation block
+(id)embeddedThumbnailForResult:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setFootnote:(NSString *)arg1 ;
-(void)setTitleMaxLines:(unsigned long long)arg1 ;
-(NSString *)footnote;
-(NSString *)secondaryTitle;
-(unsigned long long)titleMaxLines;
-(UIImage *)secondaryImage;
-(BOOL)secondaryTitleDetached;
-(void)setSecondaryTitle:(NSString *)arg1 ;
-(id)initWithResult:(id)arg1 ;
-(void)setSecondaryTitleDetached:(BOOL)arg1 ;
-(void)setSecondaryImage:(UIImage *)arg1 ;
-(void)setEmbeddedThumbnail:(UIImage *)arg1 ;
-(void)setRichTextData:(NSArray *)arg1 ;
-(UIImage *)embeddedThumbnail;
-(NSArray *)richTextData;
@end

