/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDIterator.h>

@class WDIterator;

@interface WDCombinedIterator : WDIterator {

	WDIterator* mParentIterator;
	WDIterator* mChildIterator;

}

@property (nonatomic,retain) WDIterator * childIterator; 
-(void)incrementChildIterator;
-(id)next;
-(void)dealloc;
-(WDIterator *)childIterator;
-(void)setChildIterator:(WDIterator *)arg1 ;
-(id)childIteratorFrom:(id)arg1 ;
-(id)newChildIteratorFrom:(id)arg1 ;
-(id)initWithParentIterator:(id)arg1 ;
-(BOOL)hasNext;
@end

