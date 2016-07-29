/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomAnalytics/Process.h>

@class NSSet, NSOrderedSet, AppCalendarUsage;

@interface App : Process

@property (nonatomic,retain) NSSet * hasAppRun; 
@property (nonatomic,retain) NSOrderedSet * hasTypicalUsage; 
@property (nonatomic,retain) NSSet * hasCalendarUsage; 
@property (nonatomic,retain) AppCalendarUsage * hintCalendarUsage; 
-(void)insertObject:(id)arg1 inHasTypicalUsageAtIndex:(unsigned long long)arg2 ;
@end

