/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreBookkeeper/StoreBookkeeper-Structs.h>
@class NSMutableData;

@interface SBKZipDeflateMemoryOutputStream : NSObject {

	NSMutableData* deflatedData;
	z_stream_s* zstream;
	char* _outputBuffer;
	int _bufferingSize;

}
+(id)dataByDeflatingData:(id)arg1 ;
-(void)dealloc;
-(id)close;
-(id)initWithBufferingSize:(int)arg1 compressionType:(unsigned long long)arg2 ;
-(BOOL)writeBuffer:(const char*)arg1 size:(unsigned long long)arg2 ;
@end

