/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSProgressPublisher <NSObject>
@required
-(oneway void)prioritize;
-(oneway void)startProvidingValuesWithInitialAcceptor:(/*^block*/id)arg1;
-(oneway void)stopProvidingValues;
-(oneway void)appWithBundleID:(id)arg1 didAcknowledgeWithSuccess:(BOOL)arg2;
-(oneway void)cancel;
-(oneway void)resume;
-(oneway void)pause;

@end

