/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Search/Search-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SPDaemonQueryDelegate, OS_dispatch_queue;
@class SPSearchQuery, NSObject, NSString;

@interface SPDaemonQueryToken : NSObject <NSCopying> {

	unsigned _queryID;
	SPSearchQuery* _query;
	id<SPDaemonQueryDelegate> _delegate;
	BOOL _queryFinished;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _fbq;
	NSString* _web_fbq;

}

@property (assign,nonatomic,__weak) id<SPDaemonQueryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned queryID;                                     //@synthesize queryID=_queryID - In the implementation block
@property (nonatomic,readonly) SPSearchQuery * query;                                //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (assign) BOOL queryFinished;                                               //@synthesize queryFinished=_queryFinished - In the implementation block
@property (readonly) NSString * fbq;                                                 //@synthesize fbq=_fbq - In the implementation block
@property (readonly) NSString * web_fbq;                                             //@synthesize web_fbq=_web_fbq - In the implementation block
-(void)handleMessage:(id)arg1 ;
-(void)setDelegate:(id<SPDaemonQueryDelegate>)arg1 ;
-(id<SPDaemonQueryDelegate>)delegate;
-(id)copy;
-(SPSearchQuery *)query;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(unsigned)queryID;
-(id)initWithQuery:(id)arg1 queue:(id)arg2 ;
-(BOOL)queryFinished;
-(void)setQueryFinished:(BOOL)arg1 ;
-(id)initWithQuery:(id)arg1 ;
-(NSString *)fbq;
-(NSString *)web_fbq;
@end

