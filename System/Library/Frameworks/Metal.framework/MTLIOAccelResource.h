/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/MTLResourceSPI.h>

@class MTLResourceAllocationInfo, NSString;

@interface MTLIOAccelResource : NSObject <MTLResourceSPI> {

	MTLIOAccelResource* _res;
	MTLIOAccelResource* next;
	MTLIOAccelResource* prev;
	unsigned long long uniqueId;

}

@property (readonly) IOAccelResourceRef resourceRef; 
@property (nonatomic,readonly) void* virtualAddress; 
@property (nonatomic,readonly) unsigned long long gpuAddress; 
@property (nonatomic,readonly) unsigned resourceID; 
@property (nonatomic,readonly) unsigned resourceSize; 
@property (readonly) unsigned long long cpuCacheMode; 
@property (readonly) unsigned long long storageMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (assign) int responsibleProcess; 
@property (readonly) MTLResourceAllocationInfo * sharedAllocationInfo; 
@property (readonly) MTLResourceAllocationInfo * cachedAllocationInfo; 
-(void)setAllocationInfoShared:(id)arg1 andCached:(id)arg2 ;
-(void*)virtualAddress;
-(id)initWithDevice:(id)arg1 options:(unsigned long long)arg2 args:(IOAccelNewResourceArgs*)arg3 argsSize:(unsigned)arg4 ;
-(void)annotateResource:(CFDictionaryRef)arg1 ;
-(CFArrayRef)copyAnnotations;
-(CFDictionaryRef)copyAnnotationDictionary:(unsigned long long)arg1 obj_key_name:(CFStringRef)arg2 obj_dict:(CFDictionaryRef)arg3 ;
-(BOOL)isPurgeable;
-(int)responsibleProcess;
-(void)setResponsibleProcess:(int)arg1 ;
-(MTLResourceAllocationInfo *)sharedAllocationInfo;
-(MTLResourceAllocationInfo *)cachedAllocationInfo;
-(IOAccelResourceRef)resourceRef;
-(id)initWithDevice:(id)arg1 resource:(id)arg2 ;
-(unsigned long long)gpuAddress;
-(unsigned)resourceSize;
-(void)dealloc;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(unsigned)resourceID;
-(id)initWithResource:(id)arg1 ;
-(unsigned long long)setPurgeableState:(unsigned long long)arg1 ;
-(unsigned long long)cpuCacheMode;
-(unsigned long long)storageMode;
-(id<MTLDevice>)device;
@end

