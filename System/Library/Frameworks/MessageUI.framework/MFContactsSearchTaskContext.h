/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:48 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFContactsSearchConsumer;
@class NSString, NSMutableSet;

@interface MFContactsSearchTaskContext : NSObject {

	id<MFContactsSearchConsumer> _consumer;
	NSString* _text;
	NSMutableSet* _operations;
	NSMutableSet* _searchQueries;

}

@property (nonatomic,readonly) id<MFContactsSearchConsumer> consumer;              //@synthesize consumer=_consumer - In the implementation block
@property (nonatomic,readonly) NSString * text;                                    //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) NSMutableSet * operations;                          //@synthesize operations=_operations - In the implementation block
@property (nonatomic,readonly) NSMutableSet * searchQueries;                       //@synthesize searchQueries=_searchQueries - In the implementation block
+(id)contextWithConsumer:(id)arg1 text:(id)arg2 operations:(id)arg3 searchQueries:(id)arg4 ;
-(void)dealloc;
-(NSString *)text;
-(BOOL)done;
-(id<MFContactsSearchConsumer>)consumer;
-(NSMutableSet *)operations;
-(BOOL)consumerRespondsToOldSortingCallbacks;
-(BOOL)consumerRespondsToAutocompleteCallbacks;
-(BOOL)consumerRespondsToCorecipientCallbacks;
-(BOOL)consumerRespondsToNetworkingMethods;
-(NSMutableSet *)searchQueries;
@end

