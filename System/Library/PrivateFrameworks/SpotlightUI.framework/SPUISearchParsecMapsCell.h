/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightUI/SPUISearchTableViewCell.h>
#import <libobjc.A.dylib/SPUISearchContactButtonsViewDelegate.h>

@class _MKResultView, NSLayoutConstraint, NSString;

@interface SPUISearchParsecMapsCell : SPUISearchTableViewCell <SPUISearchContactButtonsViewDelegate> {

	_MKResultView* _resultView;
	NSLayoutConstraint* _heightConstraint;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSection:(id)arg1 result:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)constantConstraints;
-(void)buttonPressedWithType:(unsigned long long)arg1 ;
-(void)updateWithSection:(id)arg1 result:(id)arg2 traitCollection:(id)arg3 ;
@end

