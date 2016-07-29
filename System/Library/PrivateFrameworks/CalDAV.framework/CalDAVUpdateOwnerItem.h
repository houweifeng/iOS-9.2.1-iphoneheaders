/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class ICSDateValue, NSString, NSURL;

@interface CalDAVUpdateOwnerItem : CoreDAVItem {

	ICSDateValue* _dtstamp;
	NSString* _displayName;
	NSString* _firstName;
	NSString* _lastName;
	NSURL* _address;
	NSString* _emailAddress;

}

@property (nonatomic,retain) ICSDateValue * dtstamp;               //@synthesize dtstamp=_dtstamp - In the implementation block
@property (nonatomic,retain) NSString * displayName;               //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * firstName;                 //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,retain) NSString * lastName;                  //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,retain) NSURL * address;                      //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) NSString * emailAddress;              //@synthesize emailAddress=_emailAddress - In the implementation block
-(id)description;
-(NSString *)displayName;
-(void)setAddress:(NSURL *)arg1 ;
-(NSString *)emailAddress;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSURL *)address;
-(id)copyParseRules;
-(void)setDtstamp:(ICSDateValue *)arg1 ;
-(ICSDateValue *)dtstamp;
-(void)setFirstNameItem:(id)arg1 ;
-(void)setLastNameItem:(id)arg1 ;
-(void)setDtstampItem:(id)arg1 ;
-(void)setAddressItem:(id)arg1 ;
-(void)setEmailAddressItem:(id)arg1 ;
-(void)setDisplayNameItem:(id)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
@end

