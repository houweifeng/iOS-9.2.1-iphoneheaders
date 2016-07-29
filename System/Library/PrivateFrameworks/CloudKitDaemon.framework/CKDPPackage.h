/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPAsset, NSMutableArray;

@interface CKDPPackage : PBCodable <NSCopying> {

	CKDPAsset* _manifest;
	NSMutableArray* _sections;

}

@property (nonatomic,readonly) BOOL hasManifest; 
@property (nonatomic,retain) CKDPAsset * manifest;                   //@synthesize manifest=_manifest - In the implementation block
@property (nonatomic,retain) NSMutableArray * sections;              //@synthesize sections=_sections - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSections:(NSMutableArray *)arg1 ;
-(NSMutableArray *)sections;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addSections:(id)arg1 ;
-(id)sectionsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)sectionsCount;
-(void)clearSections;
-(void)setManifest:(CKDPAsset *)arg1 ;
-(BOOL)hasManifest;
-(CKDPAsset *)manifest;
-(BOOL)readFrom:(id)arg1 ;
@end

