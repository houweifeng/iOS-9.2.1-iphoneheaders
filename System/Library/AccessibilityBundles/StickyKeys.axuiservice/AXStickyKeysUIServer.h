/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/AccessibilityBundles/StickyKeys.axuiservice/StickyKeys
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AXUIService.h>

@class AXStickyKeysViewController, NSString;

@interface AXStickyKeysUIServer : NSObject <AXUIService> {

	AXStickyKeysViewController* _stickyKeysViewController;

}

@property (nonatomic,retain) AXStickyKeysViewController * stickyKeysViewController;              //@synthesize stickyKeysViewController=_stickyKeysViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_playSoundForState:(long long)arg1 ;
-(AXStickyKeysViewController *)stickyKeysViewController;
-(void)_handleStickyKeyUpdatedWithKeycode:(unsigned short)arg1 usagePage:(unsigned)arg2 state:(long long)arg3 ;
-(void)_handleStickyKeysDisabled;
-(void)_handleStickyKeysToggledViaShift;
-(void)_showUIIfNeeded;
-(void)setStickyKeysViewController:(AXStickyKeysViewController *)arg1 ;
-(id)processMessage:(id)arg1 withIdentifier:(unsigned long long)arg2 fromClientWithIdentifier:(id)arg3 error:(id*)arg4 ;
@end

