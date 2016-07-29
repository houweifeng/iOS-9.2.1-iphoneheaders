/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AKPageModelController, UIColor, UIFont, NSDictionary, AKController;

@interface AKAttributeController : NSObject {

	BOOL _strokeIsDashed;
	BOOL _hasShadow;
	AKPageModelController* modelControllerToObserveForSelections;
	UIColor* _strokeColor;
	UIColor* _fillColor;
	double _strokeWidth;
	long long _brushStyle;
	unsigned long long _arrowHeadStyle;
	UIFont* _font;
	NSDictionary* _textAttributes;
	AKController* _controller;

}

@property (nonatomic,retain) AKPageModelController * modelControllerToObserveForSelections; 
@property (retain) UIColor * strokeColor;                                                                //@synthesize strokeColor=_strokeColor - In the implementation block
@property (retain) UIColor * fillColor;                                                                  //@synthesize fillColor=_fillColor - In the implementation block
@property (assign) double strokeWidth;                                                                   //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (assign) BOOL strokeIsDashed;                                                                  //@synthesize strokeIsDashed=_strokeIsDashed - In the implementation block
@property (assign) BOOL hasShadow;                                                                       //@synthesize hasShadow=_hasShadow - In the implementation block
@property (assign) long long brushStyle;                                                                 //@synthesize brushStyle=_brushStyle - In the implementation block
@property (assign) unsigned long long arrowHeadStyle;                                                    //@synthesize arrowHeadStyle=_arrowHeadStyle - In the implementation block
@property (retain) UIFont * font;                                                                        //@synthesize font=_font - In the implementation block
@property (retain) NSDictionary * textAttributes;                                                        //@synthesize textAttributes=_textAttributes - In the implementation block
@property (__weak) AKController * controller;                                                            //@synthesize controller=_controller - In the implementation block
+(void)initialize;
+(id)_defaultFont;
+(id)_defaultTextAttributes;
-(void)setFont:(UIFont *)arg1 ;
-(NSDictionary *)textAttributes;
-(void)setTextAttributes:(NSDictionary *)arg1 ;
-(UIFont *)font;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
-(AKController *)controller;
-(void)setController:(AKController *)arg1 ;
-(BOOL)hasShadow;
-(void)setHasShadow:(BOOL)arg1 ;
-(long long)brushStyle;
-(unsigned long long)arrowHeadStyle;
-(void)_restorePersistedAttributes;
-(void)_syncAttributesFromSelectedAnnotationsToUI;
-(void)_syncAttributesFromSenderToSelfAndSelectedAnnotations:(id)arg1 ;
-(AKPageModelController *)modelControllerToObserveForSelections;
-(BOOL)_isEnabledForSender:(id)arg1 withSelectedAnnotations:(id)arg2 ;
-(void)_updateStateOnSender:(id)arg1 ;
-(BOOL)strokeIsDashed;
-(void)setStrokeWidth:(double)arg1 ;
-(void)setStrokeIsDashed:(BOOL)arg1 ;
-(void)setBrushStyle:(long long)arg1 ;
-(void)setArrowHeadStyle:(unsigned long long)arg1 ;
-(BOOL)validateAttributeSender:(id)arg1 ;
-(void)_persistCurrentAttributes;
-(void)_syncFillColorOnSelectionToUI;
-(void)_syncStrokeColorOnSelectionToUI;
-(BOOL)_updateStateOnSender:(id)arg1 fromSelectedAnnotations:(id)arg2 ;
-(void)_updateStateOnSenderFromSelf:(id)arg1 ;
-(void)performAttributeActionForSender:(id)arg1 ;
-(void)setModelControllerToObserveForSelections:(AKPageModelController *)arg1 ;
-(id)initWithController:(id)arg1 ;
-(double)strokeWidth;
@end

