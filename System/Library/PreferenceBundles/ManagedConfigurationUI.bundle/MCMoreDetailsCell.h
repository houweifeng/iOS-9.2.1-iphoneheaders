/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:43 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <Preferences/PSTableCell.h>

@class MCMoreDetailsContentView;

@interface MCMoreDetailsCell : PSTableCell {

	MCMoreDetailsContentView* _mcContentView;

}
+(float)defaultHeight;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPayload:(id)arg1 ;
-(void)setCertificate:(SecCertificateRef)arg1 ;
@end

