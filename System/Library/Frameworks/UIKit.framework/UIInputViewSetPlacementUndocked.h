/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIInputViewSetPlacement.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface UIInputViewSetPlacementUndocked : UIInputViewSetPlacement <NSSecureCoding> {

	double _normalizedOffset;
	UIEdgeInsets _chromeBuffer;

}

@property (assign,nonatomic) double normalizedOffset;                //@synthesize normalizedOffset=_normalizedOffset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets chromeBuffer;              //@synthesize chromeBuffer=_chromeBuffer - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)placementWithUndockedOffset:(double)arg1 chromeBuffer:(UIEdgeInsets)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isUndocked;
-(void)setNormalizedOffset:(double)arg1 ;
-(BOOL)inputViewWillAppear;
-(id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3 ;
-(CGRect)remoteIntrinsicContentSizeForInputViewInSet:(id)arg1 ;
-(void)setChromeBuffer:(UIEdgeInsets)arg1 ;
-(double)heightOfInputViews:(id)arg1 ;
-(UIEdgeInsets)chromeBuffer;
-(double)normalizedOffset;
@end

