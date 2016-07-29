/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <System/System-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, UIView, NSArray;

@interface ACAssistantAlternateProviderResultView : UIView {

	UILabel* _providerNameLabel;
	UIImageView* _providerLogoImageView;
	UIView* _containerView;
	UIImageView* _chevronImageView;
	BOOL _hasSetUpConstraints;
	NSArray* _commands;

}

@property (nonatomic,retain) NSArray * commands;              //@synthesize commands=_commands - In the implementation block
-(void)_configureUsingImage:(id)arg1 ;
-(id)initWithAlternateProviderResult:(id)arg1 usingPersistentStore:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)updateConstraints;
-(void)setCommands:(NSArray *)arg1 ;
-(NSArray *)commands;
@end

