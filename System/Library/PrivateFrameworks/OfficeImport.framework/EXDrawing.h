/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXDrawing : NSObject
+(id)readTwoCellAnchorNode:(xmlNode*)arg1 state:(id)arg2 ;
+(id)readOneCellAnchorNode:(xmlNode*)arg1 state:(id)arg2 ;
+(id)readAbsoluteAnchorNode:(xmlNode*)arg1 state:(id)arg2 ;
+(id)readDrawableNode:(xmlNode*)arg1 anchor:(id)arg2 state:(id)arg3 ;
+(void)initialize;
+(id)readAnchorNode:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readFromPart:(id)arg1 state:(id)arg2 ;
+(EDCellAnchorMarker)readAnchorMarkerFromNode:(xmlNode*)arg1 state:(id)arg2 ;
+(BOOL)hasCommentsInSheet:(id)arg1 ;
@end

