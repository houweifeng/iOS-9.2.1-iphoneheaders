/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct OpaqueAudioComponentInstance* OpaqueAudioComponentInstanceRef;

typedef struct SMPTETime {
	short mSubframes;
	short mSubframeDivisor;
	unsigned mCounter;
	unsigned mType;
	unsigned mFlags;
	short mHours;
	short mMinutes;
	short mSeconds;
	short mFrames;
} SMPTETime;

typedef struct AudioTimeStamp {
	double mSampleTime;
	unsigned long long mHostTime;
	double mRateScalar;
	unsigned long long mWordClockTime;
	SMPTETime mSMPTETime;
	unsigned mFlags;
	unsigned mReserved;
} AudioTimeStamp;

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

typedef struct AudioBuffer {
	unsigned mNumberChannels;
	unsigned mDataByteSize;
	void mData;
} AudioBuffer;

typedef struct AudioBufferList {
	unsigned mNumberBuffers;
	AudioBuffer mBuffers[1];
} AudioBufferList;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_VC6;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct __CVBuffer* CVBufferRef;

typedef struct {
	SCD_Struct_VC6 field1;
	SCD_Struct_VC6 field2;
} SCD_Struct_VC9;

typedef struct sqlite3* sqlite3Ref;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct CGContext* CGContextRef;

typedef struct __CVPixelBufferPool* CVPixelBufferPoolRef;

typedef struct OpaqueVTPixelTransferSession* OpaqueVTPixelTransferSessionRef;

typedef struct CGImage* CGImageRef;

typedef struct CGAffineTransform {
	double a;
	double b;
	double c;
	double d;
	double tx;
	double ty;
} CGAffineTransform;

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

typedef struct CNNModel {
	CNNBlock blocks_[20];
} CNNModel;

typedef struct CNNSize {
	int size_[4];
} CNNSize;

typedef struct CNNData {
	float data_;
	CNNSize size_;
} CNNData;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct Projections_meanStdTable {
	float sumTable;
	float sumSqTable;
} Projections_meanStdTable;

typedef struct FastRegistration_Signatures {
	float piRow;
	unsigned long long nPiRow;
	Projections_meanStdTable piRowTable;
	float piCol;
	unsigned long long nPiCol;
	Projections_meanStdTable piColTable;
} FastRegistration_Signatures;

typedef struct GridROI_t {
	int startX;
	int startY;
	int endX;
	int endY;
} GridROI_t;

typedef struct vImage_Buffer {
	void data;
	unsigned long long height;
	unsigned long long width;
	unsigned long long rowBytes;
} vImage_Buffer;

typedef struct _sbp_Slowmo_Projection {
	FastRegistration_Signatures signature;
	3264f deltaRow;
	3264f deltaCol;
	unsigned long long nDeltaRow;
	unsigned long long nDeltaCol;
	unsigned char valid;
	double timestamp;
	void allocatedBuffer;
	vImage_Buffer allocatedvImage;
} sbp_Slowmo_Projection;

typedef struct __CFData* CFDataRef;

typedef struct __CFString* CFStringRef;

typedef struct _compressed_pair<std::__1::shared_ptr<Espresso::net> *, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > > {
	shared_ptr<Espresso::net> __first_;
} compressed_pair<std::__1::shared_ptr<Espresso::net> *, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > >;

typedef struct vector<std::__1::shared_ptr<Espresso::net>, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > > {
	shared_ptr<Espresso::net> __begin_;
	shared_ptr<Espresso::net> __end_;
	compressed_pair<std::__1::shared_ptr<Espresso::net> *, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > > __end_cap_;
} vector<std::__1::shared_ptr<Espresso::net>, std::__1::allocator<std::__1::shared_ptr<Espresso::net> > >;

typedef struct _compressed_pair<std::__1::pair<unsigned long long, unsigned long long> *, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > > {
	pair<unsigned long long, unsigned long long> __first_;
} compressed_pair<std::__1::pair<unsigned long long, unsigned long long> *, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > >;

typedef struct vector<std::__1::pair<unsigned long long, unsigned long long>, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > > {
	pair<unsigned long long, unsigned long long> __begin_;
	pair<unsigned long long, unsigned long long> __end_;
	compressed_pair<std::__1::pair<unsigned long long, unsigned long long> *, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > > __end_cap_;
} vector<std::__1::pair<unsigned long long, unsigned long long>, std::__1::allocator<std::__1::pair<unsigned long long, unsigned long long> > >;

typedef struct _compressed_pair<double *, std::__1::allocator<double> > {
	double __first_;
} compressed_pair<double *, std::__1::allocator<double> >;

typedef struct vector<double, std::__1::allocator<double> > {
	double __begin_;
	double __end_;
	compressed_pair<double *, std::__1::allocator<double> > __end_cap_;
} vector<double, std::__1::allocator<double> >;

typedef struct _compressed_pair<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> *, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> > > {
	shared_ptr<Espresso::fast_pyramid_resizer> __first_;
} compressed_pair<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> *, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> > >;

typedef struct vector<std::__1::shared_ptr<Espresso::fast_pyramid_resizer>, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> > > {
	shared_ptr<Espresso::fast_pyramid_resizer> __begin_;
	shared_ptr<Espresso::fast_pyramid_resizer> __end_;
	compressed_pair<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> *, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> > > __end_cap_;
} vector<std::__1::shared_ptr<Espresso::fast_pyramid_resizer>, std::__1::allocator<std::__1::shared_ptr<Espresso::fast_pyramid_resizer> > >;

typedef struct _compressed_pair<std::__1::shared_ptr<Espresso::blob<float, 3> > *, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3> > > > {
	shared_ptr<Espresso::blob<float, 3> > __first_;
} compressed_pair<std::__1::shared_ptr<Espresso::blob<float, 3> > *, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3> > > >;

typedef struct vector<std::__1::shared_ptr<Espresso::blob<float, 3> >, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3> > > > {
	shared_ptr<Espresso::blob<float, 3> > __begin_;
	shared_ptr<Espresso::blob<float, 3> > __end_;
	compressed_pair<std::__1::shared_ptr<Espresso::blob<float, 3> > *, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3> > > > __end_cap_;
} vector<std::__1::shared_ptr<Espresso::blob<float, 3> >, std::__1::allocator<std::__1::shared_ptr<Espresso::blob<float, 3> > > >;

typedef struct pair<unsigned long long, unsigned long long> {
	unsigned long long first;
	unsigned long long second;
} pair<unsigned long long, unsigned long long>;

typedef struct _compressed_pair<int *, std::__1::allocator<int> > {
	int __first_;
} compressed_pair<int *, std::__1::allocator<int> >;

typedef struct vector<int, std::__1::allocator<int> > {
	int __begin_;
	int __end_;
	compressed_pair<int *, std::__1::allocator<int> > __end_cap_;
} vector<int, std::__1::allocator<int> >;

typedef struct net_strides_configuration {
	int num_layer;
	vector<int, std::__1::allocator<int> > kernel_size;
	vector<int, std::__1::allocator<int> > stride;
	vector<int, std::__1::allocator<int> > pad;
} net_strides_configuration;

typedef struct {
	double w;
	double x;
	double y;
	double z;
} SCD_Struct_VC45;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct {
	float field1;
	float field2;
	float field3;
} SCD_Struct_VC47;

