/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/GEOCompletionItem.h>

@class NSArray, GEOSearchCategory, NSData, GEOSuggestionEntry, NSString, GEOMapServiceTraits;

@interface _GEOSuggestionEntryCompletionItem : NSObject <GEOCompletionItem> {

	GEOSuggestionEntry* _entry;
	NSString* _query;
	int _entryListIndex;
	int _entryIndex;
	GEOMapServiceTraits* _traits;
	NSData* _completionMetaData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * displayLines; 
@property (nonatomic,readonly) id<GEOMapItem> geoMapItem; 
@property (nonatomic,readonly) GEOSearchCategory * searchCategory; 
@property (nonatomic,readonly) NSData * entryMetadata; 
@property (nonatomic,readonly) NSData * metadata; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)initWithSuggestionEntry:(id)arg1 query:(id)arg2 entryListIndex:(int)arg3 entryIndex:(int)arg4 completion:(id)arg5 traits:(id)arg6 ;
-(id)queryLine;
-(id)calloutTitle;
-(BOOL)getCoordinate:(SCD_Struct_GE16*)arg1 ;
-(void)sendFeedback;
-(id<GEOMapItem>)geoMapItem;
-(GEOSearchCategory *)searchCategory;
-(NSData *)entryMetadata;
-(NSArray *)displayLines;
-(id)highlightsForLine:(unsigned long long)arg1 ;
-(NSData *)metadata;
@end

