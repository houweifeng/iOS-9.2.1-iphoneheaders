/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOTransitSystem;
@class MKMapItem, NSString, MKTransitDeparturesPagingFilter, NSArray, NSMapTable, NSDate, NSSet;

@interface MKTransitDeparturesSectionController : NSObject {

	MKMapItem* _mapItem;
	NSString* _direction;
	BOOL _limitNumCellsOnly;
	MKTransitDeparturesPagingFilter* _pagingFilter;
	NSArray* _sequences;
	NSMapTable* _sequencesToInclude;
	unsigned long long _numberOfRows;
	BOOL _needsBuildRows;
	id<GEOTransitSystem> _system;
	NSDate* _departureCutoffDate;
	NSDate* _expiredHighFrequencyCutoffDate;
	NSSet* _linesToExclude;
	unsigned long long _numberOfFilteredLines;
	unsigned long long _numberOfFilteredRows;

}

@property (nonatomic,retain) id<GEOTransitSystem> system;                                      //@synthesize system=_system - In the implementation block
@property (nonatomic,retain) NSDate * departureCutoffDate;                                     //@synthesize departureCutoffDate=_departureCutoffDate - In the implementation block
@property (nonatomic,retain) NSDate * expiredHighFrequencyCutoffDate;                          //@synthesize expiredHighFrequencyCutoffDate=_expiredHighFrequencyCutoffDate - In the implementation block
@property (nonatomic,retain) NSSet * linesToExclude;                                           //@synthesize linesToExclude=_linesToExclude - In the implementation block
@property (nonatomic,readonly) BOOL showOperatingHours; 
@property (nonatomic,readonly) unsigned long long numberOfFilteredRows;                        //@synthesize numberOfFilteredRows=_numberOfFilteredRows - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfFilteredLines;                       //@synthesize numberOfFilteredLines=_numberOfFilteredLines - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfAdditionalCellsPerPage; 
-(id)init;
-(unsigned long long)numberOfRows;
-(id<GEOTransitSystem>)system;
-(NSSet *)linesToExclude;
-(void)setDepartureCutoffDate:(NSDate *)arg1 ;
-(void)setSystem:(id<GEOTransitSystem>)arg1 ;
-(id)sequences;
-(BOOL)_needsBuildRows;
-(void)setExpiredHighFrequencyCutoffDate:(NSDate *)arg1 ;
-(BOOL)showOperatingHours;
-(void)setLinesToExclude:(NSSet *)arg1 ;
-(id)initWithMapItem:(id)arg1 system:(id)arg2 direction:(id)arg3 limitNumCellsOnly:(BOOL)arg4 ;
-(void)incrementPagingFilter;
-(NSDate *)departureCutoffDate;
-(id)sequenceForRow:(long long)arg1 outDepartureIndex:(unsigned long long*)arg2 outIsNewLine:(out BOOL*)arg3 outNextLineIsSame:(out BOOL*)arg4 ;
-(NSDate *)expiredHighFrequencyCutoffDate;
-(void)_buildRows;
-(void)_setNeedsBuildRows;
-(unsigned long long)numberOfFilteredLines;
-(BOOL)hasFilteredRows;
-(unsigned long long)numberOfAdditionalCellsPerPage;
-(unsigned long long)numberOfFilteredRows;
-(BOOL)hasFilteredLines;
@end

