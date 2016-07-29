/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PerformanceAnalysis/PerformanceAnalysis-Structs.h>
#import <libobjc.A.dylib/PASerializable.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSString;

@interface PAWSUpdateDataStore : NSObject <PASerializable> {

	NSMutableArray* _wsUpdateArray;
	NSObject*<OS_dispatch_queue> _wsUpdateCallbackQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)classDictionaryKey;
+(id)newInstanceWithoutReferencesFromBufferPosition:(const void*)arg1 ;
+(void)_printFrameReportExplanationToStream:(_sFILE*)arg1 ;
-(void)addSelfToSerializationDictionary:(NSMutableDictionary*)arg1 ;
-(unsigned long long)sizeInBytesForSerializedVersion;
-(BOOL)addSelfToBufferAtPosition:(void*)arg1 withCompletedSerializationDictionary:(NSMutableDictionary*)arg2 ;
-(void)populateReferencesUsingBufferPosition:(const void*)arg1 andDeserializationDictionary:(id)arg2 andDataBufferDictionary:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(id)_getWSUpdateArraySnapshot;
-(void)printFrameRateReportWithStartSampleIndex:(unsigned long long)arg1 andEndIndex:(unsigned long long)arg2 andStartDisplayIndex:(unsigned long long)arg3 withSampleDataStore:(id)arg4 toStream:(_sFILE*)arg5 ;
@end

