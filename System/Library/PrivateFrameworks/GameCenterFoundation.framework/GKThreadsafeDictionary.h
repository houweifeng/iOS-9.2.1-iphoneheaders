/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface GKThreadsafeDictionary : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _dictionary;

}

@property (nonatomic,retain) NSMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
-(void)dealloc;
-(void)removeAllObjects;
-(id)description;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(NSMutableDictionary *)dictionary;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allKeys;
-(id)allObjects;
-(id)initWithName:(id)arg1 ;
-(void)setDictionary:(NSMutableDictionary *)arg1 ;
-(void)writeToDictionary:(/*^block*/id)arg1 ;
-(void)readFromDictionary:(/*^block*/id)arg1 ;
-(id)objectForKeyWillReplace:(id)arg1 objectProducerBlock:(/*^block*/id)arg2 ;
-(id)objectForKey:(id)arg1 objectProducerBlock:(/*^block*/id)arg2 ;
@end

