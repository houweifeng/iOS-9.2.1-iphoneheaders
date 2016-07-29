/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, NSDictionary;

@interface SBSRemoteAlertConfiguration : NSObject <BSXPCCoding, BSDescriptionProviding> {

	NSString* _serviceName;
	NSString* _vcClassName;
	NSDictionary* _userInfo;
	NSString* _impersonatedCarPlayAppIdentifier;
	BOOL _forCarPlay;

}

@property (nonatomic,readonly) NSString * serviceName;                                 //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) NSString * viewControllerClassName;                     //@synthesize vcClassName=_vcClassName - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                                  //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) NSString * impersonatedCarPlayAppIdentifier;              //@synthesize impersonatedCarPlayAppIdentifier=_impersonatedCarPlayAppIdentifier - In the implementation block
@property (assign,getter=isForCarPlay,nonatomic) BOOL forCarPlay;                      //@synthesize forCarPlay=_forCarPlay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)serviceName;
-(id)initWithServiceName:(id)arg1 viewControllerClassName:(id)arg2 ;
-(void)setImpersonatedCarPlayAppIdentifier:(NSString *)arg1 ;
-(void)setForCarPlay:(BOOL)arg1 ;
-(NSString *)viewControllerClassName;
-(NSString *)impersonatedCarPlayAppIdentifier;
-(BOOL)isForCarPlay;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
@end

