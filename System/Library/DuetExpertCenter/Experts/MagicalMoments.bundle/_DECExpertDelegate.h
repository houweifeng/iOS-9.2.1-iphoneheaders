/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/DuetExpertCenter/Experts/MagicalMoments.bundle/MagicalMoments
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DECExpertDelegate <NSObject>
@optional
-(void)expert:(id)arg1 prewarmPredictionForCategory:(unsigned long long)arg2 consumer:(unsigned long long)arg3;
-(id)expert:(id)arg1 predictionForCategory:(unsigned long long)arg2 consumer:(unsigned long long)arg3 limit:(unsigned long long)arg4;
-(void)expert:(id)arg1 receiveFeedback:(id)arg2 category:(unsigned long long)arg3 consumer:(unsigned long long)arg4;
-(void)trainExpert:(id)arg1;
-(id)saveModelForExpert:(id)arg1 byteLimit:(unsigned long long)arg2;
-(void)expert:(id)arg1 restoreModel:(id)arg2;

@end

