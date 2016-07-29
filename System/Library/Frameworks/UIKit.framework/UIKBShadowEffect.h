/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBRenderEffect.h>

@class NSString;

@interface UIKBShadowEffect : NSObject <UIKBRenderEffect> {

	NSString* _colorName;
	double _weight;
	CGSize _offset;
	UIEdgeInsets _insets;
	UIEdgeInsets _concaveInsets;

}

@property (assign,nonatomic) CGSize offset;                           //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                     //@synthesize insets=_insets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets concaveInsets;              //@synthesize concaveInsets=_concaveInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) BOOL renderUnder; 
@property (nonatomic,readonly) SEL renderSelector; 
@property (assign,nonatomic) double weight;                           //@synthesize weight=_weight - In the implementation block
+(id)effectWithColor:(id)arg1 offset:(CGSize)arg2 insets:(UIEdgeInsets)arg3 weight:(double)arg4 ;
-(CGColorRef)CGColor;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOffset:(CGSize)arg1 ;
-(CGSize)offset;
-(void)setConcaveInsets:(UIEdgeInsets)arg1 ;
-(double)weight;
-(UIEdgeInsets)insets;
-(BOOL)renderUnder;
-(SEL)renderSelector;
-(void)setWeight:(double)arg1 ;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(id)initWithColor:(id)arg1 offset:(CGSize)arg2 insets:(UIEdgeInsets)arg3 weight:(double)arg4 ;
-(UIEdgeInsets)concaveInsets;
@end

