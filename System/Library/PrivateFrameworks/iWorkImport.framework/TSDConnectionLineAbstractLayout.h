/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDShapeLayout.h>

@protocol TSDInfo;
@class TSUBezierPath, TSDConnectionLinePathSource, TSDInfoGeometry, TSDLayout, NSObject;

@interface TSDConnectionLineAbstractLayout : TSDShapeLayout {

	TSUBezierPath* mClippedBezierPath;
	TSDConnectionLinePathSource* mOriginalPathSource;
	TSDConnectionLinePathSource* mConnectedPathSource;
	TSDInfoGeometry* mConnectedInfoGeometry;
	TSDLayout* mConnectedFrom;
	TSDLayout* mConnectedTo;
	NSObject*<TSDInfo> mConnectedFromInfo;
	NSObject*<TSDInfo> mConnectedToInfo;
	TSUBezierPath* mCachedFromWrapPath;
	TSUBezierPath* mCachedToWrapPath;
	double mCachedFromOutset;
	double mCachedToOutset;
	TSUBezierPath* mCachedFromOutsetWrapPath;
	TSUBezierPath* mCachedToOutsetWrapPath;
	TSDLayout* mOldConnectedFrom;
	TSDLayout* mOldConnectedTo;
	BOOL mValidConnections;
	BOOL mVisibleLine;
	BOOL mValidLine;
	CGPoint mLooseEndPosition;
	CGPoint mAcumulatedDrag;
	BOOL mUseResizePoints[3];
	CGPoint mResizeControlPoints[3];
	BOOL mUseDynamicOutsets;
	double mDynamicOutsetFrom;
	double mDynamicOutsetTo;

}

@property (assign,nonatomic) TSDLayout * connectedFrom; 
@property (assign,nonatomic) TSDLayout * connectedTo; 
@property (assign,nonatomic) NSObject*<TSDInfo> connectedFromInfo; 
@property (assign,nonatomic) NSObject*<TSDInfo> connectedToInfo; 
@property (nonatomic,readonly) BOOL validLine; 
@property (nonatomic,readonly) TSDConnectionLinePathSource * connectedPathSource; 
@property (assign,nonatomic) BOOL useDynamicOutsets; 
@property (assign,nonatomic) double dynamicOutsetFrom; 
@property (assign,nonatomic) double dynamicOutsetTo; 
@property (nonatomic,readonly) double outsetFrom; 
@property (nonatomic,readonly) double outsetTo; 
-(void)processChangedProperty:(int)arg1 ;
-(CGRect)boundsForStandardKnobs;
-(TSDLayout *)connectedFrom;
-(TSDLayout *)connectedTo;
-(void)invalidatePosition;
-(void)parentDidChange;
-(void)connectedLayoutInvalidated:(id)arg1 ;
-(BOOL)shouldValidate;
-(id)reliedOnLayouts;
-(id)additionalLayoutsForRepCreation;
-(BOOL)shouldDisplayGuides;
-(BOOL)supportsRotation;
-(BOOL)supportsResize;
-(BOOL)supportsFlipping;
-(CGPoint)getControlKnobPosition:(unsigned long long)arg1 ;
-(id)pathSource;
-(BOOL)pathIsOpen;
-(BOOL)pathIsLineSegment;
-(id)layoutInfoGeometry;
-(BOOL)canBeIntersected;
-(BOOL)canResetTextAndObjectHandles;
-(CGPoint)unclippedHeadPoint;
-(CGPoint)unclippedTailPoint;
-(double)outsetFrom;
-(double)outsetTo;
-(void)setConnectedFrom:(TSDLayout *)arg1 ;
-(void)setConnectedTo:(TSDLayout *)arg1 ;
-(void)invalidateConnections;
-(id)clipPath:(id)arg1 onLayout:(id)arg2 outset:(double)arg3 reversed:(BOOL)arg4 isValid:(BOOL*)arg5 ;
-(TSDConnectionLinePathSource *)connectedPathSource;
-(BOOL)isStraightLine;
-(id)createConnectedPathFrom:(id)arg1 to:(id)arg2 withControlPoints:(CGPoint)arg3 ;
-(CGPoint)controlPointForPointA:(CGPoint)arg1 pointB:(CGPoint)arg2 andOriginalA:(CGPoint)arg3 originalB:(CGPoint)arg4 ;
-(BOOL)validLine;
-(void)checkConnections;
-(BOOL)p_isConnectedToLockedObjects;
-(void)removeConnections;
-(void)updateRepPath;
-(id)connectionLineInfo;
-(id)p_infoForConnectingToInfo:(id)arg1 ;
-(BOOL)canEndpointsCoincide;
-(void)updateConnectedPath;
-(NSObject*<TSDInfo>)connectedFromInfo;
-(void)setConnectedFromInfo:(NSObject*<TSDInfo>)arg1 ;
-(NSObject*<TSDInfo>)connectedToInfo;
-(void)setConnectedToInfo:(NSObject*<TSDInfo>)arg1 ;
-(BOOL)useDynamicOutsets;
-(void)setUseDynamicOutsets:(BOOL)arg1 ;
-(double)dynamicOutsetFrom;
-(void)setDynamicOutsetFrom:(double)arg1 ;
-(double)dynamicOutsetTo;
-(void)setDynamicOutsetTo:(double)arg1 ;
-(void)dealloc;
-(id)path;
-(BOOL)canFlip;
-(void)validate;
-(BOOL)isSelectable;
-(void)invalidatePath;
-(BOOL)isDraggable;
-(BOOL)isInvisible;
-(int)wrapType;
@end

