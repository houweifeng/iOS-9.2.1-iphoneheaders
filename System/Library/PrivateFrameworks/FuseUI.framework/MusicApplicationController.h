/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:06 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIApplicationController.h>
#import <libobjc.A.dylib/SKUIModalDocumentDataSource.h>
#import <libobjc.A.dylib/SKUIModalDocumentDelegate.h>
#import <libobjc.A.dylib/SSVDirectUploadObserver.h>

@class SSVDirectUploadQueue, NSString;

@interface MusicApplicationController : SKUIApplicationController <SKUIModalDocumentDataSource, SKUIModalDocumentDelegate, SSVDirectUploadObserver> {

	SSVDirectUploadQueue* _uploadQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)activeDocument;
-(void)loadApplicationWithOptions:(id)arg1 ;
-(Class)_JSITunesStoreClass;
-(BOOL)_sendNativeBackButtonMetricEvents;
-(Class)_scrollingTabBarControllerClass;
-(BOOL)modalDocumentController:(id)arg1 willPushDocument:(id)arg2 options:(id)arg3 ;
-(id)modalDocumentController:(id)arg1 alertControllerForDocument:(id)arg2 withDismissObserverBlock:(/*^block*/id)arg3 options:(id)arg4 ;
-(void)uploadQueue:(id)arg1 uploadsDidChange:(id)arg2 ;
@end

