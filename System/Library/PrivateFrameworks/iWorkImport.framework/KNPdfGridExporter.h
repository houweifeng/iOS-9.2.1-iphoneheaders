/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/KNPdfExporter.h>

@interface KNPdfGridExporter : KNPdfExporter
-(id)initWithDocumentRoot:(id)arg1 ;
-(BOOL)drawCurrentPageInContext:(CGContextRef)arg1 viewScale:(double)arg2 unscaledClipRect:(CGRect)arg3 createPage:(BOOL)arg4 ;
-(BOOL)incrementPage;
@end
