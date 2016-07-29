/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:58 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMFoundation/IMFoundation-Structs.h>
@class NSMutableDictionary;

@interface IMWeakObjectCache : NSObject {

	NSMutableDictionary* _weakObjectCache;
	opaque_pthread_mutex_t _tableLock;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(id)copyObjectForKey:(id)arg1 ;
-(id)copyOrSetObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeObject:(id)arg1 key:(id)arg2 ;
@end

