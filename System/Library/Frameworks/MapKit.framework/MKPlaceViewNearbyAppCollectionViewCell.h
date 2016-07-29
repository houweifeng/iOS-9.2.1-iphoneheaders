/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UILabel, UIImageView, NSDictionary;

@interface MKPlaceViewNearbyAppCollectionViewCell : UICollectionViewCell {

	UILabel* _titleLabel;
	UILabel* _categoryLabel;
	UILabel* _priceLabel;
	UIImageView* _icon;
	NSDictionary* _storeData;

}

@property (nonatomic,retain) NSDictionary * storeData;              //@synthesize storeData=_storeData - In the implementation block
+(id)reuseIdentifier;
+(double)heightWithIconSize:(CGSize)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)tintColorDidChange;
-(void)prepareForReuse;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
-(NSDictionary *)storeData;
-(void)setStoreData:(NSDictionary *)arg1 ;
@end

