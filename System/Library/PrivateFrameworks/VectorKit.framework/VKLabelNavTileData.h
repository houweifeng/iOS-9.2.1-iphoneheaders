/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class VKLabelTile, NSMapTable, NSMutableArray;

@interface VKLabelNavTileData : NSObject {

	VKLabelTile* _tile;
	NSMapTable* _geoJunctionToJunctionMap;
	NSMutableArray* _tileEdgeJunctions;
	BOOL _foundTileEdgeJunctions;
	BOOL _oppositeCarriagewayJunctionsValid;
	NSMutableArray* _oppositeCarriagewayJunctions;
	vector<LabelNavJunctionInfo, std::__1::allocator<LabelNavJunctionInfo> >* _junctionInfos;

}

@property (nonatomic,retain,readonly) VKLabelTile * tile;                                         //@synthesize tile=_tile - In the implementation block
@property (assign,nonatomic) BOOL oppositeCarriagewayJunctionsValid;                              //@synthesize oppositeCarriagewayJunctionsValid=_oppositeCarriagewayJunctionsValid - In the implementation block
@property (nonatomic,retain,readonly) NSMutableArray * oppositeCarriagewayJunctions;              //@synthesize oppositeCarriagewayJunctions=_oppositeCarriagewayJunctions - In the implementation block
-(void)dealloc;
-(void)addJunction:(id)arg1 ;
-(id)initWithTile:(id)arg1 ;
-(VKLabelTile *)tile;
-(NSMutableArray *)oppositeCarriagewayJunctions;
-(id)junctionForGeoJunction:(SCD_Struct_VK472*)arg1 ;
-(BOOL)oppositeCarriagewayJunctionsValid;
-(id)junctionAtCoordinate:(Matrix<float, 2, 1>)arg1 ;
-(void)_findTileEdgeJunctions;
-(void)setOppositeCarriagewayJunctionsValid:(BOOL)arg1 ;
-(void)appendNavJunctionsInWorldRect:(const Box<double, 2>*)arg1 junctions:(id)arg2 ;
-(void)initializeJunctionInfos;
-(void)findOppositeCarriagewayJunctionsWithRouteFeatures:(unordered_map<std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature>, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::shared_ptr<NavRoadFeature> > > >*)arg1 distanceThreshold:(double)arg2 ;
-(id)findTileEdgeJunctionAtCoordinate:(Matrix<float, 2, 1>)arg1 ;
@end
