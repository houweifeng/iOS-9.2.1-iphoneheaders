/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MUPDFViewControllerDelegate
@optional
-(void)pageWasRendered:(id)arg1;
-(CGRect*)frameForPDFViewWithHandler:(id)arg1 proposedFrame:(CGRect)arg2;
-(void)pdfViewHandlerCompletedLayoutAndIsUnlocked:(id)arg1;
-(id)passwordForPDFViewHandler:(id)arg1;
-(CGPoint*)originForPDFPageLabelViewWithHandler:(id)arg1 proposedOrigin:(CGPoint)arg2;
-(double)minimumVerticalContentOffsetForPDFViewHandler:(id)arg1;
-(void)pdfView:(id)arg1 willAddPage:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)pdfView:(id)arg1 didAddPage:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)pdfView:(id)arg1 willRemovePage:(id)arg2 atIndex:(unsigned long long)arg3;
-(void)pdfView:(id)arg1 didRemovePage:(id)arg2 atIndex:(unsigned long long)arg3;

@end

