/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSMutableArray;

@interface TSUAggregateEnumerator : NSEnumerator {

	NSMutableArray* _objects;

}
+(id)aggregateEnumeratorWithObjects:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)addObject:(id)arg1 ;
-(id)initWithObjects:(id)arg1 ;
-(id)nextObject;
-(id)initWithFirstObject:(id)arg1 argumentList:(char*)arg2 ;
@end

