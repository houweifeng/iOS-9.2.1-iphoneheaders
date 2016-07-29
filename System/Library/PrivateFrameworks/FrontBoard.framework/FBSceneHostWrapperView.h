/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/_FBSceneGeometryObserver.h>
#import <libobjc.A.dylib/FBSceneLayerManagerObserver.h>
#import <libobjc.A.dylib/FBSceneLayerHostContainerViewDataSource.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/FBSceneHostView.h>

@protocol FBSceneHostViewDelegate;
@class FBScene, NSString, FBSceneLayerManager, FBSceneHostManager, FBSceneLayerHostContainerView, NSMutableSet, UIColor, NSSet;

@interface FBSceneHostWrapperView : UIView <_FBSceneGeometryObserver, FBSceneLayerManagerObserver, FBSceneLayerHostContainerViewDataSource, BSDescriptionProviding, FBSceneHostView> {

	FBScene* _scene;
	NSString* _requester;
	FBSceneLayerManager* _layerManager;
	FBSceneHostManager* _manager;
	FBSceneLayerHostContainerView* _hostContainerView;
	NSMutableSet* _hiddenLayers;
	unsigned long long _appearanceStyle;
	UIColor* _backgroundColorWhileNotHosting;
	UIColor* _backgroundColorWhileHosting;
	unsigned long long _hostedLayerTypes;
	BOOL _usingDefaultLayerTypes;
	id<FBSceneHostViewDelegate> _delegate;

}

@property (nonatomic,retain,readonly) FBScene * scene;                                       //@synthesize scene=_scene - In the implementation block
@property (nonatomic,copy,readonly) NSString * requester;                                    //@synthesize requester=_requester - In the implementation block
@property (nonatomic,retain,readonly) NSSet * hiddenLayers;                                  //@synthesize hiddenLayers=_hiddenLayers - In the implementation block
@property (nonatomic,retain,readonly) NSSet * hostingDisabledLayers; 
@property (nonatomic,retain) FBSceneLayerHostContainerView * hostContainerView;              //@synthesize hostContainerView=_hostContainerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIColor * backgroundColorWhileHosting; 
@property (nonatomic,retain) UIColor * backgroundColorWhileNotHosting; 
@property (assign,nonatomic) unsigned long long hostedLayerTypes;                            //@synthesize hostedLayerTypes=_hostedLayerTypes - In the implementation block
@property (assign,nonatomic) unsigned long long appearanceStyle;                             //@synthesize appearanceStyle=_appearanceStyle - In the implementation block
@property (getter=isHosting,nonatomic,readonly) BOOL hosting; 
@property (nonatomic,readonly) CGRect referenceFrame; 
@property (nonatomic,readonly) double level; 
@property (getter=isContextHosted,nonatomic,readonly) BOOL contextHosted; 
@property (assign,nonatomic) id<FBSceneHostViewDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<FBSceneHostViewDelegate>)arg1 ;
-(void)dealloc;
-(id)window;
-(NSString *)description;
-(NSString *)debugDescription;
-(id<FBSceneHostViewDelegate>)delegate;
-(void)invalidate;
-(id)_hitTest:(CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3 ;
-(double)level;
-(CGRect)referenceFrame;
-(NSString *)requester;
-(void)updateBackgroundColor;
-(void)setDefaultHostedLayerTypes:(unsigned long long)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)setAppearanceStyle:(unsigned long long)arg1 ;
-(id)succinctDescription;
-(NSSet *)hiddenLayers;
-(void)setLayer:(id)arg1 hidden:(BOOL)arg2 ;
-(UIColor *)backgroundColorWhileHosting;
-(NSSet *)hostingDisabledLayers;
-(id)initWithScene:(id)arg1 requester:(id)arg2 ;
-(void)setHostContainerView:(FBSceneLayerHostContainerView *)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)isHosting;
-(id)layersForHostContainerView:(id)arg1 ;
-(void)sceneLayerManager:(id)arg1 didRepositionLayer:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4 ;
-(void)_scene:(id)arg1 didChangeLayoutWithAnimationSettings:(id)arg2 ;
-(void)_setAppearanceStyle:(unsigned long long)arg1 force:(BOOL)arg2 ;
-(void)_hostingStatusChanged;
-(void)_toggleBackgroundColorIfNecessary;
-(BOOL)_isReallyHosting;
-(id)_backgroundColorWhileHosting;
-(id)_backgroundColorWhileNotHosting;
-(id)_stringForAppearanceStyle;
-(void)setBackgroundColorWhileHosting:(UIColor *)arg1 ;
-(UIColor *)backgroundColorWhileNotHosting;
-(void)setBackgroundColorWhileNotHosting:(UIColor *)arg1 ;
-(unsigned long long)hostedLayerTypes;
-(void)setHostedLayerTypes:(unsigned long long)arg1 ;
-(unsigned long long)appearanceStyle;
-(BOOL)isContextHosted;
-(FBSceneLayerHostContainerView *)hostContainerView;
-(FBScene *)scene;
@end

