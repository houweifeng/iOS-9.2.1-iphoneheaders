/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/Restaurants.siriUIBundle/Restaurants
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Restaurants/Restaurants-Structs.h>
@class NSMutableDictionary;

@interface SiriRestaurantsLogoManager : NSObject {

	NSMutableDictionary* _providerDict;

}
+(id)weakSharedLogoManager;
-(id)displayNameForProvider:(id)arg1 ;
-(void)_setupLocalResources;
-(void)setPunchOut:(id)arg1 forProvider:(id)arg2 ;
-(CGSize)logoSizeForType:(long long)arg1 provider:(id)arg2 ;
-(void)getLogoForType:(long long)arg1 provider:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateWithRestaurantsSnippet:(id)arg1 ;
-(id)init;
@end

