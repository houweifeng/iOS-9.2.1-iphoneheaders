/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray, NSMutableDictionary;

@interface AutoFetchCreateJobListPrivate : NSObject {

	NSMutableArray* _jobList;
	NSArray* _visibleUids;
	NSArray* _accounts;
	NSMutableDictionary* _accountResponsiveness;
	BOOL _isUserRequested;
	BOOL _isForegroundRequest;
	BOOL _shouldGrowFetchWindow;

}

@property (nonatomic,readonly) NSArray * jobList;              //@synthesize jobList=_jobList - In the implementation block
-(id)initForVisibleUids:(id)arg1 accounts:(id)arg2 accountResponsiveness:(id)arg3 fetchType:(int)arg4 ;
-(NSArray *)jobList;
-(void)dealloc;
-(void)run;
@end

