/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXSpringBoardServerInstance/__AXSBReachabilityManagerAccessibility_super.h>

@interface AXSBReachabilityManagerAccessibility : __AXSBReachabilityManagerAccessibility_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryBaseClass;
+(void)_accessibilityPerformValidations:(id)arg1 ;
-(void)_notifyObserversReachabilityModeActive:(BOOL)arg1 excludingObserver:(id)arg2 ;
-(BOOL)_axReachabilityEnabled;
-(id)_axDictionaryOfAnimationProperties;
-(id)_axReachabilitySettings;
-(void)_axSendReachabilityToggledActionWithPayload:(id)arg1 ;
-(void)_axAddReachabilityProperty:(id)arg1 toDictionary:(id)arg2 ;
-(void)_setKeepAliveTimer;
@end

