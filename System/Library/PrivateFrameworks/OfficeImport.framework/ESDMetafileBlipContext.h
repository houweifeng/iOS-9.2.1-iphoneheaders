/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/ESDBlipContext.h>

@interface ESDMetafileBlipContext : ESDBlipContext {

	unsigned mCb;
	unsigned defaultHeaderSize;

}

@property (assign) unsigned defaultHeaderSize; 
-(BOOL)loadDelayedNode:(id)arg1 ;
-(id)initWithOffset:(unsigned)arg1 byteCount:(unsigned)arg2 uncompressed:(unsigned)arg3 stream:(SsrwOOStream*)arg4 streamID:(unsigned)arg5 ;
-(void)setDefaultHeaderSize:(unsigned)arg1 ;
-(unsigned)defaultHeaderSize;
@end

