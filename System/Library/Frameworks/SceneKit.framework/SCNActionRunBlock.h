/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNAction.h>

@protocol OS_dispatch_queue;
@class NSObject;

@interface SCNActionRunBlock : SCNAction {

	/*^block*/id _block;
	NSObject*<OS_dispatch_queue> _queue;

}
+(BOOL)supportsSecureCoding;
+(id)runBlock:(/*^block*/id)arg1 queue:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)reversedAction;
-(void)updateWithTarget:(id)arg1 forTime:(double)arg2 ;
-(BOOL)isCustom;
@end

