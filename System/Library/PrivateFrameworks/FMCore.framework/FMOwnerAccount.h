/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface FMOwnerAccount : NSObject {

	NSString* _personId;
	NSString* _username;
	NSString* _firstName;
	NSString* _lastName;
	NSDictionary* _dataclassProperties;

}

@property (nonatomic,copy) NSString * personId;                             //@synthesize personId=_personId - In the implementation block
@property (nonatomic,copy) NSString * username;                             //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * firstName;                            //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                             //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSDictionary * dataclassProperties;              //@synthesize dataclassProperties=_dataclassProperties - In the implementation block
-(id)description;
-(NSString *)personId;
-(void)setPersonId:(NSString *)arg1 ;
-(void)setDataclassProperties:(NSDictionary *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(NSDictionary *)dataclassProperties;
@end

