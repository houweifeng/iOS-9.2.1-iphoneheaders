/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <AddressBookUI/ABContactCell.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol MKPlaceViewNearbyAppsCellDelegate;
@class UILabel, UICollectionView, _MKNearbyAppsFlowLayout, NSLayoutConstraint, NSArray, NSString;

@interface MKPlaceViewNearbyAppsCell : ABContactCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	UILabel* _headerLabel;
	UICollectionView* _collectionView;
	_MKNearbyAppsFlowLayout* _flowLayout;
	NSLayoutConstraint* _headerBaselineConstraint;
	NSLayoutConstraint* _collectionHeightConstraint;
	CGSize _iconSize;
	NSArray* _storeItems;
	id<MKPlaceViewNearbyAppsCellDelegate> _delegate;
	NSArray* _marginConstraints;

}

@property (assign,nonatomic,__weak) id<MKPlaceViewNearbyAppsCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * storeItems;                                               //@synthesize storeItems=_storeItems - In the implementation block
@property (nonatomic,retain) NSArray * marginConstraints;                                        //@synthesize marginConstraints=_marginConstraints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
+(id)reuseIdentifier;
+(double)contentHeight;
+(double)_headerBaselineOffsetFromTop;
+(CGSize)_iconSize;
+(id)_headerLabelFont;
-(void)setDelegate:(id<MKPlaceViewNearbyAppsCellDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(id<MKPlaceViewNearbyAppsCellDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)layoutMarginsDidChange;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(NSArray *)marginConstraints;
-(void)contentSizeDidChange;
-(void)refreshMarginConstraints;
-(void)setMarginConstraints:(NSArray *)arg1 ;
-(NSArray *)storeItems;
-(void)setStoreItems:(NSArray *)arg1 ;
@end

