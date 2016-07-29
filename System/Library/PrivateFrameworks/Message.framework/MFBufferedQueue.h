/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface MFBufferedQueue : NSObject {

	unsigned _maximumSize;
	double _maximumLatency;
	double _timeOfLastFlush;
	NSMutableArray* _queue;
	unsigned _currentSize;

}

@property (nonatomic,readonly) unsigned size;                    //@synthesize currentSize=_currentSize - In the implementation block
@property (assign,nonatomic) unsigned maximumSize;               //@synthesize maximumSize=_maximumSize - In the implementation block
@property (assign,nonatomic) double maximumLatency;              //@synthesize maximumLatency=_maximumLatency - In the implementation block
-(unsigned)size;
-(void)dealloc;
-(id)init;
-(void)removeAllObjects;
-(BOOL)flush;
-(BOOL)isEmpty;
-(BOOL)addItem:(id)arg1 ;
-(id)initWithMaximumSize:(unsigned)arg1 latency:(double)arg2 ;
-(unsigned long long)sizeForItem:(id)arg1 ;
-(BOOL)flushIfNecessary;
-(BOOL)handleItems:(id)arg1 ;
-(double)maximumLatency;
-(void)setMaximumLatency:(double)arg1 ;
-(BOOL)_flush;
-(void)setMaximumSize:(unsigned)arg1 ;
-(unsigned)maximumSize;
@end

