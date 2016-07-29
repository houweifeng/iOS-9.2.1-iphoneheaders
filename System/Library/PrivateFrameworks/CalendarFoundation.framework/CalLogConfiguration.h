/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface CalLogConfiguration : NSObject {

	NSString* _name;
	NSMutableArray* _nodes;

}

@property (nonatomic,retain) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableArray * nodes;              //@synthesize nodes=_nodes - In the implementation block
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)initWithSimpleDefinition:(id)arg1 ;
-(void)parseConfigurationDefinition:(id)arg1 ;
-(id)parseNodeDefinition:(id)arg1 ;
-(id)parseWriterDefinition:(id)arg1 ;
-(id)parseFilterDefinition:(id)arg1 ;
-(id)initWithDetailedDefinition:(id)arg1 ;
-(NSMutableArray *)nodes;
-(void)setNodes:(NSMutableArray *)arg1 ;
@end

