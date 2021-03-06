/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Search/SPSection.h>
#import <libobjc.A.dylib/PRSTwitterSection.h>

@class NSString, PRSImage, NSArray, NSURL;

@interface SPTwitterSection : SPSection <PRSTwitterSection>

@property (nonatomic,retain) NSString * type; 
@property (nonatomic,retain) NSURL * url; 
@property (nonatomic,retain) NSURL * attribution_url; 
@property (assign,nonatomic) BOOL hide_divider; 
@property (assign,nonatomic) BOOL card_padding_bottom; 
@property (assign,nonatomic) BOOL card_padding_top; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,retain) PRSImage * thumbnail; 
@property (nonatomic,retain) PRSImage * image; 
@property (nonatomic,retain) PRSImage * title_glyph; 
@property (nonatomic,retain) NSArray * formatted_text; 
@property (nonatomic,retain) NSString * formatted_text_delimiter; 
@property (nonatomic,copy) NSString * date; 
@property (nonatomic,copy) NSString * footnote; 
@end

