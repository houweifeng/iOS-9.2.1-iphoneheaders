/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIKeyboardTextSelectionController.h>

@interface _UIKeyboardAsyncTextSelectionController : _UIKeyboardTextSelectionController {

	BOOL _shouldDelayShowSelectionCommands;

}
-(void)beginFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)updateFloatingCursorAtPoint:(CGPoint)arg1 ;
-(void)endFloatingCursor;
-(BOOL)cursorPositionIsContainedByRange:(id)arg1 ;
-(void)showSelectionCommands;
-(void)selectPositionAtBoundary:(long long)arg1 inDirection:(long long)arg2 relativeToSelection:(id)arg3 executionContext:(id)arg4 ;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 executionContext:(id)arg2 ;
-(CGRect)caretRectForLeftmostSelectedPosition;
-(CGRect)caretRectForRightmostSelectedPosition;
-(void)selectPositionAtPoint:(CGPoint)arg1 executionContext:(id)arg2 ;
-(void)selectTextWithGranularity:(long long)arg1 atPoint:(CGPoint)arg2 executionContext:(id)arg3 ;
-(void)beginSelectionWithBaseAtSelectionBoundaryInDirection:(long long)arg1 initialExtentPoint:(CGPoint)arg2 executionContext:(id)arg3 ;
-(void)updateSelectionWithExtentAtBoundary:(long long)arg1 inDirection:(long long)arg2 executionContext:(id)arg3 ;
-(void)updateSelectionWithExtentPoint:(CGPoint)arg1 withBoundary:(long long)arg2 executionContext:(id)arg3 ;
@end

