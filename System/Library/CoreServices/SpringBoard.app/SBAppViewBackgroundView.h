/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <SpringBoard/SBAppViewBackgroundView.h>

@protocol SBAppViewBackgroundView <NSObject>
@property (assign,nonatomic) BOOL hasDiscreteWallpaperEffect; 
@property (assign,nonatomic) long long wallpaperStyle; 
@optional
-(long long)wallpaperStyle;
-(void)setWallpaperStyle:(long long)arg1;
-(BOOL)hasDiscreteWallpaperEffect;
-(void)setHasDiscreteWallpaperEffect:(BOOL)arg1;

@end


@class NSString;

@interface SBAppViewBackgroundView : UIView <SBAppViewBackgroundView> {

	BOOL _hasDiscreteWallpaperEffect;
	long long _wallpaperStyle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasDiscreteWallpaperEffect;              //@synthesize hasDiscreteWallpaperEffect=_hasDiscreteWallpaperEffect - In the implementation block
@property (assign,nonatomic) long long wallpaperStyle;                     //@synthesize wallpaperStyle=_wallpaperStyle - In the implementation block
-(long long)_backgroundStyle;
-(long long)wallpaperStyle;
-(void)setWallpaperStyle:(long long)arg1 ;
-(void)_recalulateBackgroundColor;
-(BOOL)hasDiscreteWallpaperEffect;
-(void)setHasDiscreteWallpaperEffect:(BOOL)arg1 ;
-(NSString *)description;
-(BOOL)_isTranslucent;
@end
