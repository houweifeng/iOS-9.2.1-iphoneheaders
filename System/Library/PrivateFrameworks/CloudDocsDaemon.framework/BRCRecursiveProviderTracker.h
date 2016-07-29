/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSMutableSet, NSString, NSObject, NSEnumerator;

@interface BRCRecursiveProviderTracker : NSObject {

	NSMutableSet* _documentIDs;
	/*^block*/id _handler;
	NSString* _key;
	NSObject*<OS_dispatch_group> _group;

}

@property (nonatomic,readonly) NSEnumerator * documentIDsEnumerator; 
@property (nonatomic,readonly) NSString * key;                                    //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> group;                //@synthesize group=_group - In the implementation block
-(id)init;
-(id)description;
-(NSString *)key;
-(void)run;
-(NSObject*<OS_dispatch_group>)group;
-(NSEnumerator *)documentIDsEnumerator;
-(id)initWithKey:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(/*^block*/id)completionHandlerFor:(id)arg1 ;
@end

