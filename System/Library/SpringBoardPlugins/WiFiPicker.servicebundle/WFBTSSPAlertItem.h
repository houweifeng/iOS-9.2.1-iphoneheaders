/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:46 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/SpringBoardPlugins/WiFiPicker.servicebundle/WiFiPicker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSString, NSNumber;

@interface WFBTSSPAlertItem : SBAlertItem {

	id _delegate;
	NSString* _name;
	NSNumber* _number;

}

@property (assign,nonatomic) id delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithName:(id)arg1 andComparison:(id)arg2 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)doesNotRecognizeSelector:(SEL)arg1 ;
-(void)dismiss:(int)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
@end

