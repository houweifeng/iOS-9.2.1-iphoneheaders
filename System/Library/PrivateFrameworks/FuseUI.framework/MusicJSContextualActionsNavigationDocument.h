/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSNavigationDocument.h>

@class NSMutableArray;

@interface MusicJSContextualActionsNavigationDocument : IKJSNavigationDocument {

	NSMutableArray* _pendingNavigationDocumentItemsToPush;
	long long _state;

}
-(void)clear;
-(id)documents;
-(void)popDocument;
-(void)popToDocument:(id)arg1 ;
-(void)popToRootDocument;
-(void)removeDocument:(id)arg1 ;
-(id)initWithAppContext:(id)arg1 navigationController:(id)arg2 ;
-(void)pushDocument:(id)arg1 :(id)arg2 ;
-(void)replaceDocument:(id)arg1 :(id)arg2 :(id)arg3 ;
-(void)_handleUnsupportedActionWithSelector:(SEL)arg1 ;
-(id)_selectedTabNavigationDocument;
-(void)_prepareForFirstPush;
-(id)_selectedTabNavigationDocumentWithJSContext:(id)arg1 ;
-(void)insertBeforeDocument:(id)arg1 :(id)arg2 :(id)arg3 ;
@end

