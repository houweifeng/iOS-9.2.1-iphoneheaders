/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NEPrettyDescription.h>

@class NEConfiguration, NEConfigurationManager, NSString, NEFilterProviderConfiguration;

@interface NEFilterManager : NSObject <NEPrettyDescription> {

	BOOL _hasLoaded;
	NEConfiguration* _configuration;
	NEConfigurationManager* _configurationManager;

}

@property (copy) NSString * localizedDescription; 
@property (retain) NEFilterProviderConfiguration * providerConfiguration; 
@property (getter=isEnabled) BOOL enabled; 
@property (assign) BOOL hasLoaded;                                                     //@synthesize hasLoaded=_hasLoaded - In the implementation block
@property (retain) NEConfiguration * configuration;                                    //@synthesize configuration=_configuration - In the implementation block
@property (readonly) NEConfigurationManager * configurationManager;                    //@synthesize configurationManager=_configurationManager - In the implementation block
+(id)sharedManager;
-(id)init;
-(id)description;
-(NSString *)localizedDescription;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)setConfiguration:(NEConfiguration *)arg1 ;
-(NEConfiguration *)configuration;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(BOOL)hasLoaded;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setHasLoaded:(BOOL)arg1 ;
-(void)loadFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(NEConfigurationManager *)configurationManager;
-(void)createEmptyConfiguration;
-(id)initFilterManagerWithPluginType:(id)arg1 ;
-(NEFilterProviderConfiguration *)providerConfiguration;
-(void)removeFromPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)saveToPreferencesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setProviderConfiguration:(NEFilterProviderConfiguration *)arg1 ;
@end

