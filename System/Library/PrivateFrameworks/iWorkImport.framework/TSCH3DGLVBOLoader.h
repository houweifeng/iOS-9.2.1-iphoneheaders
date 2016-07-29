/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DResourceLoader.h>

@interface TSCH3DGLVBOLoader : TSCH3DResourceLoader {

	unsigned mType;

}
+(id)loaderWithType:(unsigned)arg1 ;
-(void)deactivateHandle:(id)arg1 insideContext:(id)arg2 ;
-(unsigned long long)uploadDataBuffer:(id)arg1 handle:(id)arg2 insideSession:(id)arg3 config:(void*)arg4 ;
-(id)generateHandleWithConfig:(void*)arg1 ;
-(void)bindHandle:(id)arg1 config:(void*)arg2 ;
-(unsigned)usageOfResource:(id)arg1 ;
-(void)loadSingleValueInBuffer:(id)arg1 ;
-(BOOL)activateResource:(id)arg1 insideSession:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithType:(unsigned)arg1 ;
-(void)setClientState:(const DataBufferInfo*)arg1 ;
@end

