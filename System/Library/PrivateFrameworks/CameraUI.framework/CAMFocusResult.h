/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraUI/CameraUI-Structs.h>
@interface CAMFocusResult : NSObject {

	BOOL _performingContrastDetection;
	BOOL _contrastBasedFocusDidStart;
	BOOL _contrastBasedFocusDidEnd;
	BOOL _deviceSupportsFocus;
	long long _focusMode;
	CGPoint _pointOfInterest;

}

@property (getter=isPerformingContrastDetection,nonatomic,readonly) BOOL performingContrastDetection;              //@synthesize performingContrastDetection=_performingContrastDetection - In the implementation block
@property (nonatomic,readonly) CGPoint pointOfInterest;                                                            //@synthesize pointOfInterest=_pointOfInterest - In the implementation block
@property (nonatomic,readonly) long long focusMode;                                                                //@synthesize focusMode=_focusMode - In the implementation block
@property (nonatomic,readonly) BOOL contrastBasedFocusDidStart;                                                    //@synthesize contrastBasedFocusDidStart=_contrastBasedFocusDidStart - In the implementation block
@property (nonatomic,readonly) BOOL contrastBasedFocusDidEnd;                                                      //@synthesize contrastBasedFocusDidEnd=_contrastBasedFocusDidEnd - In the implementation block
@property (nonatomic,readonly) BOOL deviceSupportsFocus;                                                           //@synthesize deviceSupportsFocus=_deviceSupportsFocus - In the implementation block
-(id)description;
-(CGPoint)pointOfInterest;
-(BOOL)deviceSupportsFocus;
-(long long)focusMode;
-(BOOL)isPerformingContrastDetection;
-(BOOL)contrastBasedFocusDidStart;
-(BOOL)contrastBasedFocusDidEnd;
-(id)initWithMode:(long long)arg1 pointOfInterest:(CGPoint)arg2 performingContrastDetection:(BOOL)arg3 contrastBasedFocusDidStart:(BOOL)arg4 contrastBasedFocusDidEnd:(BOOL)arg5 deviceSupportsFocus:(BOOL)arg6 ;
@end

