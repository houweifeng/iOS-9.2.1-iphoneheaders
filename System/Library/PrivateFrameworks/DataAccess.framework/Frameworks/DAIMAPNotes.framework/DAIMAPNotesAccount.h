/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAIMAPNotes.framework/DAIMAPNotes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DAAccount.h>

@interface DAIMAPNotesAccount : DAAccount {

	int _imapNotesAccountVersion;

}

@property (assign,setter=setIMAPNotesAccountVersion:,nonatomic) int imapNotesAccountVersion;              //@synthesize imapNotesAccountVersion=_imapNotesAccountVersion - In the implementation block
-(BOOL)isEqualToAccount:(id)arg1 ;
-(id)onBehalfOfBundleIdentifier;
-(void)setIMAPNotesAccountVersion:(int)arg1 ;
-(int)imapNotesAccountVersion;
@end

