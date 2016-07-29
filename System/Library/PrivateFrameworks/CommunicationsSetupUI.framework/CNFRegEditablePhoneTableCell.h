/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <CommunicationsSetupUI/CNFRegEditableTableCell.h>

@class NSString;

@interface CNFRegEditablePhoneTableCell : CNFRegEditableTableCell {

	SEL _countryCodeSelector;
	NSString* _previousValue;

}
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(SCD_Struct_CN0)suggestionsForString:(id)arg1 inputIndex:(unsigned)arg2 ;
-(id)countryCode;
-(void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3 ;
@end

