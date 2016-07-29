/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSString;

@interface MSVXPCTransaction : NSObject {

	NSUUID* _identifier;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                          //@synthesize name=_name - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
+(id)activeTransactions;
-(void)endTransaction;
-(void)dealloc;
-(id)description;
-(BOOL)isActive;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(void)endTransactionOnDate:(id)arg1 ;
-(void)beginTransaction;
-(id)_identifier;
@end
