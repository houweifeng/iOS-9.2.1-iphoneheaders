/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <UIKit/UIImageView.h>

@class NSString;

@interface AXCaptionSubtitlePreviewView : UIImageView {

	OpaqueFigSubtitleRendererRef _renderer;
	NSString* text;

}

@property (nonatomic,retain) NSString * text; 
-(void)dealloc;
-(void)didMoveToWindow;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)update;
@end

