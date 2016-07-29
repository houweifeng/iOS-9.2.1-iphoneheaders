/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSSharingManager.h>
@class NSString, NSArray;


@protocol MSSharingManager <NSObject>
@property (assign,nonatomic) id<MSSharingManagerDelegate> delegate; 
@property (nonatomic,readonly) NSString * personID; 
@property (nonatomic,retain) NSArray * shares; 
@required
-(void)setDelegate:(id)arg1;
-(id<MSSharingManagerDelegate>)delegate;
-(NSString *)personID;
-(void)sendInvitationsForShares:(id)arg1;
-(void)respondToInvitation:(id)arg1 accept:(BOOL)arg2;
-(void)modifyShare:(id)arg1;
-(void)removeShare:(id)arg1;
-(void)refreshCurrentShareState;
-(NSArray *)shares;
-(void)setShares:(id)arg1;

@end

#import <libobjc.A.dylib/MSSharingProtocolDelegate.h>

@protocol MSSharingManagerDelegate;
@class NSString, NSArray, NSMutableArray, MSSharingProtocol, NSMutableDictionary, NSTimer, MSMediaStreamDaemon;

@interface MSSharingManager : NSObject <MSSharingManager, MSSharingProtocolDelegate> {

	NSString* _personID;
	NSString* _manifestPath;
	NSArray* _shares;
	NSMutableArray* _sharesWithLocalModifications;
	MSSharingProtocol* _protocol;
	int _state;
	BOOL _requestCurrentStateRequested;
	NSMutableArray* _invitationQueue;
	NSMutableArray* _invitationResponseQueue;
	NSMutableDictionary* _manageShareByPersonID;
	NSMutableArray* _deleteQueue;
	NSTimer* _manageShareDebounceTimer;
	id<MSSharingManagerDelegate> _delegate;
	MSMediaStreamDaemon* _daemon;

}

@property (assign,nonatomic) MSMediaStreamDaemon * daemon;                       //@synthesize daemon=_daemon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<MSSharingManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * personID;                              //@synthesize personID=_personID - In the implementation block
@property (nonatomic,retain) NSArray * shares; 
+(id)sharingManagerForPersonID:(id)arg1 ;
+(id)existingSharingManagerForPersonID:(id)arg1 ;
+(void)abortAllActivities;
+(id)_clearInstantiatedSharingManagersByPersonID;
+(void)forgetPersonID:(id)arg1 ;
-(void)setDelegate:(id<MSSharingManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<MSSharingManagerDelegate>)delegate;
-(NSString *)personID;
-(void)sendInvitationsForShares:(id)arg1 ;
-(void)respondToInvitation:(id)arg1 accept:(BOOL)arg2 ;
-(void)modifyShare:(id)arg1 ;
-(void)removeShare:(id)arg1 ;
-(void)refreshCurrentShareState;
-(id)initWithPersonID:(id)arg1 baseURL:(id)arg2 ;
-(void)_performNextQueuedAction;
-(void)_shareDebounceTimerDidFire:(id)arg1 ;
-(id)_sharesWithLocalModifications;
-(void)_sendNextDeletion;
-(void)_sendNextInvitationResponse;
-(void)_sendNextInvitation;
-(void)_sendNextManagedShare;
-(void)_requestCurrentShareState;
-(void)sharingProtocol:(id)arg1 didFindShareState:(id)arg2 ;
-(void)sharingProtocol:(id)arg1 didCompleteTransactionWithError:(id)arg2 ;
-(void)sharingProtocol:(id)arg1 didFailToSendInvitations:(id)arg2 ;
-(void)sharingProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2 ;
-(NSArray *)shares;
-(void)setShares:(NSArray *)arg1 ;
-(MSMediaStreamDaemon *)daemon;
-(void)setDaemon:(MSMediaStreamDaemon *)arg1 ;
-(void)abort;
@end

