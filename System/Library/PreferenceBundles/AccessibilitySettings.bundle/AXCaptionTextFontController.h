/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <AccessibilitySettings/AXCaptionStyleChooserController.h>

@interface AXCaptionTextFontController : AXCaptionStyleChooserController {

	CGFontRef selectedFont;

}

@property (nonatomic,retain) CGFontRef selectedFont; 
-(void)_manageEditButton;
-(void)_donePressed;
-(void)setSelectedFont:(CGFontRef)arg1 ;
-(id)_videoOverrideText;
-(void)_setVideoOverridesStyle:(id)arg1 specifier:(id)arg2 ;
-(id)_videoOverridesStyle:(id)arg1 ;
-(long long)textCategory;
-(void)_editPressed:(id)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGFontRef)selectedFont;
-(id)specifiers;
@end

