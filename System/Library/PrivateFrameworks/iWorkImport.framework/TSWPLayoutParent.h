/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSWPLayoutParent
@optional
-(CGSize*)initialTextSize;
-(double)maxAutoGrowWidthForTextLayout:(id)arg1;
-(double)maxAutoGrowHeightForTextLayout:(id)arg1;
-(unsigned long long)initialCharIndex;
-(BOOL)textLayoutShouldWrapAroundExternalDrawables:(id)arg1;
-(BOOL)textLayoutShouldLayoutVertically:(id)arg1;
-(CGRect*)maskRectForTextLayout:(id)arg1;
-(int)naturalAlignmentForTextLayout:(id)arg1;
-(unsigned long long)pageCountForAttachment:(id)arg1;
-(unsigned long long)pageNumberForAttachment:(id)arg1;
-(CGRect*)adjustRect:(CGRect)arg1 forScrollingToSelectionPath:(id)arg2;
-(id)styleProvider;

@required
-(unsigned)autosizeFlagsForTextLayout:(id)arg1;
-(int)verticalAlignmentForTextLayout:(id)arg1;
-(void)invalidateForAutosizingTextLayout:(id)arg1;
-(CGRect*)nonAutosizedFrameForTextLayout:(id)arg1;
-(CGRect*)autosizedFrameForTextLayout:(id)arg1 textSize:(CGSize)arg2;
-(id)dependentsOfTextLayout:(id)arg1;
-(Class)repClassForTextLayout:(id)arg1;

@end

