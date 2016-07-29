/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDAutocompleteEntry, GEOPDBrowseCategory;

@interface GEOSearchCategoryStorage : PBCodable <NSCopying> {

	GEOPDAutocompleteEntry* _autocompleteEntry;
	GEOPDBrowseCategory* _browseCategory;

}

@property (nonatomic,readonly) BOOL hasBrowseCategory; 
@property (nonatomic,retain) GEOPDBrowseCategory * browseCategory;                    //@synthesize browseCategory=_browseCategory - In the implementation block
@property (nonatomic,readonly) BOOL hasAutocompleteEntry; 
@property (nonatomic,retain) GEOPDAutocompleteEntry * autocompleteEntry;              //@synthesize autocompleteEntry=_autocompleteEntry - In the implementation block
-(id)initWithSearchCategory:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(GEOPDAutocompleteEntry *)autocompleteEntry;
-(BOOL)hasAutocompleteEntry;
-(void)setAutocompleteEntry:(GEOPDAutocompleteEntry *)arg1 ;
-(void)setBrowseCategory:(GEOPDBrowseCategory *)arg1 ;
-(BOOL)hasBrowseCategory;
-(GEOPDBrowseCategory *)browseCategory;
-(BOOL)readFrom:(id)arg1 ;
@end

