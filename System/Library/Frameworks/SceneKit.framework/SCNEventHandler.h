/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SCNView;

@interface SCNEventHandler : NSObject {

	SCNView* _view;

}

@property (readonly) SCNView * view; 
-(void)dealloc;
-(id)init;
-(SCNView *)view;
-(id)gestureRecognizers;
-(void)setView:(SCNView *)arg1 ;
-(void)viewWillDraw;
-(void)sceneWillChange;
-(void)sceneDidChange;
-(void)viewDidDraw;
-(void)cameraWillChange;
-(void)cameraDidChange;
-(BOOL)wantsRedraw;
@end

