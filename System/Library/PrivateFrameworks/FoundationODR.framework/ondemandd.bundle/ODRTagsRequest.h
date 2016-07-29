/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FoundationODR.framework/ondemandd.bundle/ondemandd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSProgress;

@interface ODRTagsRequest : NSObject {

	NSMutableDictionary* _tagRequests;
	double _lastEnhancedProgressReport;
	double _startTime;
	NSProgress* _progress;

}

@property (readonly) NSProgress * progress;              //@synthesize progress=_progress - In the implementation block
-(void)updateReportForRequestID:(id)arg1 withSecondsRemaining:(double)arg2 bytesDownloaded:(unsigned long long)arg3 ;
-(id)initWithProgress:(id)arg1 ;
-(NSProgress *)progress;
@end

