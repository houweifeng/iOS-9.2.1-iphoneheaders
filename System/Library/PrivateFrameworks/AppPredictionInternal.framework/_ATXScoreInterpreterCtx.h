/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSMutableDictionary;

@interface _ATXScoreInterpreterCtx : NSObject {

	int stackLen;
	double stack[500];
	NSDictionary* inputScores;
	NSMutableDictionary* subscores;

}
-(id)initWithInputScores:(id)arg1 subscoreKeys:(id)arg2 ;
@end

