/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/Plugins/FMF.assistantBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMF/FMFSABaseModel.h>

@class SAFmfLocation, UIImage;

@interface FMFSALocation : FMFSABaseModel {

	SAFmfLocation* siriLocation;
	UIImage* _cachedFriendImage;

}

@property (nonatomic,retain) SAFmfLocation * siriLocation; 
@property (nonatomic,retain) UIImage * cachedFriendImage;               //@synthesize cachedFriendImage=_cachedFriendImage - In the implementation block
+(id)locationWithSiriLocation:(id)arg1 ;
+(id)locationWithHandle:(id)arg1 saPerson:(id)arg2 andDictionary:(id)arg3 ;
+(id)friendImageForPersonAttribute:(id)arg1 ;
+(id)friendImageForSAPerson:(id)arg1 ;
+(id)bundle;
-(void)decodeHandle:(id)arg1 saPerson:(id)arg2 withDictionary:(id)arg3 ;
-(id)friendHandle;
-(id)prettyTimestamp;
-(void)setSiriLocation:(SAFmfLocation *)arg1 ;
-(id)initWithSiriLocation:(id)arg1 ;
-(id)initWithHandle:(id)arg1 saPerson:(id)arg2 andDictionary:(id)arg3 ;
-(id)personForEmailFromAddressBook:(id)arg1 ;
-(id)personForPhoneFromAddressBook:(id)arg1 ;
-(id)friendHandlePretty;
-(id)unformattedHandle;
-(id)friendEmail;
-(id)friendPhone;
-(id)friendLocation:(BOOL)arg1 ;
-(SAFmfLocation *)siriLocation;
-(id)friendName;
-(id)unformatPhoneNumber:(id)arg1 ;
-(id)distanceCalculator;
-(id)friendImage;
-(UIImage *)cachedFriendImage;
-(void)setCachedFriendImage:(UIImage *)arg1 ;
-(id)numberFormatter;
-(BOOL)hasCoordinate;
-(id)distanceFromLocation:(id)arg1 ;
-(BOOL)isPhone;
-(id)formatPhoneNumber:(id)arg1 ;
@end

