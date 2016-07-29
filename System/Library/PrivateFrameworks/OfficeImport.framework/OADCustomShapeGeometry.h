/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADShapeGeometry.h>

@class NSMutableArray;

@interface OADCustomShapeGeometry : OADShapeGeometry {

	CsRect<int>* mGeometryCoordSpace;
	CsPoint<int>* mLimo;
	NSMutableArray* mFormulas;
	NSMutableArray* mTextBodyRects;
	NSMutableArray* mPaths;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(int)type;
-(unsigned long long)pathCount;
-(id)equivalentCustomGeometry;
-(unsigned long long)textBodyRectCount;
-(id)textBodyRectAtIndex:(unsigned long long)arg1 ;
-(CsRect<int>)geometryCoordSpace;
-(void)addPath:(id)arg1 ;
-(id)pathAtIndex:(unsigned long long)arg1 ;
-(void)setGeometryCoordSpace:(CsRect<int>)arg1 ;
-(unsigned long long)formulaCount;
-(id)formulaAtIndex:(unsigned long long)arg1 ;
-(void)addFormula:(id)arg1 ;
-(void)addTextBodyRect:(id)arg1 ;
-(void)setLimo:(CsPoint<int>)arg1 ;
-(CsPoint<int>)limo;
@end

