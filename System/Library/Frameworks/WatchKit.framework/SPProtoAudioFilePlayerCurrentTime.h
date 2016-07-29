/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchKit/WatchKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SPProtoAudioFilePlayerCurrentTime : PBCodable <NSCopying> {

	double _currentTime;

}

@property (assign,nonatomic) double currentTime;              //@synthesize currentTime=_currentTime - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setCurrentTime:(double)arg1 ;
-(double)currentTime;
-(BOOL)readFrom:(id)arg1 ;
@end

