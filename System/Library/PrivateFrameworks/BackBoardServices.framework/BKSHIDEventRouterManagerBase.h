/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface BKSHIDEventRouterManagerBase : NSObject {

	NSArray* _eventRouters;

}

@property (nonatomic,retain) NSArray * eventRouters;              //@synthesize eventRouters=_eventRouters - In the implementation block
-(void)setEventRouters:(NSArray *)arg1 ;
-(NSArray *)eventRouters;
-(long long)routerDestinationForDescriptor:(id)arg1 ;
-(id)init;
-(id)description;
@end

