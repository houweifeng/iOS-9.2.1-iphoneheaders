/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/FavoriteItem.h>

@class MailAccount;

@interface FavoriteItem_Inbox : FavoriteItem {

	MailAccount* _account;

}
-(id)representingMailbox;
-(void)wasSelected:(id)arg1 accessoryTapped:(BOOL)arg2 ;
-(id)persistentIdForMigration;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isVisible;
-(id)dictionaryRepresentation;
-(id)displayName;
-(id)initWithAccount:(id)arg1 ;
-(id)account;
-(void)configureCell:(id)arg1 ;
@end
