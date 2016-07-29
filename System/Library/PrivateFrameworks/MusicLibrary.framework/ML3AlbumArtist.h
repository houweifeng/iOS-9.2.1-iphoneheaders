/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/ML3Collection.h>

@interface ML3AlbumArtist : ML3Collection
+(id)propertyForMPMediaEntityProperty:(id)arg1 ;
+(id)protocolItemWithProperties:(id)arg1 inLibrary:(id)arg2 ;
+(void)initialize;
+(id)allProperties;
+(BOOL)propertyIsCountProperty:(id)arg1 ;
+(id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3 ;
+(BOOL)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned long long)arg4 usingConnection:(id)arg5 ;
+(id)predisambiguatedProperties;
+(id)sectionPropertyForProperty:(id)arg1 ;
+(id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2 ;
+(id)propertiesForGroupingKey;
+(id)propertiesForGroupingUniqueCollections;
+(id)trackForeignPersistentID;
+(long long)revisionTrackingCode;
+(id)defaultOrderingTerms;
+(id)databaseTable;
-(id)protocolItem;
-(id)multiverseIdentifier;
-(void)updateTrackValues:(id)arg1 ;
-(void)updateRepresentativeItem:(id)arg1 inLibrary:(id)arg2 ;
@end

