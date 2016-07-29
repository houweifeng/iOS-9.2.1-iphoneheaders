/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/FBSSceneClientSettings.h>

@class NSSet, NSString;

@interface FBSMutableSceneClientSettings : FBSSceneClientSettings

@property (assign,nonatomic) double preferredLevel; 
@property (assign,nonatomic) long long preferredInterfaceOrientation; 
@property (nonatomic,copy) NSSet * occlusions; 
@property (nonatomic,copy) NSString * preferredSceneHostIdentifier; 
+(BOOL)_isMutable;
-(void)setPreferredLevel:(double)arg1 ;
-(void)setPreferredInterfaceOrientation:(long long)arg1 ;
-(void)setPreferredSceneHostIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)otherSettings;
-(void)setOcclusions:(NSSet *)arg1 ;
@end

