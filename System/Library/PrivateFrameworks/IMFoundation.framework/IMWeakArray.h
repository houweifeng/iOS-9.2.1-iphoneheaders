/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMFoundation/IMFoundation-Structs.h>
@class NSMutableArray;

@interface IMWeakArray : NSObject {

	NSMutableArray* _weakArray;

}
-(void)removeObject:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_IM8*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(void)addObject:(id)arg1 ;
-(id)description;
-(id)copyMutableSet;
-(id)copyMutableArray;
-(void)addObjectIfNotIdenticalObjectExists:(id)arg1 ;
@end

