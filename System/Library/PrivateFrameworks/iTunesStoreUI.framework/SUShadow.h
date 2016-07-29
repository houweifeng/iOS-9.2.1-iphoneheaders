/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface SUShadow : NSObject <NSCoding, NSCopying> {

	UIColor* _color;
	CGSize _offset;
	double _opacity;
	double _radius;

}

@property (nonatomic,retain) UIColor * color;              //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) CGSize offset;                //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) double opacity;               //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) double radius;                //@synthesize radius=_radius - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(void)setOffset:(CGSize)arg1 ;
-(CGSize)offset;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)applyToLayer:(id)arg1 ;
-(void)setRadius:(double)arg1 ;
-(double)radius;
@end

