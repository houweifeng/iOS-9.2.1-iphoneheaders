/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKit/PassKit-Structs.h>
#import <PassKit/PKWelcomeView.h>

@class UIButton;

@interface PKPassWelcomeView : PKWelcomeView {

	UIButton* _appStoreButton;

}
+(UIEdgeInsets)margins;
+(id)messageAttributedString:(BOOL)arg1 ;
+(double)headerImageRegionHeight;
+(UIEdgeInsets)textInsets;
-(void)dealloc;
-(id)init;
-(void)layoutSubviews;
-(void)_scanCodePressed;
-(void)_appStorePressed;
@end

