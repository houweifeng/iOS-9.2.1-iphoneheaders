/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCObject.h>

@class MCContainerEffect, NSArray, NSAttributedString;

@interface MCText : MCObject {

	unsigned long long mIndex;
	MCContainerEffect* mContainer;
	NSArray* mStringAttributes;

}

@property (assign,nonatomic) unsigned long long index; 
@property (copy) NSAttributedString * attributedString; 
@property (retain) NSArray * stringAttributes; 
@property (assign) MCContainerEffect * container; 
-(void)demolish;
-(id)initWithImprint:(id)arg1 andMontage:(id)arg2 ;
-(NSArray *)stringAttributes;
-(id)attributedStringWithCTAttributes;
-(void)setStringAttributes:(NSArray *)arg1 ;
-(MCContainerEffect *)container;
-(void)setContainer:(MCContainerEffect *)arg1 ;
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(NSAttributedString *)attributedString;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(id)imprint;
@end

