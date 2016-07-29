/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingSetBool.h>
#import <SAObjects/SASettingSettingsAction.h>

@class NSString;

@interface SASettingSetVoiceOver : SASettingSetBool <SASettingSettingsAction>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setVoiceOver;
+(id)setVoiceOverWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(id)encodedClassName;
@end

