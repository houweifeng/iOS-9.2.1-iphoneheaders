/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSProgress;

@interface PLCloudLegacyScenario : NSObject {

	NSArray* _operations;
	NSProgress* _progress;
	unsigned long long _priority;

}

@property (nonatomic,retain) NSArray * operations;                     //@synthesize operations=_operations - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                    //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) unsigned long long priority;              //@synthesize priority=_priority - In the implementation block
-(void)dealloc;
-(unsigned long long)priority;
-(void)setPriority:(unsigned long long)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
-(NSProgress *)progress;
-(void)setOperations:(NSArray *)arg1 ;
-(NSArray *)operations;
-(void)requestCancel;
@end

