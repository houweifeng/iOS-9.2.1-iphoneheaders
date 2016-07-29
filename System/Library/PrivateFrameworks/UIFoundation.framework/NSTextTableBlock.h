/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSTextBlock.h>

@class NSTextTable;

@interface NSTextTableBlock : NSTextBlock {

	NSTextTable* _table;
	long long _rowNum;
	long long _colNum;
	long long _rowSpan;
	long long _colSpan;
	void* _tableBlockPrimary;
	void* _tableBlockSecondary;

}
+(void)initialize;
-(void)drawBackgroundWithFrame:(CGRect)arg1 inView:(id)arg2 characterRange:(NSRange)arg3 layoutManager:(id)arg4 ;
-(long long)startingRow;
-(CGRect)rectForLayoutAtPoint:(CGPoint)arg1 inRect:(CGRect)arg2 textContainer:(id)arg3 characterRange:(NSRange)arg4 ;
-(CGRect)boundsRectForContentRect:(CGRect)arg1 inRect:(CGRect)arg2 textContainer:(id)arg3 characterRange:(NSRange)arg4 ;
-(id)initWithTable:(id)arg1 startingRow:(long long)arg2 rowSpan:(long long)arg3 startingColumn:(long long)arg4 columnSpan:(long long)arg5 ;
-(long long)startingColumn;
-(void)_setRowSpan:(long long)arg1 ;
-(void)_setColumnSpan:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)table;
-(long long)columnSpan;
-(long long)rowSpan;
@end

