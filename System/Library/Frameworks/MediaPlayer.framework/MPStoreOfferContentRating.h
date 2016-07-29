/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSDictionary, NSString;

@interface MPStoreOfferContentRating : NSObject <NSCoding> {

	NSDictionary* _dictionary;
	long long _ratingLevel;
	NSString* _ratingDescription;
	NSString* _ratingLabel;
	unsigned long long _ratingSystem;

}

@property (getter=isRestrictedContent,nonatomic,readonly) BOOL restrictedContent; 
@property (getter=isExplicitContent,nonatomic,readonly) BOOL explicitContent; 
@property (getter=isRestrictedPurchase,nonatomic,readonly) BOOL restrictedPurchase; 
@property (nonatomic,readonly) id mediaPropertyContentRatingValue; 
@property (assign,nonatomic) long long ratingLevel;                                              //@synthesize ratingLevel=_ratingLevel - In the implementation block
@property (nonatomic,copy) NSString * ratingLabel;                                               //@synthesize ratingLabel=_ratingLabel - In the implementation block
@property (assign,nonatomic) unsigned long long ratingSystem;                                    //@synthesize ratingSystem=_ratingSystem - In the implementation block
@property (nonatomic,copy) NSString * ratingDescription;                                         //@synthesize ratingDescription=_ratingDescription - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)ratingSystemFromString:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(BOOL)isRestrictedPurchase;
-(BOOL)isRestrictedContent;
-(id)mediaPropertyContentRatingValue;
-(BOOL)_isRatingSystemForApps:(unsigned long long)arg1 ;
-(BOOL)_isRatingSystemForMovies:(unsigned long long)arg1 ;
-(BOOL)_isRatingSystemForTV:(unsigned long long)arg1 ;
-(BOOL)_isRatingSystemForMusic:(unsigned long long)arg1 ;
-(long long)ratingLevel;
-(void)setRatingLevel:(long long)arg1 ;
-(NSString *)ratingDescription;
-(void)setRatingDescription:(NSString *)arg1 ;
-(NSString *)ratingLabel;
-(void)setRatingLabel:(NSString *)arg1 ;
-(unsigned long long)ratingSystem;
-(void)setRatingSystem:(unsigned long long)arg1 ;
-(BOOL)isExplicitContent;
@end

