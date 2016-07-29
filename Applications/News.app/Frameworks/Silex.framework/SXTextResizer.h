/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Silex/Silex-Structs.h>
@class SXColumnLayout, SXComponentTextStyle;

@interface SXTextResizer : NSObject {

	SXColumnLayout* _columnLayout;
	SXComponentTextStyle* _defaultTextStyle;
	NSRange _layoutColumnRange;

}

@property (nonatomic,retain) SXColumnLayout * columnLayout;                        //@synthesize columnLayout=_columnLayout - In the implementation block
@property (assign,nonatomic) NSRange layoutColumnRange;                            //@synthesize layoutColumnRange=_layoutColumnRange - In the implementation block
@property (nonatomic,retain) SXComponentTextStyle * defaultTextStyle;              //@synthesize defaultTextStyle=_defaultTextStyle - In the implementation block
-(SXColumnLayout *)columnLayout;
-(void)setColumnLayout:(SXColumnLayout *)arg1 ;
-(long long)resizeTextSize:(long long)arg1 forClassification:(id)arg2 ;
-(id)initWithColumnLayout:(id)arg1 layoutColumnRange:(NSRange)arg2 andDefaultTextStyle:(id)arg3 ;
-(unsigned long long)resizeDropCapNumberOfLines:(long long)arg1 ;
-(NSRange)layoutColumnRange;
-(void)setLayoutColumnRange:(NSRange)arg1 ;
-(void)setDefaultTextStyle:(SXComponentTextStyle *)arg1 ;
-(SXComponentTextStyle *)defaultTextStyle;
@end

