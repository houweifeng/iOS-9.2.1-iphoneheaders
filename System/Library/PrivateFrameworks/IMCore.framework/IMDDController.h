/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <IMCore/IMCore-Structs.h>
@class NSObject;

@interface IMDDController : NSObject {

	NSObject*<OS_dispatch_queue> _scannerQueue;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)scanMessage:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)_scanMessageUsingScanner:(id)arg1 attributedString:(id)arg2 ;
-(DDScannerRef)sharedScanner;
-(id)scannerQueue;
-(void)scanMessage:(id)arg1 waitUntilDone:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

