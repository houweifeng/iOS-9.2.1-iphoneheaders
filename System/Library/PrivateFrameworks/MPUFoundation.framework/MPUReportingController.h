/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSArray;

@interface MPUReportingController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableArray* _childReportingControllers;
	MPUReportingController* _parentReportingController;

}

@property (nonatomic,copy,readonly) NSArray * childReportingControllers; 
@property (assign,nonatomic,__weak) MPUReportingController * parentReportingController; 
-(id)init;
-(void)_recordReportingEvents:(id)arg1 ;
-(void)recordReportingEvents:(id)arg1 ;
-(void)setParentReportingController:(MPUReportingController *)arg1 ;
-(MPUReportingController *)parentReportingController;
-(NSArray *)childReportingControllers;
-(void)addChildReportingController:(id)arg1 ;
-(void)removeChildReportingController:(id)arg1 ;
@end

