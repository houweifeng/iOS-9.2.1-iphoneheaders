/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSMutableSet.h>

@interface NSCFSet : NSMutableSet
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(unsigned long long)_trueCount;
-(void)removeObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS5*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(void)removeAllObjects;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(void)unionSet:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(id)objectEnumerator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(BOOL)_isDeallocating;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)_tryRetain;
-(id)member:(id)arg1 ;
-(void)setSet:(id)arg1 ;
-(void)getObjects:(id*)arg1 ;
-(void)finalize;
@end

