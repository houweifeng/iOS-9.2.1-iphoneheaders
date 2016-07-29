/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableIndexSet;

@interface TSTHiddenStateIndexSet : NSObject {

	NSMutableIndexSet* _visibleIndexSet;

}

@property (nonatomic,retain) NSMutableIndexSet * visibleIndexSet;              //@synthesize visibleIndexSet=_visibleIndexSet - In the implementation block
-(void)swapIndex:(unsigned long long)arg1 withIndex:(unsigned long long)arg2 ;
-(void)insertRange:(NSRange)arg1 ;
-(void)setHidden:(BOOL)arg1 inRange:(NSRange)arg2 ;
-(void)setHidden:(BOOL)arg1 atIndex:(unsigned long long)arg2 ;
-(void)moveRangeFrom:(NSRange)arg1 toIndex:(unsigned long long)arg2 ;
-(unsigned long long)numberHiddenIndicesInRange:(NSRange)arg1 ;
-(BOOL)anyHiddenIndicesInRange:(NSRange)arg1 ;
-(BOOL)isIndexHidden:(unsigned long long)arg1 ;
-(id)visibleIndices;
-(unsigned long long)visibleIndexBeforeIndex:(unsigned long long)arg1 ;
-(unsigned long long)visibleIndexBeforeAndIncludingIndex:(unsigned long long)arg1 ;
-(unsigned long long)visibleIndexAfterIndex:(unsigned long long)arg1 ;
-(unsigned long long)visibleIndexAfterAndIncludingIndex:(unsigned long long)arg1 ;
-(NSMutableIndexSet *)visibleIndexSet;
-(unsigned long long)numberVisibleIndicesInRange:(NSRange)arg1 ;
-(unsigned long long)findNthPreviousVisibleIndex:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2 ;
-(unsigned long long)findNthNextVisibleIndex:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2 ;
-(void)setVisibleIndexSet:(NSMutableIndexSet *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setCount:(unsigned long long)arg1 ;
-(void)deleteRange:(NSRange)arg1 ;
@end

