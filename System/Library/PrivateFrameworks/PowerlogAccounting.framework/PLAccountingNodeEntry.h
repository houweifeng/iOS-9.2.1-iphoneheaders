/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLEntry.h>

@class NSString;

@interface PLAccountingNodeEntry : PLEntry

@property (nonatomic,readonly) NSString * name; 
+(void)load;
+(id)entryKey;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(id)initWithRootNodeID:(id)arg1 ;
-(id)initEntryWithRawData:(id)arg1 ;
@end

