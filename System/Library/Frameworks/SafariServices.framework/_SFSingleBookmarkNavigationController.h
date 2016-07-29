/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>
#import <libobjc.A.dylib/_SFBookmarkInfoViewControllerDelegate.h>

@protocol _SFSingleBookmarkNavigationControllerDelegate;
@class _SFBookmarkInfoViewController, WebBookmarkCollection, NSString;

@interface _SFSingleBookmarkNavigationController : UINavigationController <_SFBookmarkInfoViewControllerDelegate> {

	_SFBookmarkInfoViewController* _infoViewController;
	WebBookmarkCollection* _collection;
	BOOL _delegateNotifiedOfResult;
	id<_SFSingleBookmarkNavigationControllerDelegate> _bookmarkNavDelegate;

}

@property (assign,nonatomic,__weak) id<_SFSingleBookmarkNavigationControllerDelegate> bookmarkNavDelegate;              //@synthesize bookmarkNavDelegate=_bookmarkNavDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newBookmarkInfoViewControllerWithBookmark:(id)arg1 inCollection:(id)arg2 addingBookmark:(BOOL)arg3 toFavorites:(BOOL)arg4 willBeDisplayedModally:(BOOL)arg5 ;
-(id)initWithCollection:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)_initWithBookmark:(id)arg1 inCollection:(id)arg2 addingBookmark:(BOOL)arg3 toFavorites:(BOOL)arg4 ;
-(void)bookmarkInfoViewController:(id)arg1 didFinishWithResult:(BOOL)arg2 ;
-(BOOL)bookmarkInfoViewControllerShouldUseTranslucentAppearance:(id)arg1 ;
-(BOOL)bookmarkInfoViewControllerCanSaveBookmarkChanges:(id)arg1 ;
-(id)initWithBookmark:(id)arg1 inCollection:(id)arg2 ;
-(id)initForAddingToFavoritesInCollection:(id)arg1 ;
-(void)addBookmarkWithTitle:(id)arg1 address:(id)arg2 parentBookmark:(id)arg3 ;
-(BOOL)shouldShowBrowserPanel;
-(void)panelWillSuspend;
-(BOOL)shouldResumePanel;
-(void)willHideOnSuspend;
-(id<_SFSingleBookmarkNavigationControllerDelegate>)bookmarkNavDelegate;
-(void)setBookmarkNavDelegate:(id<_SFSingleBookmarkNavigationControllerDelegate>)arg1 ;
@end

