/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IPNamePreferenceInfoProvider.h>

@class NSString;

@interface IPOSXABNamePreferenceInfoProvider : NSObject <IPNamePreferenceInfoProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)domain;
+(id)nativeKeyNameToCanonicalKeyName;
+(id)canonicalKeyToValueIdentifierToNumericValueMap;
+(id)canonicalNameToNativeKeyName;
+(id)valueIdentifierToValueMapFromCanonicalKey:(id)arg1 ;
+(id)valueToValueIdentifierMapFromCanonicalKey:(id)arg1 ;
@end

