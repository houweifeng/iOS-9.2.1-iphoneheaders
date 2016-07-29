/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/MusicSettings.bundle/MusicSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSURL;

@interface MusicStoreBag : NSObject {

	NSDictionary* _bagDictionary;

}

@property (nonatomic,readonly) NSDictionary * bagDictionary;                                             //@synthesize bagDictionary=_bagDictionary - In the implementation block
@property (nonatomic,readonly) unsigned long long librarySharedPlaylistTrackCountLimit; 
@property (nonatomic,readonly) long long minimumNumberOfDaysBetweenPresentingWelcomeScreen; 
@property (nonatomic,readonly) NSURL * prominentRadioStationInfoURL; 
@property (nonatomic,readonly) BOOL supportsConnect; 
@property (nonatomic,readonly) BOOL supportsSubscription; 
@property (nonatomic,readonly) NSDictionary * tabConfigurations; 
@property (nonatomic,readonly) long long versionForNoThanksOptOut; 
@property (nonatomic,readonly) long long versionForNotNowOptOut; 
-(id)initWithBagDictionary:(id)arg1 ;
-(id)_subscriptionDictionary;
-(long long)_optOutVersionForKey:(id)arg1 ;
-(unsigned long long)librarySharedPlaylistTrackCountLimit;
-(long long)minimumNumberOfDaysBetweenPresentingWelcomeScreen;
-(NSURL *)prominentRadioStationInfoURL;
-(BOOL)supportsConnect;
-(BOOL)supportsSubscription;
-(NSDictionary *)tabConfigurations;
-(long long)versionForNoThanksOptOut;
-(long long)versionForNotNowOptOut;
-(NSDictionary *)bagDictionary;
@end

