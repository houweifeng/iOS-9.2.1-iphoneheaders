/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPDataCullingListener.h>

@class TSUPointerKeyDictionary, NSString;

@interface TSDImageProviderPool : NSObject <TSPDataCullingListener> {

	TSUPointerKeyDictionary* mImageDataToImageProviderMap;
	unsigned long long mOpenFileDescriptorLimit;
	BOOL mHaveRaisedFileDescriptorLimit;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)p_providerClassForData:(id)arg1 validateLength:(BOOL)arg2 ;
+(Class)p_providerClassForData:(id)arg1 ;
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedPool;
+(id)_singletonAlloc;
-(void)willCullData:(id)arg1 ;
-(void)addInterestInProviderForData:(id)arg1 ;
-(void)removeInterestInProviderForData:(id)arg1 ;
-(id)providerForData:(id)arg1 shouldValidate:(BOOL)arg2 ;
-(id)temporaryProviderForData:(id)arg1 shouldValidate:(BOOL)arg2 ;
-(void)p_updateFileDescriptorLimit;
-(void)p_didReceiveMemoryWarning:(id)arg1 ;
-(id)p_providerForData:(id)arg1 temporary:(BOOL)arg2 shouldValidate:(BOOL)arg3 ;
-(unsigned long long)p_providerLimitForFileDescriptorLimit:(unsigned long long)arg1 ;
-(void)p_freeFileDescriptorsWithProviderCount:(unsigned long long)arg1 ;
-(unsigned long long)p_removeProvidersWithZeroInterest;
-(BOOL)isBitmapData:(id)arg1 ;
-(void)willCloseDocumentContext:(id)arg1 ;
-(void)flushImageProviders;
-(void)dealloc;
-(id)init;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

