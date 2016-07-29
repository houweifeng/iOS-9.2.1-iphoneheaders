/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVScheduleResponseItem : CoreDAVItem {

	NSMutableSet* _responses;
	NSMutableSet* _successfulICS;
	NSMutableSet* _failedResponseItems;

}

@property (nonatomic,retain) NSMutableSet * responses;                        //@synthesize responses=_responses - In the implementation block
@property (nonatomic,retain) NSMutableSet * successfulICS;                    //@synthesize successfulICS=_successfulICS - In the implementation block
@property (nonatomic,retain) NSMutableSet * failedResponseItems;              //@synthesize failedResponseItems=_failedResponseItems - In the implementation block
-(id)description;
-(NSMutableSet *)responses;
-(void)setResponses:(NSMutableSet *)arg1 ;
-(id)copyParseRules;
-(void)addNewTopLevelItem:(id)arg1 ;
-(NSMutableSet *)successfulICS;
-(void)setSuccessfulICS:(NSMutableSet *)arg1 ;
-(NSMutableSet *)failedResponseItems;
-(void)setFailedResponseItems:(NSMutableSet *)arg1 ;
@end

