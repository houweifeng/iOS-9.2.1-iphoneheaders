/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/AccessibilityBundles/iBooks.axbundle/iBooks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iBooks/__AEAudiobookNowPlayingViewControllerAccessibility_super.h>

@interface AEAudiobookNowPlayingViewControllerAccessibility : __AEAudiobookNowPlayingViewControllerAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryBaseClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(void)_axUpdateTimeLabels;
-(void)_accessibilityUpdatePlayButton;
-(void)onUserDefaultChange:(id)arg1 ;
-(void)playbackRateControllerRateChanged:(id)arg1 ;
-(void)mediaPlayerPeriodicUpdate:(id)arg1 elapsed:(double)arg2 duration:(double)arg3 isFinished:(BOOL)arg4 ;
-(void)_updateMetadataLabelsWithChapter:(id)arg1 scrubberTracking:(BOOL)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)update;
-(BOOL)accessibilityPerformEscape;
-(void)pause;
-(void)play;
-(void)_accessibilityLoadAccessibilityInformation;
@end

