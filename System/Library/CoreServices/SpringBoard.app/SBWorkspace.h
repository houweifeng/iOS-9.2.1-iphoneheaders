/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSDisplay, FBWorkspaceEventQueue, NSHashTable;

@interface SBWorkspace : NSObject {

	FBSDisplay* _display;
	FBWorkspaceEventQueue* _eventQueue;
	NSHashTable* _slaves;

}

@property (nonatomic,retain,readonly) FBSDisplay * display;                            //@synthesize display=_display - In the implementation block
@property (nonatomic,retain,readonly) FBWorkspaceEventQueue * eventQueue;              //@synthesize eventQueue=_eventQueue - In the implementation block
+(id)mainWorkspace;
-(id)createRequestForApplicationActivation:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)executeTransitionRequest:(id)arg1 ;
-(id)createRequestWithOptions:(unsigned long long)arg1 ;
-(BOOL)requestTransitionWithOptions:(unsigned long long)arg1 builder:(/*^block*/id)arg2 validator:(/*^block*/id)arg3 ;
-(id)initWithDisplay:(id)arg1 eventQueue:(id)arg2 ;
-(BOOL)_executeTransitionRequest:(id)arg1 options:(unsigned long long)arg2 validator:(/*^block*/id)arg3 ;
-(BOOL)requestTransitionWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)executeTransitionRequest:(id)arg1 withValidator:(/*^block*/id)arg2 ;
-(id)transactionForTransitionRequest:(id)arg1 ;
-(void)addSlave:(id)arg1 ;
-(void)removeSlave:(id)arg1 ;
-(id)_slaveTransactionsForTransitionRequest:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(FBSDisplay *)display;
-(FBWorkspaceEventQueue *)eventQueue;
@end

