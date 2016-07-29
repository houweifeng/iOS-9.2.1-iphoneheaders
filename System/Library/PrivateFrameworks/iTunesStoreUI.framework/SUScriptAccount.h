/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class SSAccount, NSString, NSNumber;

@interface SUScriptAccount : SUScriptObject {

	SSAccount* _account;

}

@property (retain) SSAccount * account; 
@property (copy) NSString * credits; 
@property (retain) NSNumber * dsID; 
@property (copy) NSString * identifier; 
@property (readonly) NSString * ITunesPassSerialNumber; 
@property (copy) NSString * kind; 
@property (getter=isPrimaryLockerAccount,readonly) id primaryLockerAccount; 
@property (retain) id lockerEnabled; 
@property (retain) id purchaseHistoryEnabled; 
@property (retain) id socialEnabled; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)kind;
-(id)attributeKeys;
-(NSNumber *)dsID;
-(void)setSecureToken:(id)arg1 ;
-(void)_commitChanges;
-(void)_setServiceType:(long long)arg1 enabled:(id)arg2 ;
-(BOOL)isPrimaryAccount;
-(BOOL)isSecureTokenValid;
-(NSString *)credits;
-(id)isPrimaryLockerAccount;
-(id)lockerEnabled;
-(id)purchaseHistoryEnabled;
-(void)setCredits:(NSString *)arg1 ;
-(void)setDsID:(NSNumber *)arg1 ;
-(void)setLockerEnabled:(id)arg1 ;
-(void)setPurchaseHistoryEnabled:(id)arg1 ;
-(void)setSocialEnabled:(id)arg1 ;
-(id)socialEnabled;
-(id)scriptAttributeKeys;
-(id)_className;
-(NSString *)ITunesPassSerialNumber;
-(void)setAccount:(SSAccount *)arg1 ;
-(SSAccount *)account;
-(void)setKind:(NSString *)arg1 ;
@end

