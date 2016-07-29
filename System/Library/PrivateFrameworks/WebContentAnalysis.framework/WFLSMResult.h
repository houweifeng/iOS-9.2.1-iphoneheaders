/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebContentAnalysis/WebContentAnalysis-Structs.h>
@class NSMutableArray, NSNumber;

@interface WFLSMResult : NSObject {

	NSMutableArray* categoryJudgements;
	NSNumber* threshold;

}

@property (copy) NSNumber * threshold; 
+(id)LSMResultWithLSMResultRef:(LSMResultRef)arg1 threshold:(id)arg2 ;
+(id)extractScoresFromLSMResults:(LSMResultRef)arg1 ;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(long long)numberOfCategories;
-(BOOL)isRestricted;
-(id)initWithLSMResultRef:(LSMResultRef)arg1 threshold:(id)arg2 ;
-(long long)bestMatchingCategory;
-(float)scoreForCategory:(long long)arg1 ;
-(void)setScore:(float)arg1 forCategory:(long long)arg2 ;
-(void)setThreshold:(NSNumber *)arg1 ;
-(NSNumber *)threshold;
@end

