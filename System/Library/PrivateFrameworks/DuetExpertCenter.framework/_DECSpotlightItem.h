/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetExpertCenter/_DECItem.h>

@class NSString;

@interface _DECSpotlightItem : _DECItem {

	long long _domain;
	NSString* _itemIdentifier;

}

@property (nonatomic,readonly) long long domain;                       //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) NSString * itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)spotlightItemWithDomain:(long long)arg1 itemIdentifier:(id)arg2 ;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)domain;
-(NSString *)itemIdentifier;
-(id)initWithDomain:(long long)arg1 itemIdentifier:(id)arg2 ;
@end

