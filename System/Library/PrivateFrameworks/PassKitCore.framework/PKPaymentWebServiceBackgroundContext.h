/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface PKPaymentWebServiceBackgroundContext : NSObject <NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _backgroundTaskRecordsByTaskIdentifier;

}

@property (retain) NSMutableDictionary * backgroundTaskRecordsByTaskIdentifier;              //@synthesize backgroundTaskRecordsByTaskIdentifier=_backgroundTaskRecordsByTaskIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contextWithArchive:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)archiveAtPath:(id)arg1 ;
-(void)setBackgroundTaskRecordsByTaskIdentifier:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)backgroundTaskRecordsByTaskIdentifier;
-(void)addBackgroundDownloadRecord:(id)arg1 forTaskIdentifier:(unsigned long long)arg2 ;
-(id)backroundDownloadRecordForTaskIdentifier:(unsigned long long)arg1 ;
-(void)removeBackgroundDownloadRecordForTaskIdentifier:(unsigned long long)arg1 ;
-(id)taskIdentifiers;
@end

