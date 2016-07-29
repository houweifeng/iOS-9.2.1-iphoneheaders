/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSString, SKUIArtworkList, SKUILink;

@interface SKUICarouselItem : NSObject {

	NSString* _accessibilityLabel;
	SKUIArtworkList* _artworkList;
	long long _carouselItemIdentifier;
	SKUILink* _link;

}

@property (nonatomic,readonly) NSString * accessibilityLabel;                 //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,readonly) long long carouselItemIdentifier;              //@synthesize carouselItemIdentifier=_carouselItemIdentifier - In the implementation block
@property (nonatomic,readonly) SKUILink * link;                               //@synthesize link=_link - In the implementation block
-(id)description;
-(NSString *)accessibilityLabel;
-(SKUILink *)link;
-(id)artworkForSize:(CGSize)arg1 ;
-(void)_setLinkItem:(id)arg1 ;
-(id)initWithComponentContext:(id)arg1 ;
-(long long)carouselItemIdentifier;
@end

