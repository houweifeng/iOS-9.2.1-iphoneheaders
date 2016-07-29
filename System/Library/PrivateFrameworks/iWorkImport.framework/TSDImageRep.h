/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDMediaRep.h>
#import <iWorkImport/TSDMagicMoveMatching.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class TSDLayoutGeometry, CALayer, CAShapeLayer, TSDInstantAlphaTracker, NSRecursiveLock, TSDImageRepSizingState, NSObject, NSCache, NSMutableArray;

@interface TSDImageRep : TSDMediaRep <TSDMagicMoveMatching> {

	TSDLayoutGeometry* mLastImageGeometryInRoot;
	TSDLayoutGeometry* mLastMaskGeometryInRoot;
	CGAffineTransform mLastLayoutToImageTransform;
	CGRect mFrameInUnscaledCanvasRelativeToSuper;
	BOOL mFrameInUnscaledCanvasIsValid;
	CALayer* mContentsLayer;
	CAShapeLayer* mMaskPathLayer;
	CAShapeLayer* mIAMaskLayer;
	CAShapeLayer* mMaskSublayer;
	CGAffineTransform mLastPictureFrameLayerTransform;
	BOOL mDirectlyManagesLayerContent;
	BOOL mShowImageHighlight;
	BOOL mInInstantAlphaMode;
	TSDInstantAlphaTracker* mInstantAlphaTracker;
	CGImageRef mInstantAlphaImage;
	CGAffineTransform mBaseMaskLayoutTransform;
	NSRecursiveLock* mLayerUpdateAndSizingStateLock;
	TSDImageRepSizingState* mSizingState;
	BOOL mSizingStateReady;
	NSObject*<OS_dispatch_queue> mSizedImageAccessQueue;
	CGImageRef mSizedImage;
	CGSize mSizedImageSize;
	long long mSizedImageOrientation;
	BOOL mSizedImageHasMaskBakedIn;
	BOOL mSizedImageHasAdjustmentsBakedIn;
	CGPathRef mSizedImageMaskPath;
	NSCache* mHitTestCache;
	long long mHitTestCacheOnce;
	NSMutableArray* mUpdateFromLayoutBlocks;
	NSObject*<OS_dispatch_semaphore> mUpdateFromLayoutBlocksLock;

}
+(double)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg1 incomingObject:(id)arg2 mixingTypeContext:(id)arg3 ;
+(CGPathRef)p_newPathToBakeIntoSizedImageForSize:(CGSize)arg1 withImageLayout:(id)arg2 orientation:(long long)arg3 ;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(CGRect)frameInUnscaledCanvas;
-(BOOL)canDrawInParallel;
-(id)textureForContext:(id)arg1 ;
-(void)setTextureAttributes:(id)arg1 ;
-(void)drawInLayerContext:(CGContextRef)arg1 ;
-(void)drawInContextWithoutEffects:(CGContextRef)arg1 withContent:(BOOL)arg2 withStroke:(BOOL)arg3 withOpacity:(BOOL)arg4 forAlphaOnly:(BOOL)arg5 drawChildren:(BOOL)arg6 ;
-(id)imageOfStroke:(CGRect*)arg1 ;
-(BOOL)canDrawShadowInOneStepWithChildren:(BOOL)arg1 ;
-(id)maskInfo;
-(id)imageLayout;
-(id)maskLayout;
-(id)p_imageData;
-(void)p_drawInContext:(CGContextRef)arg1 withContent:(BOOL)arg2 withStroke:(BOOL)arg3 withOpacity:(double)arg4 withMask:(BOOL)arg5 withIAMask:(BOOL)arg6 forLayer:(BOOL)arg7 forShadow:(BOOL)arg8 forHitTest:(BOOL)arg9 ;
-(id)p_validatedImageProvider;
-(id)p_validatedThumbnailImageProvider;
-(id)p_validatedBitmapImageProvider;
-(id)p_imageProvider;
-(BOOL)p_shouldUseSourceImageForContext:(id)arg1 clipBounds:(CGRect)arg2 transform:(CGAffineTransform)arg3 image:(CGImageRef)arg4 ;
-(BOOL)p_drawsInOneStep;
-(BOOL)isDataCurrentlyDownloading;
-(BOOL)shouldShowCheckerboard;
-(id)downloadProgressPlaceholderImage;
-(id)imageInfo;
-(void)dealloc;
-(void)willBeRemoved;
@end

