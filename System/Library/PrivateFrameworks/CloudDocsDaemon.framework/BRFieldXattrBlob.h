/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface BRFieldXattrBlob : PBCodable <NSCopying> {

	NSMutableArray* _xattrs;

}

@property (nonatomic,retain) NSMutableArray * xattrs;              //@synthesize xattrs=_xattrs - In the implementation block
+(BOOL)loadXattrsFromFD:(int)arg1 structuralBlob:(id*)arg2 contentBlob:(id*)arg3 withMaximumSize:(unsigned long long)arg4 error:(id*)arg5 ;
+(BOOL)removeXattrsOnFD:(int)arg1 includingContentRelated:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)applyToFileDescriptor:(int)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)addXattrs:(id)arg1 ;
-(unsigned long long)xattrsCount;
-(void)clearXattrs;
-(id)xattrsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)xattrs;
-(void)setXattrs:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

