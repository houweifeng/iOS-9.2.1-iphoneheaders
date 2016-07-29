/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUExtrasTemplateViewController.h>

@class MPUExtrasBannerController, MPUExtrasGridElementViewController;

@interface MPUExtrasGalleryTemplateViewController : MPUExtrasTemplateViewController {

	MPUExtrasBannerController* _bannerController;
	MPUExtrasGridElementViewController* _gridViewController;
	unsigned long long _selectedItemIndex;

}

@property (assign,nonatomic) unsigned long long selectedItemIndex;              //@synthesize selectedItemIndex=_selectedItemIndex - In the implementation block
-(id)contentScrollView;
-(void)viewDidLoad;
-(BOOL)showsPlaceholder;
-(id)templateElement;
-(unsigned long long)selectedItemIndex;
-(void)setSelectedItemIndex:(unsigned long long)arg1 ;
-(void)_prepareLayout;
@end

