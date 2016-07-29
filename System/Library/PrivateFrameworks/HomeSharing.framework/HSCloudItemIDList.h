/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface HSCloudItemIDList : NSObject <NSSecureCoding> {

	NSMutableArray* _itemIDs;
	NSMutableArray* _idTypes;

}

@property (nonatomic,readonly) unsigned long long count; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)init;
-(id)description;
-(void)enumerateCloudItemIDsUsingBlock:(/*^block*/id)arg1 ;
-(void)addCloudItemID:(unsigned long long)arg1 idType:(long long)arg2 ;
@end

