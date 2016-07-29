/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSharing/HSRequest.h>

@class NSDictionary;

@interface HSControlPromptEntryRequest : HSRequest {

	unsigned _interfaceID;
	NSDictionary* _attributes;

}

@property (nonatomic,readonly) NSDictionary * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,readonly) unsigned interfaceID;                   //@synthesize interfaceID=_interfaceID - In the implementation block
+(id)requestWithInterfaceID:(unsigned)arg1 attributes:(id)arg2 ;
+(id)portInfoRequestWithInterfaceID:(unsigned)arg1 key:(unsigned)arg2 ;
-(NSDictionary *)attributes;
-(unsigned)interfaceID;
-(id)initWithInterfaceID:(unsigned)arg1 attributes:(id)arg2 ;
-(id)_bodyDataForAttributes:(id)arg1 ;
-(id)_commandStringForCommand:(unsigned)arg1 ;
@end

