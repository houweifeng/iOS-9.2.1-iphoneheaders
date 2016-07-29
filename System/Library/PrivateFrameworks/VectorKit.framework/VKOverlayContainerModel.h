/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKMapTileModel.h>
#import <libobjc.A.dylib/VKRouteMatchedAnnotationPresentationObserver.h>
#import <libobjc.A.dylib/VKRouteContextObserver.h>
#import <libobjc.A.dylib/VKMapLayer.h>
#import <libobjc.A.dylib/VKStyleManagerObserver.h>

@protocol VKOverlayContainerDelegate, VKRouteMatchedAnnotationPresentation, VKOverlayContainerRouteDelegate;
@class NSMutableSet, NSMutableArray, NSMapTable, VKSkyModel, VKRouteContext, NSSet, NSString;

@interface VKOverlayContainerModel : VKMapTileModel <VKRouteMatchedAnnotationPresentationObserver, VKRouteContextObserver, VKMapLayer, VKStyleManagerObserver> {

	NSMutableSet* _visibleOverlays;
	NSMutableArray* _overlayPainters;
	NSMapTable* _overlaysToPainters;
	NSMutableSet* _overlaysToAdd;
	NSMutableSet* _overlaysToRemove;
	NSMutableSet* _paintersToRemove;
	id<VKOverlayContainerDelegate> _delegate;
	BOOL _shouldCheckForOcclusion;
	BOOL _shouldOccludeTraffic;
	BOOL _shouldShowTraffic;
	BOOL _isShowingRouteInStandardMode;
	NSMapTable* _persistentOverlaysToPainters;
	NSMutableSet* _persistentOverlays;
	id<VKRouteMatchedAnnotationPresentation> _routeLineSplitAnnotation;
	VKSkyModel* _skyModel;
	id<VKOverlayContainerRouteDelegate> _routeDelegate;
	ClearItem* _clearItem;
	unsigned char _applicationState;
	VKRouteContext* _routeContext;
	shared_ptr<gss::StyleManager>* _styleManager;
	SCD_Struct_VK143 _puckPosition;

}

@property (assign,nonatomic) BOOL shouldCheckForOcclusion;                                                   //@synthesize shouldCheckForOcclusion=_shouldCheckForOcclusion - In the implementation block
@property (assign,nonatomic) id<VKOverlayContainerDelegate> delegate;                                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) SCD_Struct_VK27 puckPosition;                                                 //@synthesize puckPosition=_puckPosition - In the implementation block
@property (getter=isInRealisticMode,nonatomic,readonly) BOOL inRealisticMode; 
@property (getter=isInTransitMode,nonatomic,readonly) BOOL inTransitMode; 
@property (assign,nonatomic) BOOL shouldShowTraffic;                                                         //@synthesize shouldShowTraffic=_shouldShowTraffic - In the implementation block
@property (assign,nonatomic) BOOL shouldOccludeTraffic;                                                      //@synthesize shouldOccludeTraffic=_shouldOccludeTraffic - In the implementation block
@property (nonatomic,readonly) BOOL isShowingRouteInStandardMode;                                            //@synthesize isShowingRouteInStandardMode=_isShowingRouteInStandardMode - In the implementation block
@property (nonatomic,retain) id<VKRouteMatchedAnnotationPresentation> routeLineSplitAnnotation;              //@synthesize routeLineSplitAnnotation=_routeLineSplitAnnotation - In the implementation block
@property (nonatomic,readonly) NSSet * persistentOverlays;                                                   //@synthesize persistentOverlays=_persistentOverlays - In the implementation block
@property (nonatomic,retain) VKSkyModel * skyModel;                                                          //@synthesize skyModel=_skyModel - In the implementation block
@property (assign,nonatomic) id<VKOverlayContainerRouteDelegate> routeDelegate;                              //@synthesize routeDelegate=_routeDelegate - In the implementation block
@property (nonatomic,retain) VKRouteContext * routeContext;                                                  //@synthesize routeContext=_routeContext - In the implementation block
@property (assign,nonatomic) shared_ptr<gss::StyleManager>* styleManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)reloadOnStylesheetChange;
-(void)setDelegate:(id<VKOverlayContainerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<VKOverlayContainerDelegate>)delegate;
-(void)reset;
-(void)didReceiveMemoryWarning:(BOOL)arg1 ;
-(id<VKRouteMatchedAnnotationPresentation>)routeLineSplitAnnotation;
-(void)setStyleManager:(shared_ptr<gss::StyleManager>*)arg1 ;
-(shared_ptr<gss::StyleManager>*)styleManager;
-(NSSet *)persistentOverlays;
-(void)updatedMatchedSection:(fast_shared_ptr<vk::RouteLineSection>*)arg1 index:(PolylineCoordinate*)arg2 ;
-(void)layoutScene:(id)arg1 withContext:(id)arg2 ;
-(BOOL)shouldLayoutWithoutStyleManager;
-(void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(RenderQueue*)arg3 ;
-(void)setShouldShowTraffic:(BOOL)arg1 ;
-(id<VKOverlayContainerRouteDelegate>)routeDelegate;
-(void)setRouteDelegate:(id<VKOverlayContainerRouteDelegate>)arg1 ;
-(unsigned long long)mapLayerPosition;
-(void)setSkyModel:(VKSkyModel *)arg1 ;
-(void)setShouldOccludeTraffic:(BOOL)arg1 ;
-(void)stylesheetDidChange;
-(void)setShouldCheckForOcclusion:(BOOL)arg1 ;
-(VKSkyModel *)skyModel;
-(void)_updatePainterOrdering;
-(void)addPainterToRemove:(id)arg1 ;
-(BOOL)isInRealisticMode;
-(BOOL)shouldShowTraffic;
-(BOOL)isShowingRouteInStandardMode;
-(VKRouteContext *)routeContext;
-(BOOL)shouldCheckForOcclusion;
-(BOOL)shouldOccludeTraffic;
-(BOOL)isInTransitMode;
-(SCD_Struct_VK27)puckPosition;
-(void)routeContextStateDidChange:(id)arg1 ;
-(void)setApplicationState:(unsigned char)arg1 ;
-(void)addPersistentOverlay:(id)arg1 ;
-(void)setRouteLineSplitAnnotation:(id<VKRouteMatchedAnnotationPresentation>)arg1 ;
-(void)removePersistentOverlay:(id)arg1 ;
-(void)setRouteContext:(VKRouteContext *)arg1 ;
-(void)annotationPresentationDidChangePresentationCoordinate:(id)arg1 ;
@end

