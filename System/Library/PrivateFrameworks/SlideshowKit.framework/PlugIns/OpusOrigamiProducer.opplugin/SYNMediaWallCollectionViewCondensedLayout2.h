/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <UIKit/UICollectionViewLayout.h>

@class NSMutableArray;

@interface SYNMediaWallCollectionViewCondensedLayout2 : UICollectionViewLayout {

	float _spacingRatio;
	unsigned long long _numberOfRows;
	NSMutableArray* _attributes;
	NSMutableArray* _sectionAttributes;
	double _largestWidth;
	CGSize _contentSize;
	CGRect _oldBounds;

}

@property (assign) float spacingRatio;                           //@synthesize spacingRatio=_spacingRatio - In the implementation block
@property (assign) unsigned long long numberOfRows;              //@synthesize numberOfRows=_numberOfRows - In the implementation block
-(void)dealloc;
-(id)init;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(unsigned long long)numberOfRows;
-(CGSize)collectionViewContentSize;
-(void)invalidateLayout;
-(void)setNumberOfRows:(unsigned long long)arg1 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(void)prepareLayout;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(void)prepareForAnimatedBoundsChange:(CGRect)arg1 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1 ;
-(void)finalizeAnimatedBoundsChange;
-(id)indexPathsForItemsInRect:(CGRect)arg1 ;
-(void)setSpacingRatio:(float)arg1 ;
-(float)spacingRatio;
@end

