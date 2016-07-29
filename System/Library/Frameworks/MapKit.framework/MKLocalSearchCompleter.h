/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKSearchCompleter.h>

@protocol GEOMapServiceCompletionTicket, MKLocationManagerOperation;
@class NSArray, NSTimer;

@interface MKLocalSearchCompleter : MKSearchCompleter {

	double _lastRequestTime;
	BOOL _dirty;
	NSArray* _results;
	NSTimer* _timer;
	id<GEOMapServiceCompletionTicket> _ticket;
	int _source;
	id<MKLocationManagerOperation> _singleLocationUpdate;

}
-(void)cancel;
-(void)dealloc;
-(id)init;
-(int)source;
-(void)setSource:(int)arg1 ;
-(id)results;
-(void)setCategoryFilter:(id)arg1 ;
-(void)setBoundingRegion:(SCD_Struct_MK2)arg1 ;
-(void)_cancelTimer;
-(void)_fireRequest;
-(void)_handleCompletion:(id)arg1 forTicket:(id)arg2 ;
-(void)_schedulePendingRequest;
-(void)retry;
-(BOOL)resultsAreCurrent;
-(BOOL)isSearching;
-(void)_scheduleRequest;
-(void)_markDirty;
-(void)_handleError:(id)arg1 forTicket:(id)arg2 ;
-(void)setFragment:(id)arg1 ;
@end

