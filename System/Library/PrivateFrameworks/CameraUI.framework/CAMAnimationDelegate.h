/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CAMAnimationDelegate : NSObject {

	/*^block*/id _completion;
	/*^block*/id _start;

}

@property (nonatomic,copy) id completion;              //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) id start;                   //@synthesize start=_start - In the implementation block
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)animationDidStart:(id)arg1 ;
-(id)start;
-(void)setStart:(id)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
@end

