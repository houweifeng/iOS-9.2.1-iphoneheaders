/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface UIWebClipLinkTag : NSObject {

	BOOL _mediaMatchesPortraitOrientation;
	BOOL _mediaMatchesLandscapeOrientation;
	NSString* _href;
	NSString* _rel;
	NSString* _sizes;

}

@property (nonatomic,copy) NSString * href;                                      //@synthesize href=_href - In the implementation block
@property (nonatomic,readonly) NSURL * hrefURL; 
@property (nonatomic,copy) NSString * rel;                                       //@synthesize rel=_rel - In the implementation block
@property (nonatomic,copy) NSString * sizes;                                     //@synthesize sizes=_sizes - In the implementation block
@property (assign,nonatomic) BOOL mediaMatchesPortraitOrientation;               //@synthesize mediaMatchesPortraitOrientation=_mediaMatchesPortraitOrientation - In the implementation block
@property (assign,nonatomic) BOOL mediaMatchesLandscapeOrientation;              //@synthesize mediaMatchesLandscapeOrientation=_mediaMatchesLandscapeOrientation - In the implementation block
-(NSURL *)hrefURL;
-(NSString *)href;
-(void)setHref:(NSString *)arg1 ;
-(NSString *)rel;
-(void)setRel:(NSString *)arg1 ;
-(NSString *)sizes;
-(void)setSizes:(NSString *)arg1 ;
-(BOOL)mediaMatchesPortraitOrientation;
-(void)setMediaMatchesPortraitOrientation:(BOOL)arg1 ;
-(BOOL)mediaMatchesLandscapeOrientation;
-(void)setMediaMatchesLandscapeOrientation:(BOOL)arg1 ;
@end

