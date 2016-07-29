/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBDataReader.h>

@interface SPSearchResultDeserializer : PBDataReader {

	BOOL _munmapAtDealloc;
	unsigned long long _byteVector;

}

@property (assign) unsigned long long byteVector;              //@synthesize byteVector=_byteVector - In the implementation block
@property (assign) BOOL munmapAtDealloc;                       //@synthesize munmapAtDealloc=_munmapAtDealloc - In the implementation block
-(void)dealloc;
-(unsigned long long)byteVector;
-(id)initWithMappedRegion:(unsigned long long)arg1 length:(unsigned long long)arg2 ;
-(id)initWithMallocRegion:(unsigned long long)arg1 length:(unsigned long long)arg2 ;
-(BOOL)deserializeNextSection:(id*)arg1 ;
-(BOOL)deserializeNextDomain:(unsigned*)arg1 ;
-(id)initWithSerializer:(id)arg1 ;
-(void)setByteVector:(unsigned long long)arg1 ;
-(BOOL)munmapAtDealloc;
-(void)setMunmapAtDealloc:(BOOL)arg1 ;
@end

