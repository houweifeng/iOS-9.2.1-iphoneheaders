/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/StocksBridgeSettings.bundle/StocksBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@interface StocksSPSettingsDefaultStockController : PSListController {

	long long _selectedRow;

}
+(void)launchStocksApp;
+(void)wakeExtensionForWatchApp;
+(id)stocksList;
-(void)_setDefaultStocks:(id)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)returnPressedAtEnd;
-(id)specifiers;
@end

