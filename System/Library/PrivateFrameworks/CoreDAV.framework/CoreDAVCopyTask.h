/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVCopyOrMoveTask.h>

@interface CoreDAVCopyTask : CoreDAVCopyOrMoveTask

@property (assign,nonatomic) id<CoreDAVCopyTaskDelegate> delegate; 
-(void)dealloc;
-(void)_callBackToDelegateWithResponses:(id)arg1 error:(id)arg2 ;
-(id)httpMethod;
-(BOOL)validate:(id*)arg1 ;
@end

