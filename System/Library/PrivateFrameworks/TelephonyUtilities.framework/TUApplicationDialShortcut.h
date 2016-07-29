/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TUApplicationDialShortcut : NSObject
+(id)shortcutItemWithTitle:(id)arg1 subtitle:(id)arg2 contactIdentifier:(id)arg3 URL:(id)arg4 ;
+(BOOL)isShortcutItemType:(id)arg1 ;
+(id)shortcutItemForFavorite:(id)arg1 withAddressBookIdentifier:(int)arg2 ;
+(id)shortcutItemForContact:(id)arg1 withLabeledPhoneNumber:(id)arg2 ;
+(id)shortcutItemForRecent:(id)arg1 withContactIdentifier:(id)arg2 ;
+(id)urlForUserInfo:(id)arg1 ;
+(id)sharedFormatter;
@end

