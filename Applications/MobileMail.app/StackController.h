/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <MobileMail/StackElementDelegate.h>

@protocol StackDataSource, StackDelegate;
@class UIView, NSArray, NSMutableArray, NSMutableDictionary;

@interface StackController : NSObject <StackElementDelegate> {

	id<StackDataSource> _dataSource;
	id<StackDelegate> _delegate;
	UIView* _stackContainerView;
	UIEdgeInsets _stackContainerViewEdgeInsets;
	id _defaultItem;
	UIView* _defaultView;
	NSArray* _itemsToDisplay;
	NSMutableArray* _stackedItems;
	NSMutableArray* _orderedItems;
	NSMutableDictionary* _stackElementsByItem;
	NSMutableDictionary* _loadRequestDatesByItem;
	double _lastDisplayedItemsUpdateRequest;
	unsigned long long _transactionCount;
	BOOL _updateNeeded;
	BOOL _loadingData;
	BOOL _animateStateTransitions;
	BOOL _isAnimating;
	BOOL _isTerminating;
	BOOL _isSuspended;
	BOOL _itemsBecameStacked;

}

@property (assign,nonatomic) id<StackDataSource> dataSource;                                        //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) id<StackDelegate> delegate;                                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isAnimating; 
@property (nonatomic,readonly) unsigned long long maximumNumberOfVisibleStackElements; 
@property (nonatomic,readonly) id defaultItem;                                                      //@synthesize defaultItem=_defaultItem - In the implementation block
@property (nonatomic,readonly) UIView * defaultView;                                                //@synthesize defaultView=_defaultView - In the implementation block
@property (assign,nonatomic) BOOL animateStateTransitions;                                          //@synthesize animateStateTransitions=_animateStateTransitions - In the implementation block
@property (nonatomic,copy) NSArray * itemsToDisplay;                                                //@synthesize itemsToDisplay=_itemsToDisplay - In the implementation block
-(void)removeStackedViews:(BOOL)arg1 ;
-(unsigned long long)maximumNumberOfVisibleStackElements;
-(void)displayStackedViewsForItems:(id)arg1 animated:(BOOL)arg2 ;
-(id)keyForItem:(id)arg1 ;
-(id)stackedViewForItem:(id)arg1 ;
-(void)stackDataSourceDidLoadItemData:(id)arg1 ;
-(void)setAnimateStateTransitions:(BOOL)arg1 ;
-(void)setItemsToDisplay:(NSArray *)arg1 ;
-(void)setNeedsToUpdateDisplayedItems:(BOOL)arg1 immediately:(BOOL)arg2 ;
-(void)updateDisplayedItems;
-(BOOL)animateStateTransitions;
-(NSArray *)itemsToDisplay;
-(id)defaultItem;
-(void)addStackedItem:(id)arg1 ;
-(id)stackElementForItem:(id)arg1 createIfNeeded:(BOOL)arg2 ;
-(void)stackElement:(id)arg1 currentStateDidChangeFrom:(int)arg2 to:(int)arg3 ;
-(id)stackContainerView;
-(void)updateStackElements;
-(void)updateStackElement:(id)arg1 ;
-(void)setNeedsToUpdateStackElements;
-(void)updateIsAnimating;
-(BOOL)isAnyStackElementBeingStacked;
-(BOOL)isDataAvailableForStackElement:(id)arg1 loadIfNeeded:(BOOL)arg2 ;
-(long long)maximumStackElementDepth;
-(void)setIsAnimating:(BOOL)arg1 ;
-(void)removeStackElement:(id)arg1 ;
-(UIEdgeInsets)stackContainerViewEdgeInsets;
-(BOOL)stackIsTerminating;
-(id)viewForStackElement:(id)arg1 ;
-(id)viewBelowStackElement:(id)arg1 ;
-(void)stackElement:(id)arg1 willRemoveView:(id)arg2 ;
-(void)stackElement:(id)arg1 targetStateDidChangeFrom:(int)arg2 to:(int)arg3 ;
-(void)endTransaction;
-(void)setDataSource:(id<StackDataSource>)arg1 ;
-(void)setDelegate:(id<StackDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<StackDataSource>)dataSource;
-(id<StackDelegate>)delegate;
-(BOOL)isAnimating;
-(UIView *)defaultView;
-(void)beginTransaction;
@end

