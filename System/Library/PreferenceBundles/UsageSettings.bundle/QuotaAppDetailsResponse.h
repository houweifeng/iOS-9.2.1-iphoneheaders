/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/UsageSettings.bundle/UsageSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AAResponse.h>

@class NSMutableArray, NSArray;

@interface QuotaAppDetailsResponse : AAResponse {

	NSMutableArray* _apps;

}

@property (nonatomic,readonly) NSArray * apps;              //@synthesize apps=_apps - In the implementation block
-(void)addApps:(id)arg1 ;
-(id)description;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSArray *)apps;
@end

