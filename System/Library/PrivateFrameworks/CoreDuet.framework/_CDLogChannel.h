/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface _CDLogChannel : NSObject {

	int _logLevel;
	NSString* _name;

}

@property (retain) NSString * name;              //@synthesize name=_name - In the implementation block
@property (assign) int logLevel;                 //@synthesize logLevel=_logLevel - In the implementation block
+(id)sharedLogChannelWithName:(id)arg1 ;
+(id)contextChannel;
+(id)interactionChannel;
+(id)knowledgeChannel;
-(int)logLevel;
-(void)setLogLevel:(int)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(void)setLogLevelFromDefaults;
@end

