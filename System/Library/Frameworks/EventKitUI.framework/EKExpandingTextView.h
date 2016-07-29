/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UITextView.h>
#import <UIKit/UITextViewDelegate.h>

@class UILabel, NSString;

@interface EKExpandingTextView : UITextView <UITextViewDelegate> {

	UILabel* _placeholderLabel;
	BOOL _allowEnclosingViewScroll;
	CGSize _previousIntrinsicContentSize;

}

@property (nonatomic,copy) NSString * placeholder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)automaticallySelectedOverlay;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)setTextAlignment:(long long)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)placeholder;
-(BOOL)_shouldScrollEnclosingScrollView;
-(void)_updatePlaceholder;
@end

