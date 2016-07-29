/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSArray;

@interface HMThreadSafeMutableArrayCollection : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableArray* _mutableArray;

}

@property (nonatomic,copy,readonly) NSArray * array; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,copy,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,copy,readonly) NSMutableArray * mutableArray;                           //@synthesize mutableArray=_mutableArray - In the implementation block
+(id)array;
+(id)arrayWithArray:(id)arg1 ;
-(NSMutableArray *)mutableArray;
-(void)removeObject:(id)arg1 ;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(NSArray *)array;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(void)setArray:(NSArray *)arg1 ;
-(id)filteredArrayUsingPredicate:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
@end

