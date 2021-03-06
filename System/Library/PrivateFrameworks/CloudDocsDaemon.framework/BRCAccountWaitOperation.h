/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:58 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/_BRCOperation.h>
#import <libobjc.A.dylib/BRCOperationSubclass.h>

@protocol OS_dispatch_source;
@class NSObject, CKContainer, NSString;

@interface BRCAccountWaitOperation : _BRCOperation <BRCOperationSubclass> {

	NSObject*<OS_dispatch_source> _source;
	CKContainer* _ckContainer;
	long long _lastAccountStatus;
	BOOL _resumed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)dealloc;
-(void)start;
-(void)main;
-(unsigned long long)startActivity;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)subclassableDescriptionWithContext:(id)arg1 ;
-(BOOL)shouldRetryForError:(id)arg1 ;
-(void)_accountChangeHandler;
-(id)descriptionForCKAccountStatus:(long long)arg1 dumpContext:(id)arg2 ;
-(void)_accountDidChange;
-(id)initWithCKContainer:(id)arg1 ;
@end

