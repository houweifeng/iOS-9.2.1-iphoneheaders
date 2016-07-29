/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIAttributedStringView.h>

@class SKUIAttributedStringView;

@interface SKUIAttributedStringWrapperView : SKUIAttributedStringView {

	SKUIAttributedStringView* _delegateView;

}

@property (nonatomic,readonly) SKUIAttributedStringView * delegateView;              //@synthesize delegateView=_delegateView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(id)layout;
-(id)textColor;
-(double)baselineOffset;
-(void)setLayout:(id)arg1 ;
-(double)firstBaselineOffset;
-(void)setStringTreatment:(long long)arg1 ;
-(void)setTreatmentColor:(id)arg1 ;
-(void)setTextColorFollowsTintColor:(BOOL)arg1 ;
-(void)setRequiredBadges:(id)arg1 ;
-(BOOL)usesTallCharacterSet;
-(void)setFirstLineTopInset:(long long)arg1 ;
-(id)requiredBadges;
-(long long)stringTreatment;
-(id)treatmentColor;
-(long long)firstLineTopInset;
-(BOOL)textColorFollowsTintColor;
-(SKUIAttributedStringView *)delegateView;
@end

