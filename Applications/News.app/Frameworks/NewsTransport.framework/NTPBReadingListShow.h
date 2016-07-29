/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBReadingListShow : PBCodable <NSCopying> {

	int _userAction;
	SCD_Struct_NT4 _has;

}

@property (assign,nonatomic) BOOL hasUserAction; 
@property (assign,nonatomic) int userAction;                  //@synthesize userAction=_userAction - In the implementation block
-(int)userAction;
-(void)setUserAction:(int)arg1 ;
-(void)setHasUserAction:(BOOL)arg1 ;
-(BOOL)hasUserAction;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
@end

