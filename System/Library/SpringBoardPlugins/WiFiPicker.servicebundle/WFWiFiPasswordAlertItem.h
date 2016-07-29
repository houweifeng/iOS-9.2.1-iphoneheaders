/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:46 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/SpringBoardPlugins/WiFiPicker.servicebundle/WiFiPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSString, UITextField;

@interface WFWiFiPasswordAlertItem : SBAlertItem {

	id _delegate;
	NSString* _name;
	BOOL _btStyle;
	UITextField* _textField;

}

@property (assign,nonatomic) id delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setBluetoothStyle:(BOOL)arg1 ;
-(id)initWithNetworkName:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)dismiss:(int)arg1 ;
-(void)returnKeyPressed:(id)arg1 ;
-(BOOL)dismissOnLock;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
@end

