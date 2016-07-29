/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/NanoPreferenceBundles/Customization/CarouselLayoutSettings.bundle/CarouselLayoutSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@class CSLUILayoutViewController;

@interface CSLUILayoutNavController : UINavigationController {

	CSLUILayoutViewController* _layoutViewController;

}

@property (nonatomic,retain) CSLUILayoutViewController * layoutViewController;              //@synthesize layoutViewController=_layoutViewController - In the implementation block
-(void)resetIconPositions;
-(CSLUILayoutViewController *)layoutViewController;
-(void)setLayoutViewController:(CSLUILayoutViewController *)arg1 ;
-(id)init;
@end
