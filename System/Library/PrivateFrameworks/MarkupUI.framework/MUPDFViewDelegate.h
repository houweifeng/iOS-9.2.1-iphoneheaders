/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MUPDFViewDelegate <NSObject>
@optional
-(id)passwordForPDFView:(id)arg1;
-(void)didDetermineDocumentBounds:(id)arg1;
-(void)pdfView:(id)arg1 zoomToRect:(CGRect)arg2 forPoint:(CGPoint)arg3 considerHeight:(BOOL)arg4;
-(void)resetZoom:(id)arg1;
-(void)pageWasRendered:(id)arg1;
-(void)_pdfView:(id)arg1 willAddPage:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)_pdfView:(id)arg1 didAddPage:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)_pdfView:(id)arg1 willRemovePage:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)_pdfView:(id)arg1 didRemovePage:(id)arg2 atIndex:(unsigned long long)arg3;

@end

