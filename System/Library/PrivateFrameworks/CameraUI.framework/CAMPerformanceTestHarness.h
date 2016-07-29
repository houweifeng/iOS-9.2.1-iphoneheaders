/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface CAMPerformanceTestHarness : NSObject {

	NSString* _testName;
	NSMutableArray* _modeChangeListeners;
	/*^block*/id _testCleanupBlock;

}

@property (nonatomic,copy) id testCleanupBlock;              //@synthesize testCleanupBlock=_testCleanupBlock - In the implementation block
-(void)didChangeToMode:(long long)arg1 device:(long long)arg2 ;
-(void)setTestCleanupBlock:(id)arg1 ;
-(void)runConfiguredTest;
-(id)initWithTestName:(id)arg1 ;
-(void)_registerChangeBlock:(/*^block*/id)arg1 forMode:(long long)arg2 device:(long long)arg3 ;
-(void)_finishAndCleanupConfiguredTest;
-(id)testCleanupBlock;
@end

