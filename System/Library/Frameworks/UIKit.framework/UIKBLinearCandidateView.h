/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKBHandwritingCandidateView.h>

@class UIKBCandidateCollectionView;

@interface UIKBLinearCandidateView : UIKBHandwritingCandidateView

@property (nonatomic,readonly) UIKBCandidateCollectionView * candidatesCollectionView; 
+(Class)cellClass;
-(void)scrollViewDidChangeContentSize:(id)arg1 ;
-(void)reloadDataByAppendingAtEnd:(BOOL)arg1 ;
-(void)refreshSelectedCandidate;
-(unsigned long long)focusableVariantCount;
@end

