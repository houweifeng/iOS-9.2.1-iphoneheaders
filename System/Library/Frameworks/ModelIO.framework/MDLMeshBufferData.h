/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/MDLMeshBuffer.h>

@protocol MDLMeshBufferAllocator;
@class MDLMeshBufferZoneDefault, NSMutableData, NSData, NSString;

@interface MDLMeshBufferData : NSObject <MDLMeshBuffer> {

	MDLMeshBufferZoneDefault* _zone;
	MDLMeshBufferZoneDefault* _zoneDefault;
	NSMutableData* _data;
	unsigned long long _length;
	id<MDLMeshBufferAllocator> _allocator;
	unsigned long long _type;

}

@property (nonatomic,retain,readonly) NSData * data; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long length; 
@property (nonatomic,retain,readonly) id<MDLMeshBufferAllocator> allocator; 
@property (nonatomic,retain,readonly) id<MDLMeshBufferZone> zone; 
@property (nonatomic,readonly) unsigned long long type; 
-(void)dealloc;
-(id<MDLMeshBufferZone>)zone;
-(unsigned long long)length;
-(unsigned long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(id)initWithType:(unsigned long long)arg1 length:(unsigned long long)arg2 ;
-(id)initWithLength:(unsigned long long)arg1 data:(id)arg2 allocator:(id)arg3 zone:(id)arg4 ;
-(id<MDLMeshBufferAllocator>)allocator;
-(void)fillData:(id)arg1 offset:(unsigned long long)arg2 ;
-(id)initWithType:(unsigned long long)arg1 data:(id)arg2 ;
-(id)map;
@end

