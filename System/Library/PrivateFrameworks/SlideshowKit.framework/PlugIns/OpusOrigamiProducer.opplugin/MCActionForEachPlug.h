/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MCAction.h>

@class MCAction, NSString;

@interface MCActionForEachPlug : MCAction {

	MCAction* _action;
	NSString* _prefix;

}

@property (copy) NSString * prefix;                //@synthesize prefix=_prefix - In the implementation block
@property (retain) MCAction * action;              //@synthesize action=_action - In the implementation block
+(id)forEachPlugActionForTargetPlugObjectID:(id)arg1 withAction:(id)arg2 andPrefix:(id)arg3 ;
-(void)demolish;
-(void)_copySelfToSnapshot:(id)arg1 ;
-(id)initWithImprint:(id)arg1 ;
-(id)description;
-(MCAction *)action;
-(void)setAction:(MCAction *)arg1 ;
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
-(id)imprint;
@end

