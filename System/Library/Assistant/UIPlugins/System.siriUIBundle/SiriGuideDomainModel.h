/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSArray;

@interface SiriGuideDomainModel : NSObject {

	NSString* _name;
	NSString* _tagPhrase;
	NSString* _displayIdentifier;
	NSString* _bundleIdentifier;
	NSMutableArray* _requiredApps;
	NSMutableArray* _requiredCapabilities;
	NSString* _sectionFilename;
	NSMutableArray* _sections;
	BOOL _iconNeedsProcessing;
	NSString* _iconResourceName;
	NSString* _domainIdentifier;
	NSString* _iconPathIdentifier;

}

@property (nonatomic,retain) NSString * name;                             //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * tagPhrase;                        //@synthesize tagPhrase=_tagPhrase - In the implementation block
@property (nonatomic,retain) NSString * displayIdentifier;                //@synthesize displayIdentifier=_displayIdentifier - In the implementation block
@property (nonatomic,retain) NSString * iconResourceName;                 //@synthesize iconResourceName=_iconResourceName - In the implementation block
@property (assign,nonatomic) BOOL iconNeedsProcessing;                    //@synthesize iconNeedsProcessing=_iconNeedsProcessing - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSArray * requiredApps;                      //@synthesize requiredApps=_requiredApps - In the implementation block
@property (nonatomic,retain) NSArray * requiredCapabilities;              //@synthesize requiredCapabilities=_requiredCapabilities - In the implementation block
@property (nonatomic,readonly) NSArray * sections; 
@property (nonatomic,retain) NSString * domainIdentifier;                 //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (nonatomic,retain) NSString * iconPathIdentifier;               //@synthesize iconPathIdentifier=_iconPathIdentifier - In the implementation block
@property (nonatomic,retain) NSString * sectionFilename;                  //@synthesize sectionFilename=_sectionFilename - In the implementation block
-(BOOL)iconNeedsProcessing;
-(void)setRequiredApps:(NSArray *)arg1 ;
-(NSString *)sectionFilename;
-(NSString *)iconPathIdentifier;
-(NSString *)iconResourceName;
-(void)setIconPathIdentifier:(NSString *)arg1 ;
-(void)setIconNeedsProcessing:(BOOL)arg1 ;
-(void)setSectionFilename:(NSString *)arg1 ;
-(void)setIconResourceName:(NSString *)arg1 ;
-(NSArray *)requiredApps;
-(void)setRequiredCapabilities:(NSArray *)arg1 ;
-(NSString *)tagPhrase;
-(void)setTagPhrase:(NSString *)arg1 ;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)bundleIdentifier;
-(NSString *)displayIdentifier;
-(NSArray *)sections;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(NSArray *)requiredCapabilities;
-(NSString *)domainIdentifier;
-(void)setDisplayIdentifier:(NSString *)arg1 ;
@end

