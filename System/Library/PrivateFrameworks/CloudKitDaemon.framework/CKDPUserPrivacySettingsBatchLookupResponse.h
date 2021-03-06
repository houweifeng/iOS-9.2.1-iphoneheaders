/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:03 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPUserPrivacySettingsBatchLookupResponse : PBCodable <NSCopying> {

	NSMutableArray* _containerPrivacySettings;

}

@property (nonatomic,retain) NSMutableArray * containerPrivacySettings;              //@synthesize containerPrivacySettings=_containerPrivacySettings - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)containerPrivacySettings;
-(void)addContainerPrivacySettings:(id)arg1 ;
-(unsigned long long)containerPrivacySettingsCount;
-(void)clearContainerPrivacySettings;
-(id)containerPrivacySettingsAtIndex:(unsigned long long)arg1 ;
-(void)setContainerPrivacySettings:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

