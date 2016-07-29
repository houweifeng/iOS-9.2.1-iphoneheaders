/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapEdgeFinder.h>

@interface GEOMapEdgeTransitFinder : GEOMapEdgeFinder {

	unordered_set<geo::TransitEdgePiece, std::__1::hash<geo::TransitEdgePiece>, std::__1::equal_to<geo::TransitEdgePiece>, std::__1::allocator<geo::TransitEdgePiece> >* _piecesConsidered;

}
-(BOOL)_checkEdgeForDuplicates:(const shared_ptr<geo::MapEdge>*)arg1 ;
-(id)initWithMap:(id)arg1 center:(SCD_Struct_GE16)arg2 radius:(double)arg3 ;
-(void)_buildersInTile:(id)arg1 localPoint:(const Matrix<float, 2, 1>*)arg2 localRadiusSqr:(float)arg3 localSearch:(const Box<float, 2>*)arg4 handler:(/*^block*/id)arg5 ;
@end

