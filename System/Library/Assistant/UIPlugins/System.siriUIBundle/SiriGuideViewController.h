/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/System.siriUIBundle/System
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <System/System-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>

@class NSMutableArray, NSMapTable, SiriGuideModel, NSString;

@interface SiriGuideViewController : SiriUISnippetViewController <UICollectionViewDataSource, UICollectionViewDelegate> {

	BOOL _standalone;
	NSMutableArray* _filteredDomainIndices;
	NSMapTable* _iconsByDomain;
	SiriGuideModel* _guideModel;

}

@property (nonatomic,readonly) SiriGuideModel * guideModel;              //@synthesize guideModel=_guideModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithShowHelpCommand:(id)arg1 ;
-(long long)_numberOfHelpDomains;
-(SiriGuideModel *)guideModel;
-(id)_iconImageForDomain:(id)arg1 ;
-(double)_heightOfRow;
-(void)_filterDomains;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)snippet;
-(double)desiredHeightForWidth:(double)arg1 ;
-(long long)_pinAnimationType;
-(Class)transparentHeaderViewClass;
@end

