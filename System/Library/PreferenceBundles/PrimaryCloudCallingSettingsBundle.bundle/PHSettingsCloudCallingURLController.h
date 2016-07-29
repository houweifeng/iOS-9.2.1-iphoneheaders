/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:48 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/PrimaryCloudCallingSettingsBundle.bundle/PrimaryCloudCallingSettingsBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PHSettingsCloudCallingURLControllerDelegate;
@class NSString, PHSettingsWebViewController, TUCTCapabilityInfo;

@interface PHSettingsCloudCallingURLController : NSObject {

	NSString* _bundleDescriptor;
	id<PHSettingsCloudCallingURLControllerDelegate> _delegate;
	PHSettingsWebViewController* _webViewController;

}

@property (retain) NSString * bundleDescriptor;                                                   //@synthesize bundleDescriptor=_bundleDescriptor - In the implementation block
@property (__weak) id<PHSettingsCloudCallingURLControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) TUCTCapabilityInfo * callingCapabilityInfo; 
@property (nonatomic,readonly) BOOL shouldEnableCapability; 
@property (nonatomic,readonly) BOOL shouldShowEmergencyAddress; 
@property (assign,nonatomic,__weak) PHSettingsWebViewController * webViewController;              //@synthesize webViewController=_webViewController - In the implementation block
-(void)loadWebViewController;
-(void)webSheetCompletion;
-(id)genericErrorAlertController;
-(id)_webViewControllerWithType:(long long)arg1 ;
-(void)setBundleDescriptor:(NSString *)arg1 ;
-(TUCTCapabilityInfo *)callingCapabilityInfo;
-(NSString *)bundleDescriptor;
-(BOOL)shouldShowEmergencyAddress;
-(void)reloadWebViewController;
-(id)provisionCapabilityController;
-(id)updateEmergencyAddressController;
-(void)enableCapability;
-(BOOL)shouldEnableCapability;
-(void)setDelegate:(id<PHSettingsCloudCallingURLControllerDelegate>)arg1 ;
-(id<PHSettingsCloudCallingURLControllerDelegate>)delegate;
-(PHSettingsWebViewController *)webViewController;
-(void)setWebViewController:(PHSettingsWebViewController *)arg1 ;
@end

