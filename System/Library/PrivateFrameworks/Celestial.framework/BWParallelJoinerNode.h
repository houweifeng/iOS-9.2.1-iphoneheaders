/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:46 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <Celestial/BWFunnelNode.h>

@class NSMutableDictionary;

@interface BWParallelJoinerNode : BWFunnelNode {

	int _inputsCount;
	NSMutableDictionary* _receivedBuffers;
	NSMutableDictionary* _sentErrorCountForID;

}
-(void)dealloc;
-(void)renderSampleBuffer:(opaqueCMSampleBufferRef)arg1 forInput:(id)arg2 ;
-(void)handleNodeError:(id)arg1 forInput:(id)arg2 ;
-(id)initWithNumberOfInputs:(int)arg1 mediaType:(unsigned)arg2 ;
@end

