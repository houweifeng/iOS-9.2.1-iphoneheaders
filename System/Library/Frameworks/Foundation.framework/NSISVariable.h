/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSISVariableDelegate;
@interface NSISVariable : NSObject {

	id<NSISVariableDelegate> _delegate;
	int _refCount;
	unsigned _ident;

}

@property (assign) id<NSISVariableDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) BOOL shouldBeMinimized; 
@property (readonly) int valueRestriction; 
+(id)variableWithName:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(BOOL)arg3 ;
+(id)variableMarkingConstraint:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(BOOL)arg3 ;
+(id)variableWithDelegate:(id)arg1 valueRestriction:(int)arg2 shouldBeMinimized:(BOOL)arg3 ;
-(BOOL)shouldBeIntegral;
-(int)valueRestriction;
-(id)markedConstraint;
-(BOOL)markedConstraintIsEligibleForIntegralizationAdjustment;
-(double)allowedMagnitudeForIntegralizationAdjustmentOfMarkedConstraint;
-(BOOL)valueIsUserVisible;
-(BOOL)shouldBeMinimized;
-(void)setDelegate:(id<NSISVariableDelegate>)arg1 ;
-(id)init;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)description;
-(id<NSISVariableDelegate>)delegate;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
@end

