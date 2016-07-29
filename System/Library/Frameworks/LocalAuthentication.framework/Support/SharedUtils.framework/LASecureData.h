/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface LASecureData : NSObject {

	unsigned long long _allocatedLength;
	void* _bytes;
	unsigned long long _bytesLength;

}
+(void)resetBytes:(void*)arg1 length:(unsigned long long)arg2 ;
+(id)secureDataWithString:(id)arg1 ;
+(id)secureDataWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)length;
-(void)reset;
-(const void*)bytes;
-(void)appendString:(id)arg1 ;
-(void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithString:(id)arg1 ;
-(void)appendData:(id)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)prepareBuffer:(unsigned long long)arg1 ;
-(BOOL)removeLastCharacter;
-(void)resize:(unsigned long long)arg1 ;
@end

