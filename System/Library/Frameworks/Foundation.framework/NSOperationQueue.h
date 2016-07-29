/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface NSOperationQueue : NSObject {

	id _private;
	void* _reserved;

}

@property (copy,readonly) NSArray * operations; 
@property (readonly) unsigned long long operationCount; 
@property (assign) long long maxConcurrentOperationCount; 
@property (getter=isSuspended) BOOL suspended; 
@property (copy) NSString * name; 
@property (assign) long long qualityOfService; 
@property (assign) NSObject*<OS_dispatch_queue> underlyingQueue; 
+(id)currentQueue;
+(id)mainQueue;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(id)existingOperationToDeleteRecordID:(id)arg1 ;
-(id)existingOperationToFetchRecordID:(id)arg1 ;
-(id)existingOperationToSaveRecordID:(id)arg1 ;
-(BOOL)containsOperationToDeleteRecordID:(id)arg1 ;
-(BOOL)containsOperationToFetchRecordID:(id)arg1 ;
-(BOOL)containsOperationToSaveRecordID:(id)arg1 ;
-(id)__;
-(long long)qualityOfService;
-(long long)maxConcurrentOperationCount;
-(BOOL)overcommitsOperations;
-(void)setOvercommitsOperations:(BOOL)arg1 ;
-(BOOL)isSuspended;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setMaxConcurrentOperationCount:(long long)arg1 ;
-(void)setUnderlyingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(void)addOperationWithBlock:(/*^block*/id)arg1 ;
-(void)cancelAllOperations;
-(void)addOperation:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)underlyingQueue;
-(void)waitUntilAllOperationsAreFinished;
-(NSArray *)operations;
-(unsigned long long)operationCount;
-(void)setSuspended:(BOOL)arg1 ;
-(void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2 ;
@end
