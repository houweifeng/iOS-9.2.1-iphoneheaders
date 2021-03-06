/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSSceneUpdater <NSObject>
@required
-(void)scene:(id)arg1 didReceiveActions:(id)arg2;
-(void)registerDelegate:(id)arg1 forSceneID:(id)arg2;
-(void)unregisterDelegateForSceneID:(id)arg1;
-(BOOL)willObserveLayersManually;
-(void)scene:(id)arg1 didAttachLayer:(id)arg2;
-(void)scene:(id)arg1 didUpdateLayer:(id)arg2;
-(void)scene:(id)arg1 didDetachLayer:(id)arg2;
-(void)scene:(id)arg1 didUpdateClientSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4;

@end

