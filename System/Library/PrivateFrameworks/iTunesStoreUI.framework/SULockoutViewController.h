/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUViewController.h>

@class UIImage, NSBundle, NSString;

@interface SULockoutViewController : SUViewController {

	UIImage* _image;
	NSBundle* _localizationBundle;
	NSString* _messageBody;
	NSString* _messageTitle;

}

@property (nonatomic,retain) UIImage * image;                            //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) NSString * messageBody;                     //@synthesize messageBody=_messageBody - In the implementation block
@property (nonatomic,retain) NSString * messageTitle;                    //@synthesize messageTitle=_messageTitle - In the implementation block
@property (nonatomic,retain) NSBundle * localizationBundle;              //@synthesize localizationBundle=_localizationBundle - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)loadView;
-(UIImage *)image;
-(id)copyArchivableContext;
-(NSBundle *)localizationBundle;
-(NSString *)messageTitle;
-(NSString *)messageBody;
-(void)setLocalizationBundle:(NSBundle *)arg1 ;
-(void)setMessageBody:(NSString *)arg1 ;
-(void)setMessageTitle:(NSString *)arg1 ;
@end

