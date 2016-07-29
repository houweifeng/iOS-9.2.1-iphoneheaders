/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface TSPDocumentResourceDownloadObserverManager : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _downloadObserversMap;

}
+(id)sharedManager;
-(void)addDownloadObserver:(id)arg1 forData:(id)arg2 digestString:(id)arg3 options:(unsigned long long)arg4 isInternalObserver:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)notifyDownloadObserversForDigestString:(id)arg1 withStatus:(long long)arg2 info:(id)arg3 wait:(BOOL)arg4 ;
-(id)init;
@end

