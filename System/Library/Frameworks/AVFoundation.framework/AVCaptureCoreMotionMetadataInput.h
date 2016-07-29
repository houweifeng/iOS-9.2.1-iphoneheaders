/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVCaptureInput.h>

@class AVCaptureCoreMotionMetadataInputInternal, NSString;

@interface AVCaptureCoreMotionMetadataInput : AVCaptureInput {

	AVCaptureCoreMotionMetadataInputInternal* _internal;

}

@property (nonatomic,readonly) NSString * sourceID; 
+(void)initialize;
+(id)coreMotionMetadataInput;
-(void)dealloc;
-(id)init;
-(OpaqueCMClockRef)clock;
-(NSString *)sourceID;
-(id)ports;
@end

