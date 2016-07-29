/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIButton.h>

@interface MusicImageAccessoryButton : UIButton {

	double _tallestFontDescender;
	BOOL _shouldBaselineAlignTrailingAccessoryImage;
	UIOffset _trailingAccessoryOffset;

}

@property (assign,nonatomic) BOOL shouldBaselineAlignTrailingAccessoryImage;              //@synthesize shouldBaselineAlignTrailingAccessoryImage=_shouldBaselineAlignTrailingAccessoryImage - In the implementation block
@property (assign,nonatomic) UIOffset trailingAccessoryOffset;                            //@synthesize trailingAccessoryOffset=_trailingAccessoryOffset - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)titleRectForContentRect:(CGRect)arg1 ;
-(CGRect)imageRectForContentRect:(CGRect)arg1 ;
-(void)music_configureControlWithTextDescriptor:(id)arg1 ;
-(BOOL)shouldBaselineAlignTrailingAccessoryImage;
-(void)setShouldBaselineAlignTrailingAccessoryImage:(BOOL)arg1 ;
-(UIOffset)trailingAccessoryOffset;
-(void)setTrailingAccessoryOffset:(UIOffset)arg1 ;
@end

