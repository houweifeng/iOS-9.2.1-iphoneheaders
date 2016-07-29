/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIShelfPageSectionConfiguration.h>

@interface SKUIMenuBarTemplateShelfPageSectionConfiguration : SKUIShelfPageSectionConfiguration {

	id _fixedElementsCollectionViewCell;
	unsigned long long _numberOfIterations;
	long long _focusedIndex;

}
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(id)cellForShelfViewElement:(id)arg1 indexPath:(id)arg2 ;
-(CGSize)cellSizeForShelfViewElement:(id)arg1 indexPath:(id)arg2 numberOfShelfItems:(long long)arg3 ;
-(void)collectionViewWillApplyLayoutAttributes:(id)arg1 ;
-(long long)numberOfSectionCells;
-(void)registerReusableClassesForCollectionView:(id)arg1 ;
-(void)reloadShelfLayoutDataForShelfViewElement:(id)arg1 withShelfItemViewElements:(id)arg2 requestCellLayouts:(BOOL)arg3 numberOfShelfItems:(long long)arg4 ;
-(id)effectiveViewElementForShelfItemViewElement:(id)arg1 ;
-(id)initWithNumberOfIterations:(unsigned long long)arg1 ;
-(id)_focusedViewElement;
-(unsigned long long)numberOfIterations;
@end

