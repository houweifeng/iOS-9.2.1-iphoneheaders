/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:21:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/AccessibilityBundles/AXElementInteractionUIServer.axuiservice/AXElementInteractionUIServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXElementInteractionUIServer/AXElementInteractionUIServer-Structs.h>
#import <UIKit/UIViewController.h>

@class AXElementInteractionCursorView;

@interface AXElementInteractionViewController : UIViewController {

	CGPathRef _cursorPath;
	AXElementInteractionCursorView* _cursorView;

}

@property (nonatomic,retain) AXElementInteractionCursorView * cursorView;              //@synthesize cursorView=_cursorView - In the implementation block
-(void)_updateCursorPath;
-(void)setCursorView:(AXElementInteractionCursorView *)arg1 ;
-(void)setCursorHidden:(BOOL)arg1 ;
-(void)setCursorFrame:(CGRect)arg1 ;
-(void)setCursorPath:(CGPathRef)arg1 ;
-(AXElementInteractionCursorView *)cursorView;
-(void)loadView;
@end

