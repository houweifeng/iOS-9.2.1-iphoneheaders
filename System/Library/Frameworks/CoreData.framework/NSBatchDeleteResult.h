/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSPersistentStoreResult.h>

@interface NSBatchDeleteResult : NSPersistentStoreResult {

	id _aggregatedResult;
	unsigned long long _resultType;

}

@property (readonly) id result;                                  //@synthesize aggregatedResult=_aggregatedResult - In the implementation block
@property (readonly) unsigned long long resultType;              //@synthesize resultType=_resultType - In the implementation block
-(id)initWithSubresults:(id)arg1 ;
-(id)initWithResultType:(unsigned long long)arg1 andObject:(id)arg2 ;
-(void)dealloc;
-(id)result;
-(unsigned long long)resultType;
@end

