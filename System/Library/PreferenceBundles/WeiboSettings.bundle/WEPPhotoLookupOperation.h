/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/WeiboSettings.bundle/WeiboSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class ACAccount, ACAccountStore;

@interface WEPPhotoLookupOperation : NSOperation {

	int _recordID;
	ACAccount* _account;
	ACAccountStore* _store;
	BOOL _isExecuting;
	BOOL _isFinished;

}
-(id)initWithRecordID:(int)arg1 account:(id)arg2 store:(id)arg3 ;
-(BOOL)isConcurrent;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
@end

