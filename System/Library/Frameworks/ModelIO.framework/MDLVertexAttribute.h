/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MDLVertexAttribute : NSObject <NSCopying> {

	NSString* _name;
	unsigned long long _offset;
	unsigned long long _bufferIndex;
	unsigned long long _format;
	 _initializationValue;

}

@property (nonatomic,copy) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long format;                   //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) unsigned long long offset;                   //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned long long bufferIndex;              //@synthesize bufferIndex=_bufferIndex - In the implementation block
@property (assign,nonatomic)  initializationValue;                        //@synthesize initializationValue=_initializationValue - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOffset:(unsigned long long)arg1 ;
-(unsigned long long)offset;
-(id)initWithName:(id)arg1 format:(unsigned long long)arg2 offset:(unsigned long long)arg3 bufferIndex:(unsigned long long)arg4 ;
-()initializationValue;
-(void)setInitializationValue:;
-(unsigned long long)format;
-(void)setFormat:(unsigned long long)arg1 ;
-(void)setBufferIndex:(unsigned long long)arg1 ;
-(unsigned long long)bufferIndex;
@end

