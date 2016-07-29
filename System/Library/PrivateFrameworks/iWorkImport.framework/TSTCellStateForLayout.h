/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSTCell, TSWPColumn, TSTLayoutContentCachedKey;

@interface TSTCellStateForLayout : NSObject {

	BOOL mCellPropsRowHeight;
	BOOL mCellWraps;
	BOOL mForDrawing;
	BOOL mInDynamicLayout;
	SCD_Struct_TS315 mModelCellID;
	int mVerticalAlignment;
	int mLayoutCacheFlags;
	TSTCell* mCell;
	TSUColumnRowRect mMergedRange;
	TSWPColumn* mWPColumn;
	double mMaxWidthForChildren;
	id mCellContents;
	TSTLayoutContentCachedKey* mKeyVal;
	unsigned long long mPageNumber;
	unsigned long long mPageCount;
	CGSize mMinSize;
	CGSize mMaxSize;
	UIEdgeInsets mPaddingInsets;

}

@property (assign,nonatomic) SCD_Struct_TS315 modelCellID; 
@property (nonatomic,copy) TSTCell * cell; 
@property (assign,nonatomic) TSUColumnRowRect mergedRange; 
@property (nonatomic,retain) id cellContents; 
@property (assign,nonatomic) CGSize minSize; 
@property (assign,nonatomic) CGSize maxSize; 
@property (assign,nonatomic) double maxWidthForChildren; 
@property (assign,nonatomic) UIEdgeInsets paddingInsets; 
@property (assign,nonatomic) int verticalAlignment; 
@property (assign,nonatomic) BOOL cellPropsRowHeight; 
@property (assign,nonatomic) BOOL cellWraps; 
@property (assign,nonatomic) BOOL forDrawing; 
@property (assign,nonatomic) BOOL inDynamicLayout; 
@property (assign,nonatomic) int layoutCacheFlags; 
@property (nonatomic,readonly) BOOL hasContent; 
@property (nonatomic,retain) TSTLayoutContentCachedKey * keyVal; 
@property (nonatomic,retain) TSWPColumn * wpColumn; 
@property (assign,nonatomic) unsigned long long pageNumber; 
@property (assign,nonatomic) unsigned long long pageCount; 
-(void)setModelCellID:(SCD_Struct_TS315)arg1 ;
-(void)setCellPropsRowHeight:(BOOL)arg1 ;
-(void)setCellWraps:(BOOL)arg1 ;
-(void)setPaddingInsets:(UIEdgeInsets)arg1 ;
-(void)setForDrawing:(BOOL)arg1 ;
-(void)setMergedRange:(TSUColumnRowRect)arg1 ;
-(void)setInDynamicLayout:(BOOL)arg1 ;
-(void)setCellContents:(id)arg1 ;
-(void)setLayoutCacheFlags:(int)arg1 ;
-(TSWPColumn *)wpColumn;
-(TSTLayoutContentCachedKey *)keyVal;
-(int)layoutCacheFlags;
-(id)cellContents;
-(void)setMaxWidthForChildren:(double)arg1 ;
-(SCD_Struct_TS315)modelCellID;
-(BOOL)cellWraps;
-(UIEdgeInsets)paddingInsets;
-(void)setKeyVal:(TSTLayoutContentCachedKey *)arg1 ;
-(double)maxWidthForChildren;
-(void)setWpColumn:(TSWPColumn *)arg1 ;
-(TSUColumnRowRect)mergedRange;
-(BOOL)inDynamicLayout;
-(BOOL)cellPropsRowHeight;
-(BOOL)forDrawing;
-(void)dealloc;
-(id)init;
-(CGSize)maxSize;
-(CGSize)minSize;
-(void)setMaxSize:(CGSize)arg1 ;
-(BOOL)hasContent;
-(unsigned long long)pageCount;
-(TSTCell *)cell;
-(int)verticalAlignment;
-(void)setVerticalAlignment:(int)arg1 ;
-(void)setPageCount:(unsigned long long)arg1 ;
-(void)setCell:(TSTCell *)arg1 ;
-(unsigned long long)pageNumber;
-(void)setMinSize:(CGSize)arg1 ;
-(void)setPageNumber:(unsigned long long)arg1 ;
@end

