/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol RUITopLevelPageElement;
@class NSString, UIView, RUITableView, RUIWebView, RUIPasscodeView, RUISpinnerView, UIToolbar, UIBarButtonItem, NSMutableArray, RUIElement, RUIStyle, RUIBarButtonItem, RUIObjectModel, UILabel, NSArray, NSDictionary;

@interface RUIPage : UIViewController <UIWebViewDelegate> {

	NSString* _pageID;
	UIView* _containerView;
	RUITableView* _tableViewOM;
	RUIWebView* _webViewOM;
	RUIPasscodeView* _passcodeViewOM;
	RUISpinnerView* _spinnerViewOM;
	NSString* _validationFunction;
	BOOL _loading;
	NSString* _navTitle;
	NSString* _loadingTitle;
	BOOL _hidesBackButton;
	UIToolbar* _toolbar;
	UIBarButtonItem* _leftToolbarItem;
	UIBarButtonItem* _rightToolbarItem;
	UIBarButtonItem* _middleFlexSpace;
	UIBarButtonItem* _leftFlexSpace;
	RUIPage* _parentPage;
	NSMutableArray* _childPages;
	NSMutableArray* _didAppearCallbacks;
	BOOL _showsTitlesAsHeaderViews;
	RUIElement*<RUITopLevelPageElement> _primaryElement;
	RUIStyle* _style;
	NSString* _backButtonTitle;
	long long _loadingIndicatorStyle;
	RUIBarButtonItem* _rightNavigationBarButtonItem;
	RUIBarButtonItem* _leftNavigationBarButtonItem;
	RUIBarButtonItem* _rightToolbarButtonItem;
	RUIBarButtonItem* _leftToolbarButtonItem;
	RUIBarButtonItem* _middleToolbarButtonItem;
	UIBarButtonItem* _middleToolbarItem;
	RUIObjectModel* _objectModel;
	double _customMargin;
	UIEdgeInsets _titleLabelPadding;
	UIEdgeInsets _customEdgeInsets;

}

@property (nonatomic,copy) NSString * pageID;                                                 //@synthesize pageID=_pageID - In the implementation block
@property (nonatomic,readonly) UIView * containerView;                                        //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) RUIElement*<RUITopLevelPageElement> primaryElement;              //@synthesize primaryElement=_primaryElement - In the implementation block
@property (nonatomic,readonly) RUITableView * tableViewOM; 
@property (nonatomic,readonly) RUIWebView * webViewOM; 
@property (nonatomic,readonly) RUIPasscodeView * passcodeViewOM; 
@property (nonatomic,readonly) RUISpinnerView * spinnerViewOM; 
@property (nonatomic,retain) RUIStyle * style;                                                //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSString * validationFunction;                                     //@synthesize validationFunction=_validationFunction - In the implementation block
@property (nonatomic,copy) NSString * navTitle;                                               //@synthesize navTitle=_navTitle - In the implementation block
@property (nonatomic,copy) NSString * loadingTitle;                                           //@synthesize loadingTitle=_loadingTitle - In the implementation block
@property (nonatomic,copy) NSString * backButtonTitle;                                        //@synthesize backButtonTitle=_backButtonTitle - In the implementation block
@property (assign,nonatomic) BOOL showsTitlesAsHeaderViews;                                   //@synthesize showsTitlesAsHeaderViews=_showsTitlesAsHeaderViews - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel; 
@property (assign,nonatomic) UIEdgeInsets titleLabelPadding;                                  //@synthesize titleLabelPadding=_titleLabelPadding - In the implementation block
@property (assign,nonatomic) long long loadingIndicatorStyle;                                 //@synthesize loadingIndicatorStyle=_loadingIndicatorStyle - In the implementation block
@property (assign,getter=isLoading,nonatomic) BOOL loading;                                   //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) BOOL hidesBackButton;                                            //@synthesize hidesBackButton=_hidesBackButton - In the implementation block
@property (nonatomic,retain) RUIBarButtonItem * rightNavigationBarButtonItem;                 //@synthesize rightNavigationBarButtonItem=_rightNavigationBarButtonItem - In the implementation block
@property (nonatomic,retain) RUIBarButtonItem * leftNavigationBarButtonItem;                  //@synthesize leftNavigationBarButtonItem=_leftNavigationBarButtonItem - In the implementation block
@property (nonatomic,retain) RUIBarButtonItem * rightToolbarButtonItem;                       //@synthesize rightToolbarButtonItem=_rightToolbarButtonItem - In the implementation block
@property (nonatomic,retain) RUIBarButtonItem * leftToolbarButtonItem;                        //@synthesize leftToolbarButtonItem=_leftToolbarButtonItem - In the implementation block
@property (nonatomic,retain) RUIBarButtonItem * middleToolbarButtonItem;                      //@synthesize middleToolbarButtonItem=_middleToolbarButtonItem - In the implementation block
@property (nonatomic,readonly) NSArray * buttonItems; 
@property (nonatomic,retain) UIBarButtonItem * rightToolbarItem;                              //@synthesize rightToolbarItem=_rightToolbarItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * leftToolbarItem;                               //@synthesize leftToolbarItem=_leftToolbarItem - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * middleToolbarItem;                             //@synthesize middleToolbarItem=_middleToolbarItem - In the implementation block
@property (nonatomic,readonly) UIToolbar * toolbar;                                           //@synthesize toolbar=_toolbar - In the implementation block
@property (assign,nonatomic,__weak) RUIObjectModel * objectModel;                             //@synthesize objectModel=_objectModel - In the implementation block
@property (nonatomic,readonly) NSArray * childPages;                                          //@synthesize childPages=_childPages - In the implementation block
@property (nonatomic,__weak,readonly) RUIPage * parentPage;                                   //@synthesize parentPage=_parentPage - In the implementation block
@property (assign,nonatomic) double customMargin;                                             //@synthesize customMargin=_customMargin - In the implementation block
@property (assign,nonatomic) UIEdgeInsets customEdgeInsets;                                   //@synthesize customEdgeInsets=_customEdgeInsets - In the implementation block
@property (nonatomic,retain) NSDictionary * rightNavigationBarButton; 
@property (nonatomic,retain) NSDictionary * leftNavigationBarButton; 
@property (nonatomic,retain) NSDictionary * rightToolbarButton; 
@property (nonatomic,retain) NSDictionary * leftToolbarButton; 
@property (nonatomic,retain) NSDictionary * middleToolbarButton; 
@property (nonatomic,readonly) NSArray * buttons; 
@property (nonatomic,readonly) NSArray * accessoryViews; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(UIView *)containerView;
-(BOOL)hidesBackButton;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(RUIStyle *)style;
-(id)preferredFocusedView;
-(void)viewDidLayoutSubviews;
-(NSString *)backButtonTitle;
-(void)setBackButtonTitle:(NSString *)arg1 ;
-(void)setHidesBackButton:(BOOL)arg1 ;
-(void)setStyle:(RUIStyle *)arg1 ;
-(void)setButton:(id)arg1 enabled:(BOOL)arg2 ;
-(UILabel *)titleLabel;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(UIToolbar *)toolbar;
-(void)_setContentInset:(double)arg1 ;
-(NSArray *)buttonItems;
-(BOOL)isLoading;
-(NSArray *)buttons;
-(BOOL)needsToShowToolbarInPrefsAppRoot;
-(void)setPageID:(NSString *)arg1 ;
-(NSString *)pageID;
-(void)setShowsTitlesAsHeaderViews:(BOOL)arg1 ;
-(UIEdgeInsets)titleLabelPadding;
-(void)_updateLoadingUI;
-(void)_reloadTitleLabel;
-(UIBarButtonItem *)middleToolbarItem;
-(void)_rightNavigationBarButtonPressed:(id)arg1 ;
-(void)setRightNavigationBarButtonItem:(id)arg1 barButtonItem:(id)arg2 ;
-(void)_leftNavigationBarButtonPressed:(id)arg1 ;
-(void)setLeftNavigationBarButtonItem:(id)arg1 barButtonItem:(id)arg2 ;
-(id)flexibleSpace;
-(void)_rightToolbarButtonPressed:(id)arg1 ;
-(void)setRightToolbarItem:(UIBarButtonItem *)arg1 ;
-(void)_middleToolbarButtonPressed:(id)arg1 ;
-(void)setMiddleToolbarItem:(UIBarButtonItem *)arg1 ;
-(void)_leftToolbarButtonPressed:(id)arg1 ;
-(void)setLeftToolbarItem:(UIBarButtonItem *)arg1 ;
-(void)setRightToolbarButtonItem:(RUIBarButtonItem *)arg1 ;
-(void)setMiddleToolbarButtonItem:(RUIBarButtonItem *)arg1 ;
-(void)setLeftToolbarButtonItem:(RUIBarButtonItem *)arg1 ;
-(void)setRightNavigationBarButtonItem:(RUIBarButtonItem *)arg1 ;
-(void)_barButtonPressed:(id)arg1 isRight:(BOOL)arg2 isNavbar:(BOOL)arg3 ;
-(NSArray *)accessoryViews;
-(void)_setParentPage:(id)arg1 ;
-(RUIObjectModel *)objectModel;
-(void)_updateWithCompletedChild:(id)arg1 ;
-(void)setObjectModel:(RUIObjectModel *)arg1 ;
-(void)populatePostbackDictionary:(id)arg1 ;
-(double)customMargin;
-(UIEdgeInsets)customEdgeInsets;
-(void)setTitleLabelPadding:(UIEdgeInsets)arg1 ;
-(void)setHasToolbar;
-(void)setRightToolbarButton:(NSDictionary *)arg1 ;
-(NSDictionary *)rightToolbarButton;
-(void)setMiddleToolbarButton:(NSDictionary *)arg1 ;
-(NSDictionary *)middleToolbarButton;
-(void)setLeftToolbarButton:(NSDictionary *)arg1 ;
-(NSDictionary *)leftToolbarButton;
-(void)setRightNavigationBarButton:(NSDictionary *)arg1 ;
-(NSDictionary *)rightNavigationBarButton;
-(void)setLeftNavigationBarButton:(NSDictionary *)arg1 ;
-(NSDictionary *)leftNavigationBarButton;
-(void)_addChildPage:(id)arg1 ;
-(void)_updateParentPage;
-(id)elementsWithName:(id)arg1 ;
-(void)setPrimaryElement:(RUIElement*<RUITopLevelPageElement>)arg1 ;
-(void)addDidAppearBlock:(/*^block*/id)arg1 ;
-(RUIElement*<RUITopLevelPageElement>)primaryElement;
-(NSString *)validationFunction;
-(void)setValidationFunction:(NSString *)arg1 ;
-(BOOL)showsTitlesAsHeaderViews;
-(RUIBarButtonItem *)rightNavigationBarButtonItem;
-(RUIBarButtonItem *)leftNavigationBarButtonItem;
-(RUIBarButtonItem *)rightToolbarButtonItem;
-(RUIBarButtonItem *)leftToolbarButtonItem;
-(RUIBarButtonItem *)middleToolbarButtonItem;
-(NSArray *)childPages;
-(void)setCustomEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setNavTitle:(NSString *)arg1 ;
-(void)setLoadingIndicatorStyle:(long long)arg1 ;
-(long long)loadingIndicatorStyle;
-(void)setLoading:(BOOL)arg1 ;
-(void)_updateToolbar;
-(NSString *)navTitle;
-(void)setLeftNavigationBarButtonItem:(RUIBarButtonItem *)arg1 ;
-(void)setLoadingTitle:(NSString *)arg1 ;
-(NSString *)loadingTitle;
-(RUIPage *)parentPage;
-(BOOL)hasWebView;
-(RUIWebView *)webViewOM;
-(BOOL)hasTableView;
-(RUITableView *)tableViewOM;
-(BOOL)hasPasscodeView;
-(RUIPasscodeView *)passcodeViewOM;
-(BOOL)hasSpinnerView;
-(RUISpinnerView *)spinnerViewOM;
-(UIBarButtonItem *)leftToolbarItem;
-(UIBarButtonItem *)rightToolbarItem;
-(void)setCustomMargin:(double)arg1 ;
@end

