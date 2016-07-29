/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSUProgressStage, NSDate;

@interface TSUProgressContext : NSObject {

	TSUProgressStage* m_currentStage;
	NSDate* m_lastReportTime;
	double m_lastProgressReport;
	double m_lastOverallProgress;

}
-(void)dealloc;
-(id)init;
-(id)currentStage;
-(void)reportProgress:(double)arg1 overallProgress:(double)arg2 ;
-(void)reset;
-(void)setProgress:(double)arg1 ;
-(void)setMessage:(id)arg1 ;
-(void)removeProgressObserver:(id)arg1 ;
-(void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2 ;
-(void)advanceProgress:(double)arg1 ;
-(double)currentPosition;
-(id)addProgressObserverBlock:(/*^block*/id)arg1 ;
-(void)createStageWithSteps:(double)arg1 ;
-(void)nextSubStageWillTakeThisManyOfMySteps:(double)arg1 ;
-(void)endStage;
-(void)setPercentageProgressFromTCProgressContext:(double)arg1 ;
-(double)overallProgress;
-(void)addProgressObserver:(id)arg1 selector:(SEL)arg2 ;
@end

