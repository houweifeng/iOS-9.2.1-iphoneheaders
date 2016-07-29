/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsDataClassMigrator/HistoryItem.h>

@class SearchResult, NSString;

@interface CoreRoutineHistoryItem : NSObject <HistoryItem> {

	SearchResult* _searchResult;
	long long _locationOfInterestType;

}

@property (nonatomic,retain) SearchResult * searchResult;                   //@synthesize searchResult=_searchResult - In the implementation block
@property (assign,nonatomic) long long locationOfInterestType;              //@synthesize locationOfInterestType=_locationOfInterestType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLocationOfInterestType:(long long)arg1 ;
-(id)initWithSearchResult:(id)arg1 andLocationOfInterestType:(long long)arg2 ;
-(double)timestamp;
-(long long)type;
-(SearchResult *)searchResult;
-(void)setSearchResult:(SearchResult *)arg1 ;
-(long long)locationOfInterestType;
@end

