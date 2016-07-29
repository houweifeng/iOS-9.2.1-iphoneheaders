/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface BRAccount : NSObject {

	NSString* _accountID;
	NSData* _perAppAccountIdentifier;

}

@property (nonatomic,copy) NSData * perAppAccountIdentifier;              //@synthesize perAppAccountIdentifier=_perAppAccountIdentifier - In the implementation block
+(BOOL)_refreshCurrentLoggedInAccountForcingRefresh:(BOOL)arg1 error:(id*)arg2 ;
+(BOOL)refreshCurrentLoggedInAccount;
+(id)currentCachedLoggedInAccountWithError:(id*)arg1 ;
+(id)currentLoggedInAccountWithError:(id*)arg1 ;
-(void)dealloc;
-(NSData *)perAppAccountIdentifier;
-(void)setPerAppAccountIdentifier:(NSData *)arg1 ;
-(BOOL)loginWithError:(id*)arg1 ;
-(BOOL)logoutWithError:(id*)arg1 ;
-(id)containerWithPendingChanges;
-(id)initWithAccountID:(id)arg1 ;
@end

