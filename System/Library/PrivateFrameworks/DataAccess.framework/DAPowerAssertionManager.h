/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCountedSet, NSMapTable, NSMutableSet;

@interface DAPowerAssertionManager : NSObject {

	NSCountedSet* _contexts;
	NSMapTable* _groupIdentifierToContexts;
	NSMapTable* _contextToGroupIdentifier;
	NSMutableSet* _heldAsideGroupIdentifiers;
	NSCountedSet* _heldAsideContexts;
	NSMapTable* _contextToPowerAssertionRef;

}

@property (nonatomic,retain) NSCountedSet * contexts;                               //@synthesize contexts=_contexts - In the implementation block
@property (nonatomic,retain) NSMapTable * groupIdentifierToContexts;                //@synthesize groupIdentifierToContexts=_groupIdentifierToContexts - In the implementation block
@property (nonatomic,retain) NSMapTable * contextToGroupIdentifier;                 //@synthesize contextToGroupIdentifier=_contextToGroupIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableSet * heldAsideGroupIdentifiers;              //@synthesize heldAsideGroupIdentifiers=_heldAsideGroupIdentifiers - In the implementation block
@property (nonatomic,retain) NSCountedSet * heldAsideContexts;                      //@synthesize heldAsideContexts=_heldAsideContexts - In the implementation block
@property (nonatomic,retain) NSMapTable * contextToPowerAssertionRef;               //@synthesize contextToPowerAssertionRef=_contextToPowerAssertionRef - In the implementation block
+(void)vendDaemons:(Class)arg1 ;
+(id)sharedPowerAssertionManager;
-(id)init;
-(void)releasePowerAssertion:(id)arg1 ;
-(void)retainPowerAssertion:(id)arg1 withGroupIdentifier:(id)arg2 ;
-(void)setContexts:(NSCountedSet *)arg1 ;
-(void)setGroupIdentifierToContexts:(NSMapTable *)arg1 ;
-(void)setContextToGroupIdentifier:(NSMapTable *)arg1 ;
-(void)setHeldAsideContexts:(NSCountedSet *)arg1 ;
-(void)setHeldAsideGroupIdentifiers:(NSMutableSet *)arg1 ;
-(void)setContextToPowerAssertionRef:(NSMapTable *)arg1 ;
-(NSCountedSet *)heldAsideContexts;
-(NSMutableSet *)heldAsideGroupIdentifiers;
-(NSMapTable *)groupIdentifierToContexts;
-(NSMapTable *)contextToGroupIdentifier;
-(void)_retainAssertionForContext:(id)arg1 ;
-(void)_releaseAssertionForContext:(id)arg1 ;
-(NSMapTable *)contextToPowerAssertionRef;
-(unsigned long long)powerAssertionRetainCount:(id)arg1 ;
-(id)stateString;
-(void)reattainPowerAssertionsForGroupIdentifier:(id)arg1 ;
-(void)dropPowerAssertionsForGroupIdentifier:(id)arg1 ;
-(NSCountedSet *)contexts;
@end

