/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHUnretainedParent.h>

@class TSCH3DTSPImageDataTexture, TSPData;

@interface TSCH3DTSPImageData : NSObject <TSCHUnretainedParent> {

	TSCH3DTSPImageDataTexture* mParent;
	TSPData* mData;

}

@property (nonatomic,retain) TSPData * data; 
+(id)dataWithTSPImageData:(id)arg1 ;
-(CGImageRef)newCGImage;
-(void)clearParent;
-(BOOL)hasCompleteData;
-(id)databufferForDataCache:(id)arg1 ;
-(id)initWithTSPImageData:(id)arg1 ;
-(id)p_encodeImageSize:(tvec4<int>*)arg1 andMipmapData:(id)arg2 ;
-(id)uniqueFilename;
-(id)p_generateMipmapsBuffer;
-(id)p_decodeCachedData:(id)arg1 imageSize:(tvec4<int>*)arg2 ;
-(BOOL)canLoadCachedDataForDataCache:(id)arg1 ;
-(void)dealloc;
-(TSPData *)data;
-(void)setData:(TSPData *)arg1 ;
-(void)setParent:(id)arg1 ;
@end

