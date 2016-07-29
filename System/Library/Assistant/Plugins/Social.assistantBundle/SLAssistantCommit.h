/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/Plugins/Social.assistantBundle/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObjectCommit.h>

@protocol SLAssistantServiceHandler, SLAssistantPostDelegate;
@class NSObject;

@interface SLAssistantCommit : SADomainObjectCommit {

	NSObject*<SLAssistantServiceHandler> _handlerObject;
	NSObject*<SLAssistantPostDelegate> _handlerDelegate;

}
-(void)_finishWithCompletion:(/*^block*/id)arg1 result:(id)arg2 ;
-(void)_cleanupHandler;
-(void)dealloc;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 serviceHelper:(id)arg2 ;
@end

