/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BSXPCServerClient <NSObject>
@property (nonatomic,retain,readonly) NSObject*<OS_xpc_object> connection; 
@required
-(void)invalidate;
-(void)suspend;
-(void)resume;
-(NSObject*<OS_xpc_object>)connection;

@end

