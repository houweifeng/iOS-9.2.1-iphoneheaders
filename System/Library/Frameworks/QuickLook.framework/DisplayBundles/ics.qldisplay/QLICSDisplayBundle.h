/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/QuickLook.framework/DisplayBundles/ics.qldisplay/ics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ics/ics-Structs.h>
#import <QuickLook/QLDisplayBundle.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class EKICSPreviewController, NSString;

@interface QLICSDisplayBundle : QLDisplayBundle <UIScrollViewDelegate, UIGestureRecognizerDelegate> {

	EKICSPreviewController* _icsPreviewViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIcsPreviewViewController:(id)arg1 ;
-(id)_copyController;
-(void)dealloc;
-(void)loadView;
-(void)loadWithHints:(id)arg1 ;
-(int)airPlayMode;
@end
