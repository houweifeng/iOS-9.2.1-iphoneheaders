/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <UIKit/UIWebViewDelegate.h>

@class NSString;

@interface PSSoftwareUpdateReleaseNotesDetail : PSListController <UIWebViewDelegate> {

	NSString* _releaseNotes;

}

@property (nonatomic,retain) NSString * releaseNotes;               //@synthesize releaseNotes=_releaseNotes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)loadView;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(NSString *)releaseNotes;
-(void)setReleaseNotes:(NSString *)arg1 ;
-(id)specifiers;
@end

