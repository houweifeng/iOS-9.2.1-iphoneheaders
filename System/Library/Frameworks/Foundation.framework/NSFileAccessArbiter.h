/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFileAccessArbiter.h>

@protocol NSFileAccessArbiter <NSObject>
@required
-(id)grantAccessClaim:(id)arg1 synchronouslyIfPossible:(BOOL)arg2;
-(void)revokeAccessClaimForID:(id)arg1;
-(void)grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2;
-(void)revokeSubarbitrationClaimForID:(id)arg1;
-(void)cancelAccessClaimForID:(id)arg1;
-(void)writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3;
-(void)writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2;
-(void)writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2;
-(void)writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2;
-(void)writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(id)arg2;
-(void)writerWithPurposeID:(id)arg1 didChangeItemAtURL:(id)arg2;
-(void)writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5;
-(void)tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2;

@end


@protocol OS_dispatch_queue, OS_xpc_object, OS_dispatch_source;
@class NSObject, NSMutableDictionary, NSFileAccessNode, NSString;

@interface NSFileAccessArbiter : NSObject <NSFileAccessArbiter> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isSubarbiter;
	NSMutableDictionary* _accessClaimsByID;
	NSMutableDictionary* _subarbitrationClaimsByID;
	NSMutableDictionary* _reactorsByID;
	NSFileAccessNode* _rootNode;
	NSObject*<OS_xpc_object> _superarbitrationServer;
	NSObject*<OS_dispatch_source> _debugSignalSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleMessage:(id)arg1 fromClient:(id)arg2 ;
-(void)_handleCanceledClient:(id)arg1 ;
-(void)_registerForDebugInfoRequests;
-(void)_handleMessage:(id)arg1 forSubarbitrationClaim:(id)arg2 server:(id)arg3 ;
-(void)_grantAccessClaim:(id)arg1 ;
-(void)_writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3 ;
-(void)_sendSubarbitersMessageWithKind:(id)arg1 parameters:(id)arg2 ;
-(void)_willRemoveReactor:(id)arg1 ;
-(void)_revokeAccessClaimForID:(id)arg1 fromLocal:(BOOL)arg2 ;
-(void)_grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2 ;
-(void)_cancelAccessClaimForID:(id)arg1 ;
-(void)_writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2 ;
-(void)_writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2 ;
-(void)_writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2 ;
-(void)_writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(id)arg2 ;
-(void)_writerWithPurposeID:(id)arg1 didChangeItemAtURL:(id)arg2 ;
-(void)_writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5 ;
-(void)_tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2 ;
-(BOOL)_handleMessage:(id)arg1 ofKind:(id)arg2 withParameters:(id)arg3 embeddedServer:(id)arg4 fromClient:(id)arg5 ;
-(void)_addPresenter:(id)arg1 ofItemAtURL:(id)arg2 watchingFile:(BOOL)arg3 withLastEventID:(id)arg4 ;
-(void)_removeReactorForID:(id)arg1 ;
-(BOOL)_addProvider:(id)arg1 ofItemsAtURL:(id)arg2 ;
-(void)_startArbitratingItemsAtURLs:(id)arg1 withSuperarbitrationServer:(id)arg2 ;
-(void)_getDebugInformationIncludingEverything:(BOOL)arg1 withString:(id)arg2 fromPid:(int)arg3 thenContinue:(/*^block*/id)arg4 ;
-(id)grantAccessClaim:(id)arg1 synchronouslyIfPossible:(BOOL)arg2 ;
-(void)revokeAccessClaimForID:(id)arg1 ;
-(void)grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2 ;
-(void)revokeSubarbitrationClaimForID:(id)arg1 ;
-(void)cancelAccessClaimForID:(id)arg1 ;
-(void)writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3 ;
-(void)writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2 ;
-(void)writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2 ;
-(void)writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2 ;
-(void)writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(id)arg2 ;
-(void)writerWithPurposeID:(id)arg1 didChangeItemAtURL:(id)arg2 ;
-(void)writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5 ;
-(void)tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2 ;
-(id)initWithQueue:(id)arg1 isSubarbiter:(BOOL)arg2 listener:(id)arg3 ;
-(void)stopArbitrating;
-(void)dealloc;
-(void)finalize;
-(id)rootNode;
@end

