/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class BKSAnimationFenceHandle;

@interface _UIKeyboardChangedInformation : NSObject <NSCopying, NSSecureCoding> {

	BOOL _keyboardOnScreen;
	BKSAnimationFenceHandle* _animationFence;
	CGRect _keyboardPosition;

}

@property (copy,readonly) BKSAnimationFenceHandle * animationFence;              //@synthesize animationFence=_animationFence - In the implementation block
@property (readonly) CGRect keyboardPosition;                                    //@synthesize keyboardPosition=_keyboardPosition - In the implementation block
@property (readonly) BOOL keyboardOnScreen;                                      //@synthesize keyboardOnScreen=_keyboardOnScreen - In the implementation block
+(id)animationFence;
+(BOOL)supportsSecureCoding;
+(id)informationForKeyboardDown;
+(id)informationForKeyboardUp:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(BKSAnimationFenceHandle *)animationFence;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithKeyboardRect:(CGRect)arg1 onScreen:(BOOL)arg2 fence:(id)arg3 ;
-(CGRect)keyboardPosition;
-(BOOL)keyboardOnScreen;
-(void)resetAnimationFencing;
@end

