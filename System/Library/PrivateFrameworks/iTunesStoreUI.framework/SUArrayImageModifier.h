/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUImageModifier.h>

@class NSArray;

@interface SUArrayImageModifier : SUImageModifier {

	NSArray* _modifiers;

}

@property (nonatomic,retain) NSArray * modifiers;              //@synthesize modifiers=_modifiers - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)drawBeforeImageForContext:(CGContextRef)arg1 imageFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(void)drawAfterImageForContext:(CGContextRef)arg1 imageFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(BOOL)scalesImage;
-(CGSize)finalSizeForSize:(CGSize)arg1 originalSize:(CGSize)arg2 ;
-(CGRect)imageFrameForImage:(id)arg1 currentFrame:(CGRect)arg2 finalSize:(CGSize)arg3 ;
-(NSArray *)modifiers;
-(void)setModifiers:(NSArray *)arg1 ;
@end

