/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivity.h>

@class UIDocumentInteractionController;

@interface _UIDelegatingActionActivity : UIActivity {

	UIDocumentInteractionController* _documentInteractionController;
	SEL _action;

}
-(id)activityType;
-(id)_activityImage;
-(id)activityTitle;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(id)initWithDocumentInteractionController:(id)arg1 forAction:(SEL)arg2 ;
@end

