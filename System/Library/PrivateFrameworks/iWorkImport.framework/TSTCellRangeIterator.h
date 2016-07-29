/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSTCellRangeIteratorDelegate;
#import <iWorkImport/iWorkImport-Structs.h>
@class TSTCellIterator;

@interface TSTCellRangeIterator : NSObject {

	TSTCellIterator* mCellIterator;
	SCD_Struct_TS549* mIterData;
	BOOL mIterDataValid;
	BOOL mCellValidForDelegate;
	id<TSTCellRangeIteratorDelegate> mDelegate;

}

@property (nonatomic,readonly) BOOL cellValid; 
-(id)initWithTableModel:(id)arg1 region:(id)arg2 delegate:(id)arg3 ;
-(id)initWithTableModel:(id)arg1 range:(TSUColumnRowRect)arg2 delegate:(id)arg3 ;
-(BOOL)cellValid;
-(id)initWithTableModel:(id)arg1 delegate:(id)arg2 ;
-(BOOL)processRange;
-(void)dealloc;
@end

