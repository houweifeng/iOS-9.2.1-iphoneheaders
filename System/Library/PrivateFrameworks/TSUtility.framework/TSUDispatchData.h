/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:58 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_data;
@class NSObject;

@interface TSUDispatchData : NSObject {

	NSObject*<OS_dispatch_data> _data;
	unsigned long long _size;
	unsigned long long _maxFragmentsCount;
	NSObject*<OS_dispatch_data> _fragmentedData;
	NSObject*<OS_dispatch_data> _defragmentedData;
	unsigned long long _fragmentsCount;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_data> data; 
@property (nonatomic,readonly) unsigned long long size;                                   //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) unsigned long long maxFragmentsCount;                        //@synthesize maxFragmentsCount=_maxFragmentsCount - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_data> fragmentedData;                //@synthesize fragmentedData=_fragmentedData - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_data> defragmentedData;              //@synthesize defragmentedData=_defragmentedData - In the implementation block
@property (nonatomic,readonly) unsigned long long fragmentsCount;                         //@synthesize fragmentsCount=_fragmentsCount - In the implementation block
-(unsigned long long)maxFragmentsCount;
-(void)setMaxFragmentsCount:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_data>)fragmentedData;
-(NSObject*<OS_dispatch_data>)defragmentedData;
-(unsigned long long)fragmentsCount;
-(unsigned long long)size;
-(id)init;
-(NSObject*<OS_dispatch_data>)data;
-(id)initWithData:(id)arg1 ;
-(void)append:(id)arg1 ;
@end

