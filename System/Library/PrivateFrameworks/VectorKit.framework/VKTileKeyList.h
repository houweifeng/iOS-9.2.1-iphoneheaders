/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VKTileKeyMap;

@interface VKTileKeyList : NSObject <NSFastEnumeration, NSCopying> {

	void* _head;
	void* _tail;
	VKTileKeyMap* _map;
	unsigned long long _count;
	unsigned long long _maxCount;

}
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_VK63*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addKey:(const VKTileKey*)arg1 ;
-(unsigned long long)capacity;
-(BOOL)removeKey:(const VKTileKey*)arg1 ;
-(id)initWithMaxCapacity:(unsigned long long)arg1 ;
-(void)removeKeysMatchingPredicate:(/*^block*/id)arg1 ;
-(void)_addKeyToBack:(const VKTileKey*)arg1 ;
-(BOOL)addKey:(const VKTileKey*)arg1 lostKey:(VKTileKey*)arg2 ;
-(id)copyWithMaxCapacity:(unsigned long long)arg1 ;
-(VKTileKey*)firstKey;
-(id)listWithout:(id)arg1 ;
-(void)sort:(/*^block*/id)arg1 ;
-(BOOL)isEqualToList:(id)arg1 ;
-(BOOL)containsKey:(const VKTileKey*)arg1 ;
@end

