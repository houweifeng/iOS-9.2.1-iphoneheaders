/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString;

@interface MCRemovalPasswordPayload : MCPayload {

	NSString* _removalPasscode;

}

@property (nonatomic,retain) NSString * removalPasscode;              //@synthesize removalPasscode=_removalPasscode - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(NSString *)removalPasscode;
-(void)setRemovalPasscode:(NSString *)arg1 ;
@end

