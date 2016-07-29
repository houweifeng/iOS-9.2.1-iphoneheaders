/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iaptransportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/LSApplicationWorkspaceObserver.h>

@protocol LSApplicationWorkspaceObserverProtocol;
@class NSObject;

@interface IAPWorkspaceObserver : LSApplicationWorkspaceObserver {

	NSObject*<LSApplicationWorkspaceObserverProtocol> _delegate;

}

@property (assign,nonatomic) NSObject*<IAPWorkspaceObserverDelegate> delegate; 
-(void)setDelegate:(NSObject*<IAPWorkspaceObserverDelegate>)arg1 ;
-(NSObject*<IAPWorkspaceObserverDelegate>)delegate;
-(void)startObserving;
-(void)applicationsWillUninstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)stopObserving;
@end

