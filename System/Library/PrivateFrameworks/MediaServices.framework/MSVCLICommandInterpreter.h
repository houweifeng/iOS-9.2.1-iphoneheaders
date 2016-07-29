/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray;

@interface MSVCLICommandInterpreter : NSObject {

	NSMutableDictionary* _commandToInvocationsMap;
	NSMutableArray* _retainedBlockHandlers;

}
-(id)init;
-(void)addHandlerToCommand:(id)arg1 withTarget:(id)arg2 action:(SEL)arg3 ;
-(void)addHandlerToCommand:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)executeWithArgumentCount:(int)arg1 arguments:(const char**)arg2 ;
@end

