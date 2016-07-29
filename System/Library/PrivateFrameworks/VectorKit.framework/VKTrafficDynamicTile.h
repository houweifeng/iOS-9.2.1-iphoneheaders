/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTile.h>

@interface VKTrafficDynamicTile : VKTile {

	GEOTileKey _downloadKey;
	shared_ptr<zilch::TrafficDynamicTile>* _tile;
	unordered_multimap<long long, const zilch::TrafficDynamicTile::Flow *, std::__1::hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, const zilch::TrafficDynamicTile::Flow *> > >* _flows;

}

@property (nonatomic,readonly) long long updateTime; 
@property (nonatomic,readonly) unsigned long long incidentCount; 
-(void)dealloc;
-(long long)updateTime;
-(const Incident*)incidentAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)incidentCount;
-(int)flowForRoadId:(long long)arg1 buffer:(const Flow*)arg2 maxSize:(int)arg3 ;
-(id)initWithKey:(const VKTileKey*)arg1 downloadKey:(const GEOTileKey*)arg2 data:(id)arg3 ;
@end

