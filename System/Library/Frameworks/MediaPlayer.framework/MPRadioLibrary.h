/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPRadioController, NSArray;

@interface MPRadioLibrary : NSObject {

	MPRadioController* _radioController;

}

@property (nonatomic,readonly) BOOL isEnabled; 
@property (nonatomic,readonly) unsigned long long stationCount; 
@property (nonatomic,readonly) NSArray * stations; 
+(id)defaultRadioLibrary;
-(void)dealloc;
-(id)init;
-(BOOL)isEnabled;
-(NSArray *)stations;
-(void)getRecentStationGroupsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_radioAvailabilityDidChangeNotification:(id)arg1 ;
-(void)_radioRecentStationsDidChangeNotification:(id)arg1 ;
-(id)_radioModel;
-(unsigned long long)stationCount;
-(void)addStationBasedOnTrackIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_radioModelDidChangeNotification:(id)arg1 ;
-(id)stationWithIdentifier:(long long)arg1 ;
@end

