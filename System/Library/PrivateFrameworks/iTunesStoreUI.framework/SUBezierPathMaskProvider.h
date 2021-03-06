/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUMaskProvider.h>

@class UIBezierPath;

@interface SUBezierPathMaskProvider : SUMaskProvider {

	UIBezierPath* _bezierPath;

}

@property (nonatomic,retain) UIBezierPath * bezierPath;              //@synthesize bezierPath=_bezierPath - In the implementation block
-(void)dealloc;
-(UIBezierPath *)bezierPath;
-(CGPathRef)copyPathForMaskWithSize:(CGSize)arg1 ;
-(void)setBezierPath:(UIBezierPath *)arg1 ;
@end

