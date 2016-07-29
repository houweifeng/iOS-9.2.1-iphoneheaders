/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSArray;

@interface SagaGetGeniusItemsOperation : CloudLibraryOperation {

	unsigned long long _seedID;
	unsigned _numberOfItems;
	NSArray* _itemIDs;

}

@property (nonatomic,readonly) NSArray * itemIDs;              //@synthesize itemIDs=_itemIDs - In the implementation block
-(id)initWithSeedID:(unsigned long long)arg1 numberOfItems:(unsigned)arg2 ;
-(void)main;
-(NSArray *)itemIDs;
@end

