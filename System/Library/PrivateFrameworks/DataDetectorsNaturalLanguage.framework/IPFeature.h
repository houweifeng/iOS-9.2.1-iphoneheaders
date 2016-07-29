/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DataDetectorsNaturalLanguage/DataDetectorsNaturalLanguage-Structs.h>
@class NSString;

@interface IPFeature : NSObject {

	double _confidence;
	double _weight;
	NSString* _textUnit;
	NSRange _matchRange;

}

@property (assign) double confidence;               //@synthesize confidence=_confidence - In the implementation block
@property (assign) double weight;                   //@synthesize weight=_weight - In the implementation block
@property (assign) NSRange matchRange;              //@synthesize matchRange=_matchRange - In the implementation block
@property (copy) NSString * textUnit;               //@synthesize textUnit=_textUnit - In the implementation block
-(id)description;
-(double)weight;
-(void)setWeight:(double)arg1 ;
-(double)confidence;
-(void)setConfidence:(double)arg1 ;
-(void)setTextUnit:(NSString *)arg1 ;
-(NSRange)matchRange;
-(id)matchString;
-(void)setMatchRange:(NSRange)arg1 ;
-(NSString *)textUnit;
@end

