/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/OABPropertiesManager.h>

@class NSString;

@interface OABDefaultsManager : NSObject <OABPropertiesManager>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(EshColor)shadowColor;
-(int)shadowAlpha;
-(BOOL)isFilled;
-(BOOL)isStroked;
-(BOOL)hidden;
-(int)strokeWidth;
-(EshColor)fillFgColor;
-(EshColor)strokeFgColor;
-(EshColor)fillBgColor;
-(EshColor)strokeBgColor;
-(int)fillType;
-(int)fillFgAlpha;
-(int)fillBgAlpha;
-(int)fillAngle;
-(int)fillFocus;
-(int)fillFocusLeft;
-(int)fillFocusTop;
-(int)fillFocusRight;
-(int)fillFocusBottom;
-(const EshTablePropVal<EshGradientStop>Ref)fillGradientColors;
-(unsigned)fillBlipID;
-(id)fillBlipName;
-(EshBlip*)fillBlipDataReference;
-(BOOL)isTextPath;
-(int)strokeFillType;
-(unsigned)strokeFillBlipID;
-(id)strokeFillBlipName;
-(int)strokeFgAlpha;
-(int)strokeMiterLimit;
-(int)strokeCompoundType;
-(int)strokePresetDash;
-(const EshTablePropVal<int>Ref)strokeCustomDash;
-(int)strokeCapStyle;
-(int)strokeJoinStyle;
-(int)strokeStartArrowType;
-(int)strokeStartArrowWidth;
-(int)strokeStartArrowLength;
-(int)strokeEndArrowType;
-(int)strokeEndArrowWidth;
-(int)strokeEndArrowLength;
-(BOOL)isShadowed;
-(int)shadowType;
-(int)shadowOffsetX;
-(int)shadowOffsetY;
-(int)shadowSoftness;
-(BOOL)isFillOK;
-(BOOL)isStrokeOK;
-(BOOL)isShadowOK;
-(id)textPathUnicodeString;
-(int)textPathTextAlignment;
-(int)textPathFontSize;
-(id)textPathFontFamily;
-(BOOL)textPathBold;
-(BOOL)textPathItalic;
-(BOOL)textPathUnderline;
-(BOOL)textPathSmallcaps;
-(BOOL)textPathStrikethrough;
@end

