/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLCommandEncoder, MTLCommandQueue, MTLCommandBuffer;
#import <Metal/Metal-Structs.h>
@class _MTLCommandQueue, MTLError, NSString, NSDictionary, NSMutableDictionary, NSMutableArray, NSError;

@interface _MTLCommandBuffer : NSObject {

	id<MTLCommandEncoder> _currentCommandEncoder;
	_MTLCommandQueue*<MTLCommandQueue> _queue;
	MTLDispatch* _scheduledDispatchList;
	MTLDispatch* _completedDispatchList;
	opaque_pthread_mutex_t _mutex;
	opaque_pthread_cond_t _cond;
	unsigned long long _creationTime;
	unsigned long long _enqueueTime;
	unsigned long long _commitTime;
	unsigned long long _submitToKernelTime;
	unsigned long long _kernelScheduledTime;
	unsigned long long _submitToHardwareTime;
	unsigned long long _completionInterruptTime;
	unsigned long long _kernelCompleteTime;
	unsigned long long _completionHandlerEnqueueTime;
	unsigned long long _completionHandlerExecutionTime;
	unsigned long long _status;
	MTLError* _error;
	NSString* _label;
	BOOL _skipRender;
	BOOL _profilingEnabled;
	BOOL _scheduledCallbacksDone;
	BOOL _completedCallbacksDone;
	BOOL _strongObjectReferences;
	NSDictionary* _profilingResults;
	BOOL _retainedReferences;
	BOOL _synchronousDebugMode;
	NSMutableDictionary* _userDictionary;
	unsigned long long _numRequestedCounters;
	unsigned long long _numInternalSampleCounters;
	unsigned long long _numEncoders;
	unsigned long long _numThisCommandBuffer;
	_MTLCommandBuffer*<MTLCommandBuffer> _statCommandBuffer;
	int _sampleLock;
	BOOL _StatEnabled;
	unsigned long long _StatOptions;
	unsigned long long _StatLocations;
	unsigned long long _samplesPerStorageBlock;
	unsigned long long _totalNumStatSamples;
	NSMutableArray* _sampleStorage;
	MTLStatSampleRec* _samples;
	MTLStatSampleRec* _currentSample;
	/*^block*/id _perfSampleHandlerBlock;
	unsigned long long _globalTraceObjectID;
	unsigned long long _labelTraceID;

}

@property (readonly) BOOL retainedReferences;                                                                           //@synthesize retainedReferences=_retainedReferences - In the implementation block
@property (readonly) BOOL synchronousDebugMode;                                                                         //@synthesize synchronousDebugMode=_synchronousDebugMode - In the implementation block
@property (readonly) id<MTLCommandQueue> commandQueue;                                                                  //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long status;                                                                         //@synthesize status=_status - In the implementation block
@property (copy) NSString * label;                                                                                      //@synthesize label=_label - In the implementation block
@property (readonly) NSError * error; 
@property (getter=isProfilingEnabled) BOOL profilingEnabled; 
@property (readonly) NSDictionary * profilingResults; 
@property (readonly) unsigned long long globalTraceObjectID;                                                            //@synthesize globalTraceObjectID=_globalTraceObjectID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * userDictionary; 
@property (nonatomic,retain) _MTLCommandBuffer*<MTLCommandBuffer> statCommandBuffer;                                    //@synthesize statCommandBuffer=_statCommandBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long numThisCommandBuffer;                                                   //@synthesize numThisCommandBuffer=_numThisCommandBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long numEncoders;                                                            //@synthesize numEncoders=_numEncoders - In the implementation block
@property (assign,setter=tatEnabled,getter=isStatEnabled,nonatomic) BOOL StatEnabled;                                   //@synthesize StatEnabled=_StatEnabled - In the implementation block
@property (assign,setter=tatOptions,getter=getStatOptions,nonatomic) unsigned long long StatOptions;                    //@synthesize StatOptions=_StatOptions - In the implementation block
@property (assign,setter=tatLocations,getter=getStatLocations,nonatomic) unsigned long long StatLocations;              //@synthesize StatLocations=_StatLocations - In the implementation block
+(void)initialize;
-(id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2 synchronousDebugMode:(BOOL)arg3 ;
-(void)didCompletePreDealloc:(unsigned long long)arg1 error:(unsigned)arg2 ;
-(void)didComplete:(unsigned long long)arg1 error:(unsigned)arg2 ;
-(void)didSchedule:(unsigned long long)arg1 error:(unsigned)arg2 ;
-(unsigned long long)globalTraceObjectID;
-(BOOL)isProfilingEnabled;
-(void)commitAndReset;
-(BOOL)retainedReferences;
-(void)setCurrentCommandEncoder:(id)arg1 ;
-(id)initWithQueue:(id)arg1 retainedReferences:(BOOL)arg2 ;
-(void)addScheduledHandler:(/*^block*/id)arg1 ;
-(void)presentDrawable:(id)arg1 atTime:(double)arg2 ;
-(BOOL)isStatEnabled;
-(unsigned long long)getStatOptions;
-(unsigned long long)getStatLocations;
-(unsigned long long)getAndIncrementNumEncoders;
-(unsigned long long)numEncoders;
-(void)setNumEncoders:(unsigned long long)arg1 ;
-(unsigned long long)numThisCommandBuffer;
-(void)setNumThisCommandBuffer:(unsigned long long)arg1 ;
-(void)setStatCommandBuffer:(_MTLCommandBuffer*<MTLCommandBuffer>)arg1 ;
-(void)kernelSubmitTime;
-(void)setStatEnabled:(BOOL)arg1 ;
-(MTLStatSampleRec*)newSample;
-(void)postProcessCommandbuffer;
-(void)postProcessSamples:(MTLStatSampleRec*)arg1 toUserDst:(unsigned long long*)arg2 numSamples:(unsigned long long)arg3 ;
-(void)commitAndHold;
-(NSMutableDictionary *)userDictionary;
-(BOOL)skipRender;
-(void)setProfilingEnabled:(BOOL)arg1 ;
-(NSDictionary *)profilingResults;
-(BOOL)synchronousDebugMode;
-(_MTLCommandBuffer*<MTLCommandBuffer>)statCommandBuffer;
-(void)setStatOptions:(unsigned long long)arg1 ;
-(void)setStatLocations:(unsigned long long)arg1 ;
-(void)waitUntilScheduled;
-(void)dealloc;
-(id)description;
-(void)commit;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setCommitted:(BOOL)arg1 ;
-(BOOL)isCommitted;
-(unsigned long long)status;
-(NSError *)error;
-(void)addCompletedHandler:(/*^block*/id)arg1 ;
-(void)presentDrawable:(id)arg1 ;
-(void)waitUntilCompleted;
-(id<MTLCommandQueue>)commandQueue;
-(void)enqueue;
@end

