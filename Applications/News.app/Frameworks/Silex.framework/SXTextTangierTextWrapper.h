/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <TSReading/TSWPTextWrap.h>

@class NSArray, NSMutableArray;

@interface SXTextTangierTextWrapper : NSObject <TSWPTextWrap> {

	NSArray* _exclusionPaths;
	NSMutableArray* _tangierExclusionPaths;
	CGAffineTransform _canvasSpaceToWrapSpace;
	CGAffineTransform _wrapSpaceToCanvasSpace;

}

@property (nonatomic,retain) NSArray * exclusionPaths;                              //@synthesize exclusionPaths=_exclusionPaths - In the implementation block
@property (assign,nonatomic) CGAffineTransform canvasSpaceToWrapSpace;              //@synthesize canvasSpaceToWrapSpace=_canvasSpaceToWrapSpace - In the implementation block
@property (assign,nonatomic) CGAffineTransform wrapSpaceToCanvasSpace;              //@synthesize wrapSpaceToCanvasSpace=_wrapSpaceToCanvasSpace - In the implementation block
@property (nonatomic,retain) NSMutableArray * tangierExclusionPaths;                //@synthesize tangierExclusionPaths=_tangierExclusionPaths - In the implementation block
-(NSMutableArray *)tangierExclusionPaths;
-(unsigned long long)intersectRects:(CGRect*)arg1 rects1Count:(unsigned long long)arg2 rects2:(const CGRect*)arg3 rects2Count:(unsigned long long)arg4 minSize:(double)arg5 ;
-(id)collectWrappables:(id)arg1 target:(id)arg2 ;
-(id)groupInfoContainingWrappable:(id)arg1 ;
-(BOOL)textShouldFlowAroundWrappable:(id)arg1 inTarget:(id)arg2 inColumn:(id)arg3 ;
-(unsigned long long)splitLineRect:(CGRect)arg1 lineSegmentRects:(CGRect)arg2 wrappable:(id)arg3 wrapContext:(id)arg4 ;
-(unsigned long long)splitLineRect:(CGRect)arg1 lineSegmentRects:(CGRect)arg2 wrappableRect:(CGRect)arg3 ;
-(CGAffineTransform)canvasSpaceToWrapSpace;
-(void)setCanvasSpaceToWrapSpace:(CGAffineTransform)arg1 ;
-(CGAffineTransform)wrapSpaceToCanvasSpace;
-(void)setWrapSpaceToCanvasSpace:(CGAffineTransform)arg1 ;
-(void)setTangierExclusionPaths:(NSMutableArray *)arg1 ;
-(id)beginWrappingToColumn:(id)arg1 target:(id)arg2 hasWrapables:(BOOL*)arg3 ;
-(unsigned)splitLine:(CGRect)arg1 lineSegmentRects:(CGRect)arg2 wrappableAttachments:(id)arg3 ignoreFloatingGraphics:(BOOL)arg4 floatingCausedWrap:(BOOL*)arg5 skipHint:(double*)arg6 userInfo:(id)arg7 ;
-(double)nextUnobstructedSpanStartingAt:(CGRect)arg1 wrappableAttachments:(id)arg2 userInfo:(id)arg3 ;
-(NSArray *)exclusionPaths;
-(void)setExclusionPaths:(NSArray *)arg1 ;
@end

