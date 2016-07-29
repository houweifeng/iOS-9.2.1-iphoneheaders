/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXFrontBoardUtils.framework/AXFrontBoardUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBProcessManagerObserver.h>
#import <libobjc.A.dylib/FBProcessObserver.h>

@class NSString;

@interface AXFrontBoardProcessWatcher : NSObject <FBProcessManagerObserver, FBProcessObserver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)process:(id)arg1 stateDidChangeFromState:(id)arg2 toState:(id)arg3 ;
-(void)processDidExit:(id)arg1 ;
-(void)processManager:(id)arg1 didAddProcess:(id)arg2 ;
-(void)processManager:(id)arg1 didRemoveProcess:(id)arg2 ;
-(id)_accessibilitySpokenNameForProcess:(id)arg1 ;
@end

