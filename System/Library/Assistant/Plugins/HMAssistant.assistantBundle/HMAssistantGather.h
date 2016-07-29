/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/Plugins/HMAssistant.assistantBundle/HMAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMAssistant/HMHomeManagerDelegate.h>

@class HMHomeManager, NSString;

@interface HMAssistantGather : NSObject <HMHomeManagerDelegate> {

	BOOL _fetchComplete;
	HMHomeManager* _manager;
	/*^block*/id _completionHandler;

}

@property (retain) HMHomeManager * manager;                         //@synthesize manager=_manager - In the implementation block
@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,nonatomic) BOOL fetchComplete;                    //@synthesize fetchComplete=_fetchComplete - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFetchComplete:(BOOL)arg1 ;
-(id)getPrimaryHomeName;
-(id)getPrimaryHomeID;
-(BOOL)fetchComplete;
-(HMHomeManager *)manager;
-(id)init;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setManager:(HMHomeManager *)arg1 ;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(void)addToList:(id)arg1 objectReference:(id)arg2 name:(id)arg3 type:(id)arg4 home:(id)arg5 andIdentifer:(id)arg6 ;
-(void)addToList:(id)arg1 service:(id)arg2 ;
-(void)addToList:(id)arg1 room:(id)arg2 ;
-(id)gatherHomeKitObjects;
@end

