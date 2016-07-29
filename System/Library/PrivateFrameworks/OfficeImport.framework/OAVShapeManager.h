/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class OCPPackagePart, NSDictionary, OAVReadState;

@interface OAVShapeManager : NSObject {

	xmlNode* mShape;
	unsigned short mType;
	OCPPackagePart* mPackagePart;
	NSDictionary* mShapeStyle;
	NSDictionary* mTextBoxStyle;
	OAVReadState* mOAVState;

}
-(void)dealloc;
-(unsigned short)type;
-(id)path;
-(id)shadowColor;
-(xmlNode*)shape;
-(float)shadowAlpha;
-(BOOL)isFilled;
-(BOOL)isStroked;
-(id)points;
-(float)strokeWidth;
-(id)textRotation;
-(id)textAnchor;
-(id)packagePart;
-(id)oavState;
-(id)fillFgColor;
-(id)strokeFgColor;
-(id)fillBgColor;
-(id)strokeBgColor;
-(id)fillType;
-(float)fillFgAlpha;
-(float)fillBgAlpha;
-(float)fillAngle;
-(float)fillFocus;
-(id)fillGradientColors;
-(id)strokeFillType;
-(float)strokeFgAlpha;
-(float)strokeMiterLimit;
-(id)strokeCompoundType;
-(id)strokeCapStyle;
-(id)strokeJoinStyle;
-(id)strokeStartArrowType;
-(id)strokeStartArrowWidth;
-(id)strokeStartArrowLength;
-(id)strokeEndArrowType;
-(id)strokeEndArrowWidth;
-(id)strokeEndArrowLength;
-(BOOL)isShadowed;
-(id)shadowType;
-(id)limo;
-(BOOL)isFillOK;
-(BOOL)isStrokeOK;
-(BOOL)isShadowOK;
-(id)imageFillId;
-(id)imageRelId;
-(id)movieRelId;
-(CGPoint)shadowOffsets;
-(id)initWithShape:(xmlNode*)arg1 type:(unsigned short)arg2 packagePart:(id)arg3 state:(id)arg4 ;
-(BOOL)isImage;
-(BOOL)isPolyline;
-(BOOL)isWordArt;
-(id)textBodyRects;
-(id)imageFillTitle;
-(BOOL)autoInsets;
-(id)strokeDashStyle;
-(OAVTextBoxInsets)textInsets;
-(id)textLayoutFlow;
-(id)textAltLayoutFlow;
-(BOOL)fitShapeToText;
-(id)textWrapStyle;
@end

