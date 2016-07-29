/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <libobjc.A.dylib/EKEditItemViewControllerDelegate.h>

@protocol EKEditItemViewControllerProtocol, EKEventDetailItemDelegate;
@class EKEventStore, EKEvent, UIViewController, EKUIRecurrenceAlertController, NSString;

@interface EKEventDetailItem : NSObject <EKEditItemViewControllerDelegate> {

	EKEventStore* _store;
	EKEvent* _event;
	UIViewController*<EKEditItemViewControllerProtocol> _viewController;
	EKUIRecurrenceAlertController* _recurrenceAlertController;
	BOOL _allowsEditing;
	BOOL _shouldIndent;
	int _cellPosition;
	id<EKEventDetailItemDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<EKEventDetailItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL allowsEditing;                                         //@synthesize allowsEditing=_allowsEditing - In the implementation block
@property (assign,nonatomic) int cellPosition;                                           //@synthesize cellPosition=_cellPosition - In the implementation block
@property (assign,nonatomic) BOOL shouldIndent;                                          //@synthesize shouldIndent=_shouldIndent - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;                          //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) BOOL requiresLayoutForSubitemCount; 
@property (nonatomic,readonly) unsigned long long maximumNumberOfSubItems; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<EKEventDetailItemDelegate>)arg1 ;
-(void)dealloc;
-(id<EKEventDetailItemDelegate>)delegate;
-(void)reset;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(BOOL)allowsEditing;
-(void)setAllowsEditing:(BOOL)arg1 ;
-(void)setCellPosition:(int)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(int)cellPosition;
-(unsigned long long)numberOfSubitems;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(BOOL)hasDetailViewControllerAtIndex:(unsigned long long)arg1 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)requiresLayoutForSubitemCount;
-(unsigned long long)maximumNumberOfSubItems;
-(void)notifySubitemDidCommit:(unsigned long long)arg1 ;
-(void)notifyDidStartEditing;
-(void)notifyDidEndEditing;
-(void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(BOOL)editItemViewControllerShouldShowDetachAlert;
-(BOOL)editItemViewControllerCommit:(id)arg1 ;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(void)eventViewController:(id)arg1 didSelectReadOnlySubitem:(unsigned long long)arg2 ;
-(void)setEvent:(id)arg1 store:(id)arg2 ;
-(void)eventViewController:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(void)layoutCellsForWidth:(double)arg1 position:(int)arg2 ;
-(BOOL)shouldIndent;
-(void)eventViewController:(id)arg1 didHighlightSubitem:(unsigned long long)arg2 ;
-(void)eventViewController:(id)arg1 didUnhighlightSubitem:(unsigned long long)arg2 ;
-(void)setShouldIndent:(BOOL)arg1 ;
@end

