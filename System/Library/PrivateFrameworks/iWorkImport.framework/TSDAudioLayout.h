/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDMediaLayout.h>

@interface TSDAudioLayout : TSDMediaLayout
-(id)layoutGeometryFromInfo;
-(CGRect)alignmentFrame;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(BOOL)resizeMayChangeAspectRatio;
-(BOOL)shouldDisplayGuides;
-(BOOL)allowsConnections;
-(BOOL)supportsRotation;
-(CGRect)computeAlignmentFrameInRoot:(BOOL)arg1 ;
-(id)initWithInfo:(id)arg1 ;
-(BOOL)canFlip;
-(id)movieInfo;
-(int)wrapType;
@end

