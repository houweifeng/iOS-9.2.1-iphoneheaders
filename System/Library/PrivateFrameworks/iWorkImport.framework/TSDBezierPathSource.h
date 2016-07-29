/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDPathSource.h>
#import <iWorkImport/TSDMixing.h>

@class TSUBezierPath;

@interface TSDBezierPathSource : TSDPathSource <TSDMixing> {

	TSUBezierPath* mPath;
	BOOL mIsRectangular;
	CGSize mNaturalSize;

}

@property (assign,nonatomic) CGSize naturalSize; 
+(id)pathSourceWithBezierPath:(id)arg1 ;
-(id)initWithArchive:(const PathSourceArchive*)arg1 andBezierArchive:(const BezierPathSourceArchive*)arg2 ;
-(void)saveToArchive:(PathSourceArchive*)arg1 andBezierArchive:(BezierPathSourceArchive*)arg2 ;
-(void)saveToArchive:(PathSourceArchive*)arg1 ;
-(id)initWithArchive:(const PathSourceArchive*)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(id)initWithBezierPath:(id)arg1 ;
-(id)bezierPathWithoutFlips;
-(BOOL)isRectangularForever;
-(void)p_setBezierPath:(id)arg1 ;
-(CGAffineTransform)transformToNaturalSize;
-(id)initWithNaturalSize:(CGSize)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)naturalSize;
-(void)setNaturalSize:(CGSize)arg1 ;
-(BOOL)isRectangular;
-(BOOL)isCircular;
@end

