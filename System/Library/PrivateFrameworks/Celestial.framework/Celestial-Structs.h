/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:48 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData, BWNodeOutput, NSObject<OS_dispatch_queue>;

typedef struct OpaqueFigFormatWriter* OpaqueFigFormatWriterRef;

typedef struct OpaqueCMByteStream* OpaqueCMByteStreamRef;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_BW2;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct opaqueCMFormatDescription* opaqueCMFormatDescriptionRef;

typedef struct OpaqueCMBlockBuffer* OpaqueCMBlockBufferRef;

typedef struct _NSZone* NSZoneRef;

typedef struct OpaqueFigCaptureSession* OpaqueFigCaptureSessionRef;

typedef struct OpaqueVTPixelTransferSession* OpaqueVTPixelTransferSessionRef;

typedef struct {
	int width;
	int height;
} SCD_Struct_BW12;

typedef struct OpaqueFigCaptureDevice* OpaqueFigCaptureDeviceRef;

typedef struct OpaqueFigCaptureStream* OpaqueFigCaptureStreamRef;

typedef struct {
	double field1;
	float field2;
	float field3;
	double field4;
	float field5;
	unsigned field6;
	unsigned field7;
	unsigned field8;
	unsigned field9;
	unsigned char field10;
	unsigned field11;
	long long field12;
} SCD_Struct_BW15;

typedef struct OpaqueFigSampleBufferProcessor* OpaqueFigSampleBufferProcessorRef;

typedef struct {
	float field1;
	float field2;
	float field3;
} SCD_Struct_BW17;

typedef struct OpaqueCMClock* OpaqueCMClockRef;

typedef struct __IOSurface* IOSurfaceRef;

typedef struct remoteQueueSenderOpaque* remoteQueueSenderOpaqueRef;

typedef struct CGImage* CGImageRef;

typedef struct OpaqueFigPlaybackItem* OpaqueFigPlaybackItemRef;

typedef struct OpaqueFigVisualContext* OpaqueFigVisualContextRef;

typedef struct OpaqueFigPlayer* OpaqueFigPlayerRef;

typedef struct opaqueCMSession* opaqueCMSessionRef;

typedef struct {
	unsigned val[8];
} SCD_Struct_BW26;

typedef struct OpaqueAudioComponentInstance* OpaqueAudioComponentInstanceRef;

typedef struct opaqueCMSimpleQueue* opaqueCMSimpleQueueRef;

typedef struct TimestampedAudioBufferList {
	__CFAllocator allocator;
	long long auRenderCount;
	unsigned dataBytesCapacity;
	unsigned numFrames;
	SCD_Struct_BW2 pts;
	AudioBufferList abl;
	unsigned numPrependedSilenceFrames;
} TimestampedAudioBufferList;

typedef struct __CFString* CFStringRef;

typedef struct OpaqueVTImageRotationSession* OpaqueVTImageRotationSessionRef;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_BW32;

typedef struct {
	double field1;
	double field2;
	double field3;
	double field4;
} SCD_Struct_BW33;

typedef struct {
	BOOL field1;
	double field2;
	SCD_Struct_BW33 field3;
} SCD_Struct_BW34;

typedef struct OpaqueFigSimpleMutex* OpaqueFigSimpleMutexRef;

typedef struct AudioStreamBasicDescription {
	double mSampleRate;
	unsigned mFormatID;
	unsigned mFormatFlags;
	unsigned mBytesPerPacket;
	unsigned mFramesPerPacket;
	unsigned mBytesPerFrame;
	unsigned mChannelsPerFrame;
	unsigned mBitsPerChannel;
	unsigned mReserved;
} AudioStreamBasicDescription;

typedef struct OpaqueAudioFileID* OpaqueAudioFileIDRef;

typedef struct OpaqueAudioQueue* OpaqueAudioQueueRef;

typedef struct OpaqueFigCaptureSource* OpaqueFigCaptureSourceRef;

typedef struct {
	SCD_Struct_BW2 sourceTime;
	SCD_Struct_BW2 syncedTime;
} SCD_Struct_BW40;

typedef struct EAFrameBufferPacket {
	NSMutableData* frameBufferData;
	unsigned frameTimeStamp;
	unsigned frameBytesRead;
	unsigned char frameTypeIndex;
} EAFrameBufferPacket;

typedef struct __CVPixelBufferPool* CVPixelBufferPoolRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CVBuffer* CVBufferRef;

typedef struct NoiseReductionCtx_s* NoiseReductionCtx_sRef;

typedef struct {
	float field1;
	int field2;
	BOOL field3;
} SCD_Struct_BW46;

typedef struct _CAImageQueue* CAImageQueueRef;

typedef struct OpaqueFigPreviewSynchronizer* OpaqueFigPreviewSynchronizerRef;

typedef struct OpaqueFigRecorder* OpaqueFigRecorderRef;

typedef struct {
	double x;
	double y;
	double z;
} SCD_Struct_Fi50;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct OpaqueFigCaptureISPProcessingSession* OpaqueFigCaptureISPProcessingSessionRef;

typedef struct BWStreamOutputStorage {
	int type;
	unsigned flags;
	BOOL ready;
	BOOL enabled;
	BWNodeOutput* nodeOutput;
	opaqueCMSimpleQueue simpleQueue;
	NSObject<OS_dispatch_queue>* bufferServicingQueue;
	/*function pointer*/void* bufferServicingQueueCallback;
	opaqueCMFormatDescription cachedFormatDescription;
	int frameCount;
} BWStreamOutputStorage;

typedef struct {
	float x;
	float y;
	float z;
} SCD_Struct_Fi54;

typedef struct {
	double w;
	double x;
	double y;
	double z;
} SCD_Struct_Fi55;

typedef struct OpaqueFigSemaphore* OpaqueFigSemaphoreRef;

typedef struct {
	double timestamp;
	float x;
	float y;
	float z;
} SCD_Struct_Fi57;

typedef struct {
	SCD_Struct_Fi54 field1;
	SCD_Struct_Fi54 field2;
	SCD_Struct_Fi54 field3;
	SCD_Struct_Fi55 field4;
	int field5;
	BOOL field6;
	BOOL field7;
	BOOL field8;
} SCD_Struct_Fi58;

typedef struct shmemPoolOpaque* shmemPoolOpaqueRef;

typedef struct __CFAllocator* CFAllocatorRef;

typedef struct OpaqueFigFlatDictionaryKeySpec* OpaqueFigFlatDictionaryKeySpecRef;

typedef struct OpaqueFigFormatReader* OpaqueFigFormatReaderRef;

typedef struct OpaqueFigAssetWriter* OpaqueFigAssetWriterRef;

typedef struct BWDeferredMetadataCacheEntry {
	SCD_Struct_BW2 pts;
	__CFDictionary metadataDict;
	short useCount;
	short age;
} BWDeferredMetadataCacheEntry;

typedef struct __IOHIDEventSystemClient* IOHIDEventSystemClientRef;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct OpaqueFigEndpoint* OpaqueFigEndpointRef;

typedef struct OpaqueFigEndpointStream* OpaqueFigEndpointStreamRef;

typedef struct OpaqueFigVirtualDisplaySource* OpaqueFigVirtualDisplaySourceRef;

typedef struct opaqueCMBufferQueue* opaqueCMBufferQueueRef;

typedef struct opaqueCMBufferQueueTriggerToken* opaqueCMBufferQueueTriggerTokenRef;

typedef struct {
	double integrationTime;
	float normalizedSNR;
	float baseISO;
	double exposureBias;
	float gain;
	unsigned conversionGain;
	unsigned readNoise_1x;
	unsigned readNoise_8x;
	unsigned aeAvg;
	unsigned char aeLimitsReached;
	unsigned motionDataStatus;
	long long frameCount;
} SCD_Struct_BW72;

typedef struct OpaqueVTCompressionSession* OpaqueVTCompressionSessionRef;

