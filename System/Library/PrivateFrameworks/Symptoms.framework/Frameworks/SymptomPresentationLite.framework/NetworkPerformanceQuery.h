/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomPresentationLite.framework/SymptomPresentationLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface NetworkPerformanceQuery : NSObject {

	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(void)dealloc;
-(id)init;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)_formatInstantRouteMetrics:(id)arg1 ;
-(BOOL)currentScorecardFor:(int)arg1 queue:(id)arg2 reply:(/*^block*/id)arg3 ;
@end

