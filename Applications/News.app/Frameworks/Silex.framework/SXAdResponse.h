/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SXAdRequest, ADBannerView;

@interface SXAdResponse : NSObject {

	SXAdRequest* _request;
	ADBannerView* _bannerView;

}

@property (nonatomic,retain) SXAdRequest * request;                  //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) ADBannerView * bannerView;              //@synthesize bannerView=_bannerView - In the implementation block
-(SXAdRequest *)request;
-(void)setRequest:(SXAdRequest *)arg1 ;
-(void)setBannerView:(ADBannerView *)arg1 ;
-(ADBannerView *)bannerView;
@end

