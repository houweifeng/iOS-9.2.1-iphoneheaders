/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsFilter.framework/CommunicationsFilter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CommunicationFilterItem;

@interface CommunicationFilterItemCache : NSObject {

	CommunicationFilterItem* _filterItem;
	long long _isInList;

}

@property (assign,nonatomic) long long isInList;              //@synthesize isInList=_isInList - In the implementation block
-(void)dealloc;
-(id)initWithFilterItem:(id)arg1 isInList:(long long)arg2 ;
-(BOOL)matchesItem:(id)arg1 ;
-(long long)isInList;
-(void)setIsInList:(long long)arg1 ;
@end

