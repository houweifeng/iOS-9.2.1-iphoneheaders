/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UICollectionViewController.h>
#import <UIKit/UIViewControllerPreviewingDelegate_Private.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <libobjc.A.dylib/PageRangeDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol OS_dispatch_queue;
@class UIPrintPanelViewController, UIView, UILabel, NSURL, NSObject, NSLayoutConstraint, UIDocumentInteractionController, NSMutableArray, UIPrintPaper, NSString;

@interface UIPrintPreviewViewController : UICollectionViewController <UIViewControllerPreviewingDelegate_Private, UIDocumentInteractionControllerDelegate, UICollectionViewDelegate, UIScrollViewDelegate, UICollectionViewDelegate, PageRangeDelegate, UINavigationControllerDelegate> {

	long long _numPages;
	CGSize _pageSize;
	BOOL _grayscalePreview;
	BOOL _accessibilityScrollTriggered;
	UIPrintPanelViewController* _printPanelViewController;
	UIView* _pageLabelBackgroundView;
	UILabel* _pageLabel;
	long long _pageIndexOnPageLabel;
	NSURL* _pdfURL;
	CGPDFDocumentRef _pdfDocRef;
	NSObject*<OS_dispatch_queue> _pageRendererQueue;
	NSLayoutConstraint* _pageLabelBadgeVerticalPositionConstraint;
	UIDocumentInteractionController* _documentInteractionController;
	id previousNavigationControllerDelegate;
	NSURL* _sharePDFFileURL;
	BOOL _scaleUpOnDestinationPaper;
	NSMutableArray* _arrayOfPageImages;
	NSURL* _quickLookPDFURL;
	UIPrintPaper* _destinationPaper;
	NSString* _pdfPassword;
	long long _initialPageIndexToCenter;

}

@property (retain) NSMutableArray * arrayOfPageImages;              //@synthesize arrayOfPageImages=_arrayOfPageImages - In the implementation block
@property (retain) NSURL * pdfURL; 
@property (retain) NSURL * quickLookPDFURL;                         //@synthesize quickLookPDFURL=_quickLookPDFURL - In the implementation block
@property (assign) BOOL grayscalePreview; 
@property (retain) UIPrintPaper * destinationPaper;                 //@synthesize destinationPaper=_destinationPaper - In the implementation block
@property (assign) BOOL scaleUpOnDestinationPaper;                  //@synthesize scaleUpOnDestinationPaper=_scaleUpOnDestinationPaper - In the implementation block
@property (retain) NSString * pdfPassword;                          //@synthesize pdfPassword=_pdfPassword - In the implementation block
@property (readonly) long long currentCenterPageIndex; 
@property (assign) long long initialPageIndexToCenter;              //@synthesize initialPageIndexToCenter=_initialPageIndexToCenter - In the implementation block
@property (readonly) long long numPages;                            //@synthesize numPages=_numPages - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldShowMenuForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 canPerformAction:(SEL)arg2 forItemAtIndexPath:(id)arg3 withSender:(id)arg4 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)didReceiveMemoryWarning;
-(BOOL)canBecomeFirstResponder;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2 ;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2 ;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)updateLayout;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(void)setStartPage:(id)arg1 forPageIndex:(long long)arg2 ;
-(void)setEndPage:(id)arg1 forPageIndex:(long long)arg2 ;
-(void)addPage:(id)arg1 forPageIndex:(long long)arg2 ;
-(void)removePage:(id)arg1 forPageIndex:(long long)arg2 ;
-(void)addAllPages:(id)arg1 ;
-(BOOL)canSetStartPage:(id)arg1 forPageIndex:(long long)arg2 ;
-(BOOL)canSetEndPage:(id)arg1 forPageIndex:(long long)arg2 ;
-(BOOL)canAddPage:(id)arg1 forPageIndex:(long long)arg2 ;
-(BOOL)canRemovePage:(id)arg1 forPageIndex:(long long)arg2 ;
-(BOOL)canAddAllPages:(id)arg1 ;
-(BOOL)canShowMenuBar;
-(double)pageLabelBottomSpace;
-(void)updatePageNumberBadgeLocation;
-(void)trackCenterCell;
-(void)pageRangeUpdated;
-(void)resetAllPageImages;
-(NSURL *)quickLookPDFURL;
-(NSMutableArray *)arrayOfPageImages;
-(NSString *)pdfPassword;
-(BOOL)grayscalePreview;
-(UIPrintPaper *)destinationPaper;
-(BOOL)scaleUpOnDestinationPaper;
-(BOOL)pageIndexIsInRange:(long long)arg1 ;
-(void)setQuickLookPDFURL:(NSURL *)arg1 ;
-(NSRange)validRenderRange;
-(id)getPageImageForPage:(long long)arg1 ;
-(id)previewViewControllerForItemAtIndexPath:(id)arg1 ;
-(NSURL *)pdfURL;
-(void)sharePressed:(id)arg1 ;
-(id)indexPathNearestToPointInCollectionView:(CGPoint)arg1 ;
-(id)pathOfCenterCell;
-(long long)_adjustScrollDirectionForLayout:(long long)arg1 ;
-(id)documentInteractionControllerViewControllerForPreview:(id)arg1 ;
-(void)documentInteractionController:(id)arg1 didEndSendingToApplication:(id)arg2 ;
-(id)initWithPageSize:(CGSize)arg1 numberOfPages:(long long)arg2 viewSize:(CGSize)arg3 printPanelViewController:(id)arg4 ;
-(void)setGrayscalePreview:(BOOL)arg1 ;
-(void)setPdfURL:(NSURL *)arg1 ;
-(id)excludedActivityTypesForDocumentInteractionController:(id)arg1 ;
-(long long)currentCenterPageIndex;
-(void)setArrayOfPageImages:(NSMutableArray *)arg1 ;
-(void)setDestinationPaper:(UIPrintPaper *)arg1 ;
-(void)setScaleUpOnDestinationPaper:(BOOL)arg1 ;
-(void)setPdfPassword:(NSString *)arg1 ;
-(long long)initialPageIndexToCenter;
-(void)setInitialPageIndexToCenter:(long long)arg1 ;
-(long long)numPages;
@end

