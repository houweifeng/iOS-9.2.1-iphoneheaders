/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIImage.h>

@interface SBIconGridImage : UIImage {

	unsigned long long _numberOfCells;

}

@property (nonatomic,readonly) unsigned long long numberOfCells; 
@property (nonatomic,readonly) unsigned long long numberOfColumns; 
@property (nonatomic,readonly) unsigned long long numberOfRows; 
+(id)gridImageForNumberOfCells:(unsigned long long)arg1 withCellImageProviderBlock:(/*^block*/id)arg2 ;
+(CGRect)rectAtIndex:(unsigned long long)arg1 maxCount:(unsigned long long)arg2 ;
+(CGSize)sizeForNumberOfRows:(unsigned long long)arg1 ;
+(unsigned long long)numberOfRowsForNumberOfCells:(unsigned long long)arg1 ;
+(id)_gridImageForNumberOfCells:(unsigned long long)arg1 withPreviousGridImage:(id)arg2 cellImageProviderBlock:(/*^block*/id)arg3 ;
+(unsigned long long)numberOfColumns;
+(CGSize)cellSize;
+(CGSize)cellSpacing;
-(id)gridImageByPatchingWithCellImageProviderBlock:(/*^block*/id)arg1 ;
-(id)iconImageAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfColumns;
-(unsigned long long)numberOfRows;
-(unsigned long long)numberOfCells;
@end

