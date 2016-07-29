/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FigCaptureStillImageSettings;

@interface AVCapturePrepareBracketRequest : NSObject {

	/*^block*/id _completionBlock;
	FigCaptureStillImageSettings* _settings;

}

@property (readonly) FigCaptureStillImageSettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (readonly) id completionBlock;                                   //@synthesize completionBlock=_completionBlock - In the implementation block
+(id)prepareBracketRequestWithCompletionBlock:(/*^block*/id)arg1 settings:(id)arg2 ;
-(void)dealloc;
-(id)completionBlock;
-(FigCaptureStillImageSettings *)settings;
-(id)_initWithCompletionBlock:(/*^block*/id)arg1 settings:(id)arg2 ;
@end

