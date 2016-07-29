/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKit.framework/WelcomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WLSourceDevice : NSObject <NSSecureCoding> {

	unsigned short _socketPort;
	unsigned short _httpPort;
	NSString* _ipAddress;
	NSString* _bonjourServiceName;
	NSString* _persistentIdentifier;
	NSString* _name;
	NSString* _osAPIVersion;
	NSString* _hardwareBrand;
	NSString* _hardwareModel;
	NSString* _hardwareDesign;
	NSString* _hardwareMaker;
	NSString* _hardwareProduct;
	unsigned long long _dataTypes;

}

@property (nonatomic,copy) NSString * ipAddress;                         //@synthesize ipAddress=_ipAddress - In the implementation block
@property (assign,nonatomic) unsigned short socketPort;                  //@synthesize socketPort=_socketPort - In the implementation block
@property (assign,nonatomic) unsigned short httpPort;                    //@synthesize httpPort=_httpPort - In the implementation block
@property (nonatomic,copy) NSString * bonjourServiceName;                //@synthesize bonjourServiceName=_bonjourServiceName - In the implementation block
@property (nonatomic,copy) NSString * persistentIdentifier;              //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * osAPIVersion;                      //@synthesize osAPIVersion=_osAPIVersion - In the implementation block
@property (nonatomic,copy) NSString * hardwareBrand;                     //@synthesize hardwareBrand=_hardwareBrand - In the implementation block
@property (nonatomic,copy) NSString * hardwareModel;                     //@synthesize hardwareModel=_hardwareModel - In the implementation block
@property (nonatomic,copy) NSString * hardwareDesign;                    //@synthesize hardwareDesign=_hardwareDesign - In the implementation block
@property (nonatomic,copy) NSString * hardwareMaker;                     //@synthesize hardwareMaker=_hardwareMaker - In the implementation block
@property (nonatomic,copy) NSString * hardwareProduct;                   //@synthesize hardwareProduct=_hardwareProduct - In the implementation block
@property (assign,nonatomic) unsigned long long dataTypes;               //@synthesize dataTypes=_dataTypes - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPersistentIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)hardwareModel;
-(void)setHardwareModel:(NSString *)arg1 ;
-(unsigned long long)dataTypes;
-(NSString *)persistentIdentifier;
-(void)setIpAddress:(NSString *)arg1 ;
-(NSString *)ipAddress;
-(void)setDataTypes:(unsigned long long)arg1 ;
-(unsigned short)httpPort;
-(unsigned short)socketPort;
-(NSString *)osAPIVersion;
-(NSString *)hardwareBrand;
-(NSString *)hardwareDesign;
-(NSString *)hardwareMaker;
-(NSString *)hardwareProduct;
-(void)setSocketPort:(unsigned short)arg1 ;
-(void)setHttpPort:(unsigned short)arg1 ;
-(void)setBonjourServiceName:(NSString *)arg1 ;
-(void)setOsAPIVersion:(NSString *)arg1 ;
-(void)setHardwareBrand:(NSString *)arg1 ;
-(void)setHardwareDesign:(NSString *)arg1 ;
-(void)setHardwareMaker:(NSString *)arg1 ;
-(void)setHardwareProduct:(NSString *)arg1 ;
-(NSString *)bonjourServiceName;
@end

