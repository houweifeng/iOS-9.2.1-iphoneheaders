/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKOverlayPainter.h>
#import <libobjc.A.dylib/VKPolylineObserver.h>

@class VKRouteLine, VKPolylineOverlay, NSSet, VKTileKeyList, VKTimedAnimation, NSString;

@interface VKPolylineOverlayPainter : VKOverlayPainter <VKPolylineObserver> {

	VKRouteLine* _routeLine;
	double _routeLineWidthScaleRegular;
	double _routeLineHalfWidthRealisticScale;
	BOOL _selected;
	VKPolylineOverlay* _routeOverlay;
	shared_ptr<ggl::ConstantDataTyped<ggl::Tile::View> >* _viewUniforms;
	unique_ptr<vk::TrafficManager<ggl::PilledTrafficRibbonDescriptor>, std::__1::default_delete<vk::TrafficManager<ggl::PilledTrafficRibbonDescriptor> > >* _pilledTrafficManager;
	unique_ptr<vk::TrafficLayer<ggl::PilledTrafficRibbonDescriptor>, std::__1::default_delete<vk::TrafficLayer<ggl::PilledTrafficRibbonDescriptor> > >* _pilledTrafficLayer;
	unique_ptr<vk::TrafficManager<ggl::SolidTrafficRibbonDescriptor>, std::__1::default_delete<vk::TrafficManager<ggl::SolidTrafficRibbonDescriptor> > >* _solidTrafficManager;
	unique_ptr<vk::TrafficLayer<ggl::SolidTrafficRibbonDescriptor>, std::__1::default_delete<vk::TrafficLayer<ggl::SolidTrafficRibbonDescriptor> > >* _solidTrafficLayer;
	unique_ptr<vk::RouteLineArrowManager, std::__1::default_delete<vk::RouteLineArrowManager> >* _arrowManager;
	vector<std::__1::unique_ptr<vk::RouteLineArrowLayer, std::__1::default_delete<vk::RouteLineArrowLayer> >, std::__1::allocator<std::__1::unique_ptr<vk::RouteLineArrowLayer, std::__1::default_delete<vk::RouteLineArrowLayer> > > >* _arrowLayers;
	unique_ptr<vk::RouteLineManager, std::__1::default_delete<vk::RouteLineManager> >* _routeLineManager;
	unique_ptr<vk::RouteLineLayer, std::__1::default_delete<vk::RouteLineLayer> >* _routeLineLayer;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _debugRenderState;
	unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem> > >* _debugRenderItems;
	unique_ptr<ggl::FragmentedPool<ggl::Debug::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::Debug::Shader::Setup> > >* _debugShaderSetups;
	unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState> >* _debugLineRenderState;
	unique_ptr<ggl::FragmentedPool<ggl::Debug::BaseMesh>, std::__1::default_delete<ggl::FragmentedPool<ggl::Debug::BaseMesh> > >* _debugUnmatchedRouteLineMeshes;
	double _previousViewUnitsPerPoint;
	int _styleZ;
	unordered_set<GEOComposedRouteSection *, std::__1::hash<GEOComposedRouteSection *>, std::__1::equal_to<GEOComposedRouteSection *>, std::__1::allocator<GEOComposedRouteSection *> >* _selectedSections;
	fast_shared_ptr<vk::RouteLineSection>* _automobileSection;
	SCD_Struct_VK6 _matrix;
	NSSet* _previousTilesInView;
	VKTileKeyList* _previousKeysInView;
	double _simplificationEpsilon;
	VKTimedAnimation* _fadeAnimation;
	float _alphaScale;
	VKTimedAnimation* _arrowFadeAnimation;
	float _arrowAlphaScale;
	BOOL _showArrows;
	VKTimedAnimation* _arrowCrossFadeAnimation;
	BOOL _showTraffic;
	BOOL _forceRoutelineUpdate;
	int _stencilValue;
	double _contentScale;
	unsigned long long _targetDisplayStep;
	float _crossfadingDisplayStep;
	BOOL _wasInRealisticMode;
	FeatureAttributeSet* _trafficAttributes;
	TrafficMeshStyle _builtMeshStyle;
	shared_ptr<gss::StyleQuery>* _carStyleQuery;

}

@property (assign,nonatomic) BOOL selected;                                 //@synthesize selected=_selected - In the implementation block
@property (nonatomic,retain) VKPolylineOverlay * routeOverlay;              //@synthesize routeOverlay=_routeOverlay - In the implementation block
@property (assign,nonatomic) BOOL showTraffic;                              //@synthesize showTraffic=_showTraffic - In the implementation block
@property (nonatomic,readonly) VKPolylineOverlay * polyline; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(shared_ptr<gss::StyleManager>*)styleManager;
-(void)stylesheetDidChange;
-(void)flushPools;
-(void)layoutWithContext:(id)arg1 tiles:(id)arg2 keysInView:(id)arg3 ;
-(void)setContainerModel:(id)arg1 ;
-(void)gglLayoutWithContext:(id)arg1 traveledStrokeCommandBuffer:(CommandBuffer*)arg2 strokeCommandBuffer:(CommandBuffer*)arg3 traveledFillCommandBuffer:(CommandBuffer*)arg4 fillCommandBuffer:(CommandBuffer*)arg5 tiles:(id)arg6 ;
-(void)layoutDebugUnmatchedRouteLine:(id)arg1 commandBuffer:(CommandBuffer*)arg2 ;
-(void)prepareDebugLines;
-(void)prepareToDrawWithCanvas:(id)arg1 ;
-(void)_didReceiveMemoryWarning;
-(void)setRouteOverlay:(VKPolylineOverlay *)arg1 ;
-(void)gglLayoutWithContext:(id)arg1 traveledStrokeCommandBuffer:(CommandBuffer*)arg2 strokeCommandBuffer:(CommandBuffer*)arg3 traveledFillCommandBuffer:(CommandBuffer*)arg4 fillCommandBuffer:(CommandBuffer*)arg5 tiles:(id)arg6 layer:(unsigned char)arg7 ;
-(BOOL)showTraffic;
-(float)automobileRouteLineWidthForCamera:(id)arg1 canvasSize:(CGSize)arg2 ;
-(VKPolylineOverlay *)routeOverlay;
-(BOOL)_shouldShowTraffic;
-(void)_userDefaultsDidChange:(id)arg1 ;
-(void)setShowTraffic:(BOOL)arg1 ;
-(void)updateRouteLineStencilValue:(int)arg1 ;
-(void)polyline:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3 ;
-(void)setNeedsLayoutForPolyline:(id)arg1 ;
-(VKPolylineOverlay *)polyline;
-(id)initWithOverlay:(id)arg1 ;
@end

