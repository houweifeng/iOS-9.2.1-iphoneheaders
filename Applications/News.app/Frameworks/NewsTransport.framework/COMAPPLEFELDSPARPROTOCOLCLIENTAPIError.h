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

@class NSString;

@interface COMAPPLEFELDSPARPROTOCOLCLIENTAPIError : PBCodable <NSCopying> {

	NSString* _errorCode;
	NSString* _errorMessage;

}

@property (nonatomic,readonly) BOOL hasErrorCode; 
@property (nonatomic,retain) NSString * errorCode;                 //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorMessage; 
@property (nonatomic,retain) NSString * errorMessage;              //@synthesize errorMessage=_errorMessage - In the implementation block
-(BOOL)hasErrorMessage;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)errorCode;
-(void)setErrorCode:(NSString *)arg1 ;
-(BOOL)hasErrorCode;
-(void)setErrorMessage:(NSString *)arg1 ;
-(NSString *)errorMessage;
-(BOOL)readFrom:(id)arg1 ;
@end

