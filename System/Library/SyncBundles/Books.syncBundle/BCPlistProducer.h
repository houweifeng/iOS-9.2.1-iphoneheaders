/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:46 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/SyncBundles/Books.syncBundle/Books
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, BCLockout;

@interface BCPlistProducer : NSObject {

	NSString* _path;
	int _attemptCount;
	BOOL _dataUnchanged;
	BCLockout* _lockout;

}
-(void)fileWasModifiedDuringDataProduction;
-(id)produceData;
-(void)fileWriteFailed;
-(BOOL)write;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(BOOL)shouldRetry;
@end

