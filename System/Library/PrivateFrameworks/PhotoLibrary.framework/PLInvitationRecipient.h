/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MFComposeRecipient, NSString, NSMutableArray, NSArray;

@interface PLInvitationRecipient : NSObject {

	MFComposeRecipient* _mfRecipient;
	NSString* _firstName;
	NSString* _lastName;
	NSMutableArray* _allEmails;
	NSMutableArray* _allPhones;
	NSString* _selectedPhoneString;
	NSString* _selectedEmailString;
	NSString* _invalidAddressString;

}

@property (nonatomic,copy,readonly) NSString * firstName; 
@property (nonatomic,copy,readonly) NSString * lastName; 
@property (nonatomic,retain,readonly) NSArray * allEmails;                        //@synthesize allEmails=_allEmails - In the implementation block
@property (nonatomic,retain,readonly) NSArray * allPhones;                        //@synthesize allPhones=_allPhones - In the implementation block
@property (nonatomic,copy,readonly) NSString * selectedPhoneString;               //@synthesize selectedPhoneString=_selectedPhoneString - In the implementation block
@property (nonatomic,copy,readonly) NSString * selectedEmailString;               //@synthesize selectedEmailString=_selectedEmailString - In the implementation block
@property (nonatomic,copy,readonly) NSString * invalidAddressString;              //@synthesize invalidAddressString=_invalidAddressString - In the implementation block
+(id)validPhoneNumberFromString:(id)arg1 ;
+(id)validEmailAddressFromComposeRecipient:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)displayName;
-(NSString *)invalidAddressString;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSArray *)allEmails;
-(NSArray *)allPhones;
-(id)initWithRecipient:(id)arg1 ;
-(NSString *)selectedPhoneString;
-(NSString *)selectedEmailString;
@end

