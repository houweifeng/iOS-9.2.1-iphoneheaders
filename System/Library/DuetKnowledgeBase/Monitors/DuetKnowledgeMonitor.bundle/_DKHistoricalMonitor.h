/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate;


@protocol _DKHistoricalMonitor <_DKMonitor>
@property (nonatomic,copy) id historicalHandler; 
@property (nonatomic,readonly) NSDate * lastUpdate; 
@required
-(id)historicalHandler;
-(void)setHistoricalHandler:(/*^block*/id)arg1;
-(void)update;
-(NSDate *)lastUpdate;

@end

