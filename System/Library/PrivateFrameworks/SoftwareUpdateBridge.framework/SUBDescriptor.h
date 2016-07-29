/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateBridge.framework/SoftwareUpdateBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class SUBDocumentation, NSString, NSError;

@interface SUBDescriptor : NSObject <NSSecureCoding> {

	BOOL _userDidAcceptTermsAndConditions;
	BOOL _willProceedWithInstallation;
	BOOL _isAwaitingAdmissionControlForInstallation;
	SUBDocumentation* _documentation;
	NSString* _productVersion;
	NSString* _productBuildVersion;
	NSString* _documentationID;
	NSString* _marketingVersion;
	NSString* _publisher;
	NSString* _productSystemName;
	long long _downloadSize;
	long long _installationSize;
	long long _totalRequiredFreeSpace;
	NSError* _denialReasons;
	long long _unarchivedSize;
	long long _msuPrepareSize;
	long long _msuHandle;

}

@property (nonatomic,retain) SUBDocumentation * documentation;                            //@synthesize documentation=_documentation - In the implementation block
@property (nonatomic,retain) NSString * productVersion;                                   //@synthesize productVersion=_productVersion - In the implementation block
@property (nonatomic,retain) NSString * productBuildVersion;                              //@synthesize productBuildVersion=_productBuildVersion - In the implementation block
@property (nonatomic,retain) NSString * documentationID;                                  //@synthesize documentationID=_documentationID - In the implementation block
@property (nonatomic,retain) NSString * marketingVersion;                                 //@synthesize marketingVersion=_marketingVersion - In the implementation block
@property (nonatomic,retain) NSString * publisher;                                        //@synthesize publisher=_publisher - In the implementation block
@property (nonatomic,retain) NSString * productSystemName;                                //@synthesize productSystemName=_productSystemName - In the implementation block
@property (assign,nonatomic) long long downloadSize;                                      //@synthesize downloadSize=_downloadSize - In the implementation block
@property (nonatomic,readonly) long long preparationSize; 
@property (assign,nonatomic) long long installationSize;                                  //@synthesize installationSize=_installationSize - In the implementation block
@property (assign,nonatomic) long long totalRequiredFreeSpace;                            //@synthesize totalRequiredFreeSpace=_totalRequiredFreeSpace - In the implementation block
@property (nonatomic,retain,readonly) NSString * humanReadableUpdateName; 
@property (assign,nonatomic) BOOL userDidAcceptTermsAndConditions;                        //@synthesize userDidAcceptTermsAndConditions=_userDidAcceptTermsAndConditions - In the implementation block
@property (nonatomic,retain) NSError * denialReasons;                                     //@synthesize denialReasons=_denialReasons - In the implementation block
@property (assign,nonatomic) long long unarchivedSize;                                    //@synthesize unarchivedSize=_unarchivedSize - In the implementation block
@property (assign,nonatomic) long long msuPrepareSize;                                    //@synthesize msuPrepareSize=_msuPrepareSize - In the implementation block
@property (assign,nonatomic) long long msuHandle;                                         //@synthesize msuHandle=_msuHandle - In the implementation block
@property (assign,nonatomic) BOOL willProceedWithInstallation;                            //@synthesize willProceedWithInstallation=_willProceedWithInstallation - In the implementation block
@property (assign,nonatomic) BOOL isAwaitingAdmissionControlForInstallation;              //@synthesize isAwaitingAdmissionControlForInstallation=_isAwaitingAdmissionControlForInstallation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copy;
-(long long)compare:(id)arg1 ;
-(void)setProductVersion:(NSString *)arg1 ;
-(long long)downloadSize;
-(void)setPublisher:(NSString *)arg1 ;
-(NSString *)productVersion;
-(void)setProductBuildVersion:(NSString *)arg1 ;
-(SUBDocumentation *)documentation;
-(NSString *)publisher;
-(NSString *)humanReadableUpdateName;
-(NSString *)productBuildVersion;
-(long long)totalRequiredFreeSpace;
-(long long)installationSize;
-(void)setDocumentation:(SUBDocumentation *)arg1 ;
-(long long)preparationSize;
-(NSString *)productSystemName;
-(void)setProductSystemName:(NSString *)arg1 ;
-(void)setDownloadSize:(long long)arg1 ;
-(void)setInstallationSize:(long long)arg1 ;
-(BOOL)willProceedWithInstallation;
-(BOOL)isAwaitingAdmissionControlForInstallation;
-(NSError *)denialReasons;
-(void)setUserDidAcceptTermsAndConditions:(BOOL)arg1 ;
-(NSString *)documentationID;
-(NSString *)marketingVersion;
-(long long)unarchivedSize;
-(long long)msuPrepareSize;
-(BOOL)userDidAcceptTermsAndConditions;
-(void)setDocumentationID:(NSString *)arg1 ;
-(void)setMarketingVersion:(NSString *)arg1 ;
-(void)setTotalRequiredFreeSpace:(long long)arg1 ;
-(void)setDenialReasons:(NSError *)arg1 ;
-(void)setUnarchivedSize:(long long)arg1 ;
-(void)setMsuPrepareSize:(long long)arg1 ;
-(long long)msuHandle;
-(void)setMsuHandle:(long long)arg1 ;
-(void)setWillProceedWithInstallation:(BOOL)arg1 ;
-(void)setIsAwaitingAdmissionControlForInstallation:(BOOL)arg1 ;
@end

