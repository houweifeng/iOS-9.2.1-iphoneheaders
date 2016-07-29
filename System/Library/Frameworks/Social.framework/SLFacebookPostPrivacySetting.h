/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface SLFacebookPostPrivacySetting : NSObject <NSSecureCoding> {

	int _type;
	NSString* _identifier;
	NSString* _name;
	NSDictionary* _parameters;

}

@property (retain) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (retain) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (assign) int type;                               //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)postPrivacySettingWithIdentifier:(id)arg1 name:(id)arg2 type:(int)arg3 parameters:(id)arg4 ;
+(id)postPrivacySettingsForPrivacyOptions:(id)arg1 ;
+(int)_privacySettingTypeFromTypeIdentifier:(id)arg1 ;
+(id)postPrivacySettingForPrivacyOptionDictionary:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(id)_parametersJSONStringRepresentation;
-(id)parametersFormValueString;
@end

