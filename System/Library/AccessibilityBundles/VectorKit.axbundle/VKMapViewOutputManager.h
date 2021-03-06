/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/AccessibilityBundles/VectorKit.axbundle/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface VKMapViewOutputManager : NSObject {

	NSMutableArray* _outputQueue;

}

@property (nonatomic,retain) NSMutableArray * outputQueue;              //@synthesize outputQueue=_outputQueue - In the implementation block
+(id)sharedOutputManager;
-(NSMutableArray *)outputQueue;
-(void)clearOutputQueue;
-(void)queueOutput:(id)arg1 ;
-(void)setOutputQueue:(NSMutableArray *)arg1 ;
-(void)_handleAccessibilityAnnouncementDidFinish:(id)arg1 ;
-(unsigned long long)outputQueueCount;
-(void)dealloc;
-(id)init;
@end

