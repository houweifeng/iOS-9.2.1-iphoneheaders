/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSURetainedPointerKeyDictionary;

@interface TSTRWRetainedPointerKeyDictionary : NSObject {

	opaque_pthread_rwlock_t mRWLock;
	TSURetainedPointerKeyDictionary* mRetainedPointerKeyDictionary;

}
-(void)dealloc;
-(id)init;
-(void)removeAllObjects;
-(id)objectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

