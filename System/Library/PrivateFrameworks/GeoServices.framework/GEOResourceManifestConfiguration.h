/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface GEOResourceManifestConfiguration : NSObject {

	unsigned _tileGroupIdentifier;
	NSString* _os;
	NSString* _osVersion;
	NSString* _osBuild;
	NSString* _countryCode;
	NSString* _hardwareIdentifier;
	NSString* _applicationIdentifier;
	NSString* _applicationVersion;
	NSString* _environment;
	NSString* _dataDirectory;

}

@property (assign,nonatomic) unsigned tileGroupIdentifier;                //@synthesize tileGroupIdentifier=_tileGroupIdentifier - In the implementation block
@property (nonatomic,copy) NSString * os;                                 //@synthesize os=_os - In the implementation block
@property (nonatomic,copy) NSString * osVersion;                          //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,copy) NSString * osBuild;                            //@synthesize osBuild=_osBuild - In the implementation block
@property (nonatomic,copy) NSString * countryCode;                        //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,copy) NSString * hardwareIdentifier;                 //@synthesize hardwareIdentifier=_hardwareIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationIdentifier;              //@synthesize applicationIdentifier=_applicationIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationVersion;                 //@synthesize applicationVersion=_applicationVersion - In the implementation block
@property (nonatomic,copy) NSString * environment;                        //@synthesize environment=_environment - In the implementation block
@property (nonatomic,copy) NSString * dataDirectory;                      //@synthesize dataDirectory=_dataDirectory - In the implementation block
@property (nonatomic,readonly) NSString * directorySuffix; 
+(id)defaultConfiguration;
+(id)configurationWithPairedDevice:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)environment;
-(NSString *)applicationIdentifier;
-(void)setApplicationIdentifier:(NSString *)arg1 ;
-(void)setEnvironment:(NSString *)arg1 ;
-(void)setApplicationVersion:(NSString *)arg1 ;
-(void)setCountryCode:(NSString *)arg1 ;
-(NSString *)countryCode;
-(NSString *)hardwareIdentifier;
-(void)setOsVersion:(NSString *)arg1 ;
-(void)setOsBuild:(NSString *)arg1 ;
-(NSString *)osVersion;
-(void)setHardwareIdentifier:(NSString *)arg1 ;
-(NSString *)osBuild;
-(NSString *)os;
-(void)setTileGroupIdentifier:(unsigned)arg1 ;
-(NSString *)applicationVersion;
-(id)conciseDictionaryRepresentation;
-(unsigned)tileGroupIdentifier;
-(NSString *)directorySuffix;
-(void)setDataDirectory:(NSString *)arg1 ;
-(NSString *)dataDirectory;
-(BOOL)isDefaultConfiguration;
-(id)initWithConciseDictionaryRepresentation:(id)arg1 ;
-(void)setOs:(NSString *)arg1 ;
@end

