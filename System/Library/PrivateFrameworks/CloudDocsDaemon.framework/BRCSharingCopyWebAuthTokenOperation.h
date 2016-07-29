/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCFrameworkOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@class NSString;

@interface BRCSharingCopyWebAuthTokenOperation : _BRCFrameworkOperation <BRCOperationSubclass> {

	NSString* _ckContainerID;

}

@property (nonatomic,retain) NSString * ckContainerID;              //@synthesize ckContainerID=_ckContainerID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)main;
-(unsigned long long)startActivity;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(id)initWithSyncContext:(id)arg1 ckContainerID:(id)arg2 ;
-(NSString *)ckContainerID;
-(void)setCkContainerID:(NSString *)arg1 ;
@end

