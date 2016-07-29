/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/PDSlideBase.h>

@class PDPresentation, NSMutableArray, OADTheme, OADColorMap, OADTextListStyle;

@interface PDSlideMaster : PDSlideBase {

	PDPresentation* mPresentation;
	NSMutableArray* mSlideLayouts;
	OADTheme* mTheme;
	OADColorMap* mColorMap;
	OADTextListStyle* mTitleTextStyle;
	OADTextListStyle* mBodyTextStyle;
	OADTextListStyle* mOtherTextStyle;
	BOOL mHeaderPlaceholderIsVisible;
	BOOL mFooterPlaceholderIsVisible;
	BOOL mSlideNumberPlaceholderIsVisible;
	BOOL mDateTimePlaceholderIsVisible;

}

@property (nonatomic,readonly) PDPresentation * presentation; 
@property (nonatomic,retain) NSMutableArray * slideLayouts; 
@property (assign,nonatomic) BOOL headerPlaceholderIsVisible; 
@property (assign,nonatomic) BOOL footerPlaceholderIsVisible; 
@property (assign,nonatomic) BOOL slideNumberPlaceholderIsVisible; 
@property (assign,nonatomic) BOOL dateTimePlaceholderIsVisible; 
-(void)dealloc;
-(id)description;
-(id)theme;
-(id)colorScheme;
-(id)styleMatrix;
-(id)colorMap;
-(id)defaultTheme;
-(id)fontScheme;
-(id)parentSlideBase;
-(void)removeUnnecessaryOverrides;
-(id)drawingTheme;
-(void)setUpPropertyHierarchyPreservingEffectiveValues;
-(void)doneWithContent;
-(void)setHeaderPlaceholderIsVisible:(BOOL)arg1 ;
-(void)setFooterPlaceholderIsVisible:(BOOL)arg1 ;
-(void)setDateTimePlaceholderIsVisible:(BOOL)arg1 ;
-(void)setSlideNumberPlaceholderIsVisible:(BOOL)arg1 ;
-(unsigned long long)slideLayoutCount;
-(id)slideLayoutAtIndex:(unsigned long long)arg1 ;
-(id)addSlideLayout;
-(id)initWithPresentation:(id)arg1 ;
-(id)slideLayoutOfType:(int)arg1 ;
-(void)setTitleTextStyle:(id)arg1 ;
-(void)setBodyTextStyle:(id)arg1 ;
-(void)setOtherTextStyle:(id)arg1 ;
-(id)parentTextStyleForTables;
-(id)defaultTextListStyle;
-(id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4 ;
-(id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(void)setSlideLayouts:(NSMutableArray *)arg1 ;
-(void)addSlideLayout:(id)arg1 ;
-(id)titleTextStyle;
-(id)bodyTextStyle;
-(id)otherTextStyle;
-(PDPresentation *)presentation;
-(NSMutableArray *)slideLayouts;
-(BOOL)headerPlaceholderIsVisible;
-(BOOL)footerPlaceholderIsVisible;
-(BOOL)slideNumberPlaceholderIsVisible;
-(BOOL)dateTimePlaceholderIsVisible;
@end

