/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKit/UICollectionViewController.h>
#import <libobjc.A.dylib/CNContactDataSourceDelegate.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>
#import <libobjc.A.dylib/CNQuickActionsViewDelegate.h>

@protocol CNContactGridViewControllerDelegate, CNContactDataSource;
@class NSObject, CNContactFormatter, NSArray, UIColor, NSDictionary, CNContactGridViewLayout, NSMutableDictionary, NSIndexPath, NSString;

@interface CNContactGridViewController : UICollectionViewController <CNContactDataSourceDelegate, CNAvatarViewDelegate, CNQuickActionsViewDelegate> {

	BOOL _inlineActionsEnabled;
	id<CNContactGridViewControllerDelegate> _delegate;
	NSObject*<CNContactDataSource> _dataSource;
	CNContactFormatter* _contactFormatter;
	NSArray* _inlineActionsCategories;
	long long _numberOfColumns;
	long long _monogrammerStyle;
	UIColor* _backgroundColor;
	NSDictionary* _nameTextAttributes;
	CNContactGridViewLayout* _gridLayout;
	NSMutableDictionary* _preloadedActionsManagers;
	CGSize _avatarSize;
	UIEdgeInsets _avatarMargins;

}

@property (assign,nonatomic,__weak) id<CNContactGridViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSObject*<CNContactDataSource> dataSource;                            //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) CNContactFormatter * contactFormatter;                                //@synthesize contactFormatter=_contactFormatter - In the implementation block
@property (assign,nonatomic) BOOL inlineActionsEnabled;                                            //@synthesize inlineActionsEnabled=_inlineActionsEnabled - In the implementation block
@property (nonatomic,copy) NSArray * inlineActionsCategories;                                      //@synthesize inlineActionsCategories=_inlineActionsCategories - In the implementation block
@property (assign,nonatomic) long long indexOfContactWithExpandedInlineActions; 
@property (assign,nonatomic) long long numberOfColumns;                                            //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (assign,nonatomic) CGSize avatarSize;                                                    //@synthesize avatarSize=_avatarSize - In the implementation block
@property (assign,nonatomic) UIEdgeInsets avatarMargins;                                           //@synthesize avatarMargins=_avatarMargins - In the implementation block
@property (assign,nonatomic) long long monogrammerStyle;                                           //@synthesize monogrammerStyle=_monogrammerStyle - In the implementation block
@property (nonatomic,copy) UIColor * backgroundColor;                                              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSDictionary * nameTextAttributes;                                      //@synthesize nameTextAttributes=_nameTextAttributes - In the implementation block
@property (nonatomic,readonly) id<CNKeyDescriptor> descriptorForRequiredKeys; 
@property (retain) CNContactGridViewLayout * gridLayout;                                           //@synthesize gridLayout=_gridLayout - In the implementation block
@property (copy) NSIndexPath * indexPathOfContactWithExpandedInlineActions; 
@property (nonatomic,retain) NSMutableDictionary * preloadedActionsManagers;                       //@synthesize preloadedActionsManagers=_preloadedActionsManagers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)backgroundColor;
-(void)setDataSource:(NSObject*<CNContactDataSource>)arg1 ;
-(void)setDelegate:(id<CNContactGridViewControllerDelegate>)arg1 ;
-(long long)numberOfColumns;
-(NSObject*<CNContactDataSource>)dataSource;
-(id<CNContactGridViewControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(id)initWithCollectionViewLayout:(id)arg1 ;
-(void)setNumberOfColumns:(long long)arg1 ;
-(long long)monogrammerStyle;
-(void)setMonogrammerStyle:(long long)arg1 ;
-(void)setNameTextAttributes:(NSDictionary *)arg1 ;
-(NSDictionary *)nameTextAttributes;
-(CNContactFormatter *)contactFormatter;
-(void)setContactFormatter:(CNContactFormatter *)arg1 ;
-(id)viewControllerForActionsView:(id)arg1 ;
-(void)actionsView:(id)arg1 willShowActions:(id)arg2 ;
-(void)actionsView:(id)arg1 didPerformAction:(id)arg2 ;
-(void)contactDataSourceDidChange:(id)arg1 ;
-(id)_contactAtIndexPath:(id)arg1 ;
-(void)setGridLayout:(CNContactGridViewLayout *)arg1 ;
-(UIEdgeInsets)avatarMargins;
-(CGSize)avatarSize;
-(void)_configureCell:(id)arg1 ;
-(void)_updateItemSize;
-(void)setAvatarMargins:(UIEdgeInsets)arg1 ;
-(void)setAvatarSize:(CGSize)arg1 ;
-(BOOL)inlineActionsEnabled;
-(NSArray *)inlineActionsCategories;
-(NSIndexPath *)indexPathOfContactWithExpandedInlineActions;
-(void)setIndexPathOfContactWithExpandedInlineActions:(id)arg1 animated:(BOOL)arg2 ;
-(void)setIndexOfContactWithExpandedInlineActions:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setPreloadedActionsManagers:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)preloadedActionsManagers;
-(void)setIndexPathOfContactWithExpandedInlineActions:(NSIndexPath *)arg1 ;
-(void)setIndexOfContactWithExpandedInlineActions:(long long)arg1 ;
-(long long)indexOfContactWithExpandedInlineActions;
-(void)preloadInlineActionsForContactsAtIndexes:(id)arg1 ;
-(void)setInlineActionsEnabled:(BOOL)arg1 ;
-(void)setInlineActionsCategories:(NSArray *)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(id<CNKeyDescriptor>)descriptorForRequiredKeys;
-(CNContactGridViewLayout *)gridLayout;
-(long long)_globalIndexForIndexPath:(id)arg1 ;
-(id)_indexPathForGlobalIndex:(long long)arg1 ;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(void)avatarView:(id)arg1 willShowActions:(id)arg2 ;
@end

