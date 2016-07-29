/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <UIKit/UIDocumentInteractionControllerDelegatePrivate.h>

@protocol QLPreviewItem, QLPreviewControllerDataSource;
@class QLPreviewController, NSMutableDictionary, NSMutableArray, NSURL, NSString;

@interface QLPreviewItemsSource : NSObject <UIDocumentInteractionControllerDelegatePrivate> {

	QLPreviewController* _previewController;
	id<QLPreviewItem> _previewItem;
	BOOL _prepared;
	long long _UUID;
	NSMutableDictionary* _previewItemCache;
	unsigned long long _numberOfPreviewItems;
	long long _currentPreviewItemIndex;
	long long _currentUIItemIndex;
	long long _archiveDataSourceIndex;
	NSMutableArray* _archiveItems;
	NSMutableDictionary* _uiItems;
	NSURL* _unzippingURL;
	id<QLPreviewControllerDataSource> _dataSource;

}

@property (readonly) long long UUID;                                                           //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic,__weak) id<QLPreviewControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (retain) id<QLPreviewItem> previewItem; 
@property (readonly) BOOL prepared;                                                            //@synthesize prepared=_prepared - In the implementation block
@property (getter=isViewingArchive,readonly) BOOL viewingArchive; 
@property (readonly) BOOL shouldShowFileList; 
@property (readonly) long long numberOfPreviewItems; 
@property (assign) long long currentPreviewItemIndex; 
@property (readonly) id<QLPreviewItem> currentPreviewItem; 
@property (readonly) long long realNumberOfPreviewItems; 
@property (assign) long long realCurrentPreviewItemIndex; 
@property (readonly) id<QLPreviewItem> realCurrentPreviewItem; 
@property (readonly) long long numberOfUIItems; 
@property (readonly) long long currentUIItemIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)purgeCache;
-(void)setDataSource:(id<QLPreviewControllerDataSource>)arg1 ;
-(id<QLPreviewControllerDataSource>)dataSource;
-(void)reset;
-(long long)UUID;
-(id<QLPreviewItem>)currentPreviewItem;
-(id)documentInteractionControllerURLOfDirectoryForUnzippedDocument:(id)arg1 ;
-(void)setPreviewItem:(id<QLPreviewItem>)arg1 ;
-(id)initWithPreviewController:(id)arg1 ;
-(id<QLPreviewItem>)previewItem;
-(long long)realNumberOfPreviewItems;
-(id<QLPreviewItem>)realCurrentPreviewItem;
-(id)realPreviewItemAtIndex:(long long)arg1 ;
-(void)setRealCurrentPreviewItemIndex:(long long)arg1 ;
-(long long)realCurrentPreviewItemIndex;
-(BOOL)prepared;
-(long long)numberOfPreviewItems;
-(id)previewItemAtIndex:(long long)arg1 ;
-(void)resolvePreviewItem:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)preparedPreviewItemAtIndex:(long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(BOOL)shouldShowFileList;
-(BOOL)isViewingArchive;
-(long long)currentUIItemIndex;
-(id)UIItemAtIndex:(long long)arg1 ;
-(long long)numberOfUIItems;
-(void)addArchiveItem:(id)arg1 ;
-(void)_setUIItem:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeArchiveItemAtIndex:(long long)arg1 ;
-(id)_UIItemAtIndex:(long long)arg1 ;
-(void)prepare;
-(void)setCurrentPreviewItemIndex:(long long)arg1 ;
-(long long)currentPreviewItemIndex;
@end

