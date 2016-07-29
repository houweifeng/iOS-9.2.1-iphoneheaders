/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SUItemReviewStatistics : NSObject <NSCopying> {

	float _averageUserRating;
	long long _numberOfUserRatings;
	NSString* _numberOfUserRatingsString;
	long long _numberOfUserReviews;
	NSString* _numberOfUserReviewsString;

}

@property (assign,nonatomic) float averageUserRating;                         //@synthesize averageUserRating=_averageUserRating - In the implementation block
@property (assign,nonatomic) long long numberOfUserRatings;                   //@synthesize numberOfUserRatings=_numberOfUserRatings - In the implementation block
@property (nonatomic,copy) NSString * numberOfUserRatingsString;              //@synthesize numberOfUserRatingsString=_numberOfUserRatingsString - In the implementation block
@property (assign,nonatomic) long long numberOfUserReviews;                   //@synthesize numberOfUserReviews=_numberOfUserReviews - In the implementation block
@property (nonatomic,copy) NSString * numberOfUserReviewsString;              //@synthesize numberOfUserReviewsString=_numberOfUserReviewsString - In the implementation block
-(void)dealloc;
-(id)initWithDictionary:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)averageUserRating;
-(void)setAverageUserRating:(float)arg1 ;
-(NSString *)numberOfUserRatingsString;
-(void)setNumberOfUserRatingsString:(NSString *)arg1 ;
-(long long)numberOfUserReviews;
-(void)setNumberOfUserReviews:(long long)arg1 ;
-(NSString *)numberOfUserReviewsString;
-(void)setNumberOfUserReviewsString:(NSString *)arg1 ;
-(long long)numberOfUserRatings;
-(void)setNumberOfUserRatings:(long long)arg1 ;
@end

