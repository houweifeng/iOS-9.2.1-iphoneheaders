/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKAnnotationMarkerLayer.h>
#import <libobjc.A.dylib/MKCalloutSource.h>
#import <libobjc.A.dylib/VKAnchorDelegate.h>
#import <libobjc.A.dylib/VKTrackableAnnotationPresentation.h>

@protocol VKAnnotation, VKAnnotationMarkerDelegate;
@class NSString, UIView, VKTimedAnimation, VKAnchor;

@interface VKAnnotationMarker : VKAnnotationMarkerLayer <MKCalloutSource, VKAnchorDelegate, VKTrackableAnnotationPresentation> {

	id<VKAnnotation> _annotation;
	NSString* _reuseIdentifier;
	VKPoint _projectedPoint;
	VKPoint _projectedGroundPoint;
	BOOL _selected;
	BOOL _canShowCallout;
	long long _dragState;
	BOOL _draggable;
	BOOL _tracking;
	BOOL _animatingToCoordinate;
	VKTimedAnimation* _coordinateAnimation;
	BOOL _followsTerrain;
	CGSize _presentationCoordinate;
	CGPoint _presentationPoint;
	BOOL _useScreenSpacePoint;
	float _dropFraction;
	VKAnchor* _anchor;
	SCD_Struct_VK270 _styleTransitionState;
	id<VKAnnotationMarkerDelegate> _delegate;
	BOOL _hidden;
	CGPoint _calloutOffset;

}

@property (nonatomic,retain) UIView * leftCalloutAccessoryView; 
@property (nonatomic,retain) UIView * rightCalloutAccessoryView; 
@property (nonatomic,retain) UIView * detailCalloutAccessoryView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (assign,nonatomic) id<VKAnnotationMarkerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * reuseIdentifier;                         //@synthesize reuseIdentifier=_reuseIdentifier - In the implementation block
@property (nonatomic,retain) id<VKAnnotation> annotation;                          //@synthesize annotation=_annotation - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (assign,nonatomic) CGSize presentationCoordinate; 
@property (assign,nonatomic) CGPoint presentationPoint; 
@property (assign,nonatomic) BOOL useScreenSpacePoint;                             //@synthesize useScreenSpacePoint=_useScreenSpacePoint - In the implementation block
@property (assign,nonatomic) BOOL followsTerrain;                                  //@synthesize followsTerrain=_followsTerrain - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                      //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) BOOL canShowCallout;                                  //@synthesize canShowCallout=_canShowCallout - In the implementation block
@property (assign,nonatomic) CGPoint calloutOffset;                                //@synthesize calloutOffset=_calloutOffset - In the implementation block
@property (assign,getter=isDraggable,nonatomic) BOOL draggable;                    //@synthesize draggable=_draggable - In the implementation block
@property (assign,nonatomic) long long dragState;                                  //@synthesize dragState=_dragState - In the implementation block
@property (assign,nonatomic) SCD_Struct_VK271 styleTransitionState;                //@synthesize styleTransitionState=_styleTransitionState - In the implementation block
@property (nonatomic,readonly) BOOL canAnimateIn; 
@property (assign,getter=isTracking,nonatomic) BOOL tracking; 
@property (assign,nonatomic) BOOL animatingToCoordinate;                           //@synthesize animatingToCoordinate=_animatingToCoordinate - In the implementation block
@property (assign,nonatomic) BOOL hidden;                                          //@synthesize hidden=_hidden - In the implementation block
@property (assign,nonatomic) VKPoint projectedPoint;                               //@synthesize projectedPoint=_projectedPoint - In the implementation block
@property (assign,nonatomic) VKPoint projectedGroundPoint;                         //@synthesize projectedGroundPoint=_projectedGroundPoint - In the implementation block
@property (assign,nonatomic) float dropFraction;                                   //@synthesize dropFraction=_dropFraction - In the implementation block
+(id)keyPathsForValuesAffectingTitle;
+(unsigned long long)_selectedZIndex;
+(unsigned long long)_zIndex;
+(id)keyPathsForValuesAffectingSubtitle;
-(void)setDetailCalloutAccessoryView:(UIView *)arg1 ;
-(UIView *)rightCalloutAccessoryView;
-(void)setLeftCalloutAccessoryView:(UIView *)arg1 ;
-(UIView *)detailCalloutAccessoryView;
-(void)_setHiddenForOffscreen:(BOOL)arg1 ;
-(UIView *)leftCalloutAccessoryView;
-(void)setRightCalloutAccessoryView:(UIView *)arg1 ;
-(void)setDelegate:(id<VKAnnotationMarkerDelegate>)arg1 ;
-(void)dealloc;
-(void)setHidden:(BOOL)arg1 ;
-(id)init;
-(id<VKAnnotationMarkerDelegate>)delegate;
-(NSString *)title;
-(BOOL)isTracking;
-(NSString *)reuseIdentifier;
-(BOOL)isSelected;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(void)setTracking:(BOOL)arg1 ;
-(NSString *)subtitle;
-(BOOL)isPersistent;
-(id<VKAnnotation>)annotation;
-(void)setAnnotation:(id<VKAnnotation>)arg1 ;
-(void)setPresentationPoint:(CGPoint)arg1 ;
-(CGPoint)presentationPoint;
-(SCD_Struct_VK271)styleTransitionState;
-(void)setStyleTransitionState:(SCD_Struct_VK271)arg1 ;
-(BOOL)canAnimateIn;
-(BOOL)useScreenSpacePoint;
-(void)setUseScreenSpacePoint:(BOOL)arg1 ;
-(float)dropFraction;
-(void)animateFromCoordinate:(CGSize)arg1 duration:(double)arg2 ;
-(CGRect)frameWithCanvasSize:(CGSize)arg1 ;
-(CGPoint)pointToDropAtForPoint:(CGPoint)arg1 ;
-(double)animateInWithCanvasSize:(CGSize)arg1 delay:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setProjectedPoint:(VKPoint)arg1 ;
-(CGRect)significantFrameWithCanvasSize:(CGSize)arg1 ;
-(VKPoint)projectedGroundPoint;
-(void)setProjectedGroundPoint:(VKPoint)arg1 ;
-(VKPoint)projectedPoint;
-(BOOL)followsTerrain;
-(id)anchorWithContext:(id)arg1 ;
-(VKPoint)pointInWorldWithContext:(id)arg1 ;
-(void)setDropFraction:(float)arg1 ;
-(BOOL)animatingToCoordinate;
-(void)anchorWorldPointDidChange:(void*)arg1 ;
-(CGPoint)calloutAnchorPointWithCanvasSize:(CGSize)arg1 canvasScale:(double)arg2 snapToPixels:(BOOL)arg3 ;
-(CGPoint)screenPointToScrollRelativeToWithCanvasSize:(CGSize)arg1 canvasScale:(double)arg2 ;
-(id)debugAnchorPointString;
-(void)setDragState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setDragState:(long long)arg1 ;
-(void)setFollowsTerrain:(BOOL)arg1 ;
-(void)setCalloutOffset:(CGPoint)arg1 ;
-(CGPoint)calloutOffset;
-(BOOL)canShowCallout;
-(long long)dragState;
-(BOOL)isDraggable;
-(void)setPresentationCoordinate:(CGSize)arg1 ;
-(void)setAnimatingToCoordinate:(BOOL)arg1 ;
-(CGSize)presentationCoordinate;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
-(void)setDraggable:(BOOL)arg1 ;
-(void)setCanShowCallout:(BOOL)arg1 ;
-(BOOL)hidden;
@end

