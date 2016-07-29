/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface BRFieldPkgItem : PBCodable <NSCopying> {

	long long _mtime;
	NSString* _path;
	NSData* _quarantineInfo;
	NSData* _signature;
	NSString* _symlinkContent;
	int _type;
	BOOL _isExecutable;
	BOOL _isWritable;
	SCD_Struct_BR9 _has;

}

@property (assign,nonatomic) int type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasPath; 
@property (nonatomic,retain) NSString * path;                        //@synthesize path=_path - In the implementation block
@property (assign,nonatomic) BOOL hasMtime; 
@property (assign,nonatomic) long long mtime;                        //@synthesize mtime=_mtime - In the implementation block
@property (assign,nonatomic) BOOL hasIsWritable; 
@property (assign,nonatomic) BOOL isWritable;                        //@synthesize isWritable=_isWritable - In the implementation block
@property (assign,nonatomic) BOOL hasIsExecutable; 
@property (assign,nonatomic) BOOL isExecutable;                      //@synthesize isExecutable=_isExecutable - In the implementation block
@property (nonatomic,readonly) BOOL hasSymlinkContent; 
@property (nonatomic,retain) NSString * symlinkContent;              //@synthesize symlinkContent=_symlinkContent - In the implementation block
@property (nonatomic,readonly) BOOL hasQuarantineInfo; 
@property (nonatomic,retain) NSData * quarantineInfo;                //@synthesize quarantineInfo=_quarantineInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasSignature; 
@property (nonatomic,retain) NSData * signature;                     //@synthesize signature=_signature - In the implementation block
-(void)clear;
-(void)updateWithPkgItem:(id)arg1 ;
-(id)initWithPkgItem:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(NSString *)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)isWritable;
-(long long)mtime;
-(BOOL)isExecutable;
-(void)setMtime:(long long)arg1 ;
-(NSData *)quarantineInfo;
-(void)setQuarantineInfo:(NSData *)arg1 ;
-(void)setSymlinkContent:(NSString *)arg1 ;
-(void)setHasMtime:(BOOL)arg1 ;
-(BOOL)hasMtime;
-(void)setIsWritable:(BOOL)arg1 ;
-(void)setHasIsWritable:(BOOL)arg1 ;
-(BOOL)hasIsWritable;
-(void)setIsExecutable:(BOOL)arg1 ;
-(void)setHasIsExecutable:(BOOL)arg1 ;
-(BOOL)hasIsExecutable;
-(BOOL)hasSymlinkContent;
-(BOOL)hasQuarantineInfo;
-(NSString *)symlinkContent;
-(void)setSignature:(NSData *)arg1 ;
-(BOOL)hasSignature;
-(NSData *)signature;
-(BOOL)readFrom:(id)arg1 ;
-(BOOL)hasPath;
@end

