/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:43:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Library/Application Support/Mail/Plugins/MailAttachmentPlugin.webplugin/MailAttachmentPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MailAttachmentPlugin/MailAttachmentPlugin-Structs.h>
#import <MailAttachmentPlugin/MFAttachmentView.h>

@interface MFMailAttachmentPlugin : MFAttachmentView {

	int _displayStyle;
	unsigned long long _displayOptions;
	unsigned _hasStarted : 1;
	BOOL _hasCompletedInitialResize;

}

@property (assign,nonatomic) BOOL hasCompletedInitialResize;              //@synthesize hasCompletedInitialResize=_hasCompletedInitialResize - In the implementation block
+(id)bundle;
+(id)plugInViewWithArguments:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 arguments:(id)arg2 ;
-(void)webPlugInWillLeaveFullScreenWithFrame:(CGRect)arg1 ;
-(Class)webPlugInFullScreenWindowClass;
-(void)webPlugInWillEnterFullScreenWithFrame:(CGRect)arg1 ;
-(BOOL)webPlugInReceivesEventsDirectly;
-(void)setHasCompletedInitialResize:(BOOL)arg1 ;
-(BOOL)webPlugInHasFullScreenUI;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToSuperview;
-(void)webPlugInInitialize;
-(void)webPlugInStart;
-(void)webPlugInStop;
-(void)webPlugInDestroy;
-(void)_webViewScaleDidChange;
-(id)bundle;
-(BOOL)hasCompletedInitialResize;
-(void)setTheme:(int)arg1 ;
@end

