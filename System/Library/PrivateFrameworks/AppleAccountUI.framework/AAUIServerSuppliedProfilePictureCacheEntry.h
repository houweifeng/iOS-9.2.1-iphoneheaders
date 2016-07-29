/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, UIImage, NSString;

@interface AAUIServerSuppliedProfilePictureCacheEntry : NSObject {

	NSDate* _expirationDate;
	BOOL _updating;
	UIImage* _picture;
	NSString* _serverCacheTag;

}

@property (nonatomic,retain) UIImage * picture;                    //@synthesize picture=_picture - In the implementation block
@property (nonatomic,copy) NSString * serverCacheTag;              //@synthesize serverCacheTag=_serverCacheTag - In the implementation block
@property (assign,nonatomic) BOOL updating;                        //@synthesize updating=_updating - In the implementation block
@property (nonatomic,readonly) BOOL expired; 
-(id)description;
-(UIImage *)picture;
-(void)setPicture:(UIImage *)arg1 ;
-(void)setUpdating:(BOOL)arg1 ;
-(BOOL)expired;
-(void)expire;
-(NSString *)serverCacheTag;
-(void)setServerCacheTag:(NSString *)arg1 ;
-(BOOL)updating;
@end

