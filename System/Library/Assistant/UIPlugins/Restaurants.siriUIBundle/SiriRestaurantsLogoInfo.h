/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/Restaurants.siriUIBundle/Restaurants
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, SAUIAppPunchOut;

@interface SiriRestaurantsLogoInfo : NSObject {

	UIImage* _logoImage;
	UIImage* _pressedImage;
	SAUIAppPunchOut* _punchOut;

}

@property (nonatomic,retain) UIImage * logoImage;                     //@synthesize logoImage=_logoImage - In the implementation block
@property (nonatomic,retain) UIImage * pressedImage;                  //@synthesize pressedImage=_pressedImage - In the implementation block
@property (nonatomic,retain) SAUIAppPunchOut * punchOut;              //@synthesize punchOut=_punchOut - In the implementation block
-(void)setPressedImage:(UIImage *)arg1 ;
-(UIImage *)pressedImage;
-(SAUIAppPunchOut *)punchOut;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
-(void)setLogoImage:(UIImage *)arg1 ;
-(UIImage *)logoImage;
@end

