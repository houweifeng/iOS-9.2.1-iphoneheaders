/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol SFReaderAppearanceViewControllerDelegate;
@class SFReaderAppearanceMainViewController, WBSReaderFont, NSString;

@interface _SFReaderAppearanceViewController : UIViewController <UINavigationControllerDelegate> {

	SFReaderAppearanceMainViewController* _mainViewController;
	id<SFReaderAppearanceViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SFReaderAppearanceViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WBSReaderFont * selectedFont; 
@property (nonatomic,readonly) NSString * themeName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<SFReaderAppearanceViewControllerDelegate>)arg1 ;
-(id<SFReaderAppearanceViewControllerDelegate>)delegate;
-(void)loadView;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(NSString *)themeName;
-(id)initWithInitialReaderConfiguration:(id)arg1 fontManager:(id)arg2 ;
-(WBSReaderFont *)selectedFont;
@end

