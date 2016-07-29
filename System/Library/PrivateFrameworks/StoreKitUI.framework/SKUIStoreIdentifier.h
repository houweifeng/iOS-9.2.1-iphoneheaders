/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:48 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface SKUIStoreIdentifier : NSObject <NSCopying> {

	NSNumber* _itemIdentifier;
	NSString* _podcastFeedURLIdentifier;
	long long _identiferType;

}

@property (nonatomic,readonly) NSNumber * itemIdentifier;                      //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,retain) NSString * podcastFeedURLIdentifier;              //@synthesize podcastFeedURLIdentifier=_podcastFeedURLIdentifier - In the implementation block
@property (nonatomic,readonly) long long identiferType;                        //@synthesize identiferType=_identiferType - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)longLongValue;
-(id)stringValue;
-(NSNumber *)itemIdentifier;
-(id)numberValue;
-(void)setPodcastFeedURLIdentifier:(NSString *)arg1 ;
-(id)initWithPodcastFeedURL:(id)arg1 ;
-(long long)identiferType;
-(NSString *)podcastFeedURLIdentifier;
-(id)initWithNumber:(id)arg1 ;
-(id)initWithLongLong:(long long)arg1 ;
@end

