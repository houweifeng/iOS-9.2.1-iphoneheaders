/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameKitServices/GameKitServices-Structs.h>
@interface GCKEventItem : NSObject {

	SCD_Struct_GC4* _event;
	unsigned _pid;

}

@property (assign) SCD_Struct_GC4* event;              //@synthesize event=_event - In the implementation block
@property (assign) unsigned pid;                       //@synthesize pid=_pid - In the implementation block
-(void)dealloc;
-(id)init;
-(SCD_Struct_GC4*)event;
-(void)setEvent:(SCD_Struct_GC4*)arg1 ;
-(void)setPid:(unsigned)arg1 ;
-(unsigned)pid;
-(id)initWithEvent:(SCD_Struct_GC4*)arg1 remotePeer:(unsigned)arg2 ;
@end

