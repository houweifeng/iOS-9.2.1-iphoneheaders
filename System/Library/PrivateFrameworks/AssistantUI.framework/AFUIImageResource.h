/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssistantUI/AssistantUI-Structs.h>
@class NSString, SAUIAppPunchOut, NSBundle, NSURL;

@interface AFUIImageResource : NSObject {

	NSString* _localResourceName;
	NSString* _localPressedResourceName;
	SAUIAppPunchOut* _localPunchOut;
	NSBundle* _localResourceBundle;
	NSURL* _remoteURL;
	NSURL* _remotePressedURL;
	SAUIAppPunchOut* _remotePunchOut;
	double _remoteScale;
	double _remotePressedScale;
	CGSize _logoSize;

}

@property (nonatomic,copy) NSString * localResourceName;                     //@synthesize localResourceName=_localResourceName - In the implementation block
@property (nonatomic,copy) NSString * localPressedResourceName;              //@synthesize localPressedResourceName=_localPressedResourceName - In the implementation block
@property (nonatomic,retain) SAUIAppPunchOut * localPunchOut;                //@synthesize localPunchOut=_localPunchOut - In the implementation block
@property (nonatomic,retain) NSBundle * localResourceBundle;                 //@synthesize localResourceBundle=_localResourceBundle - In the implementation block
@property (nonatomic,copy) NSURL * remoteURL;                                //@synthesize remoteURL=_remoteURL - In the implementation block
@property (nonatomic,copy) NSURL * remotePressedURL;                         //@synthesize remotePressedURL=_remotePressedURL - In the implementation block
@property (nonatomic,retain) SAUIAppPunchOut * remotePunchOut;               //@synthesize remotePunchOut=_remotePunchOut - In the implementation block
@property (assign,nonatomic) double remoteScale;                             //@synthesize remoteScale=_remoteScale - In the implementation block
@property (assign,nonatomic) double remotePressedScale;                      //@synthesize remotePressedScale=_remotePressedScale - In the implementation block
@property (assign,nonatomic) CGSize logoSize;                                //@synthesize logoSize=_logoSize - In the implementation block
+(id)imageResourceFromKey:(id)arg1 pressedKey:(id)arg2 punchOut:(id)arg3 ;
+(id)imageResourceWithAppPunchOut:(id)arg1 ;
+(id)imageResourceWithLocalResourceName:(id)arg1 pressedResourceName:(id)arg2 localPunchOut:(id)arg3 bundle:(id)arg4 ;
-(void)setRemoteURL:(NSURL *)arg1 ;
-(NSURL *)remoteURL;
-(void)setLocalResourceBundle:(NSBundle *)arg1 ;
-(void)setLocalResourceName:(NSString *)arg1 ;
-(void)setLocalPressedResourceName:(NSString *)arg1 ;
-(void)setLocalPunchOut:(SAUIAppPunchOut *)arg1 ;
-(void)setRemoteScale:(double)arg1 ;
-(void)setRemotePressedURL:(NSURL *)arg1 ;
-(void)setRemotePressedScale:(double)arg1 ;
-(void)setLogoSize:(CGSize)arg1 ;
-(void)setRemotePunchOut:(SAUIAppPunchOut *)arg1 ;
-(NSString *)localResourceName;
-(void)_fetchRemoteResourcesWithCompletion:(/*^block*/id)arg1 ;
-(void)_fetchLocalResourcesWithCompletion:(/*^block*/id)arg1 ;
-(id)_imageInLocalResourceBundleNamed:(id)arg1 ;
-(NSString *)localPressedResourceName;
-(SAUIAppPunchOut *)localPunchOut;
-(NSBundle *)localResourceBundle;
-(NSURL *)remotePressedURL;
-(SAUIAppPunchOut *)remotePunchOut;
-(void)getLogoWithCompletion:(/*^block*/id)arg1 ;
-(CGSize)logoSize;
-(double)remoteScale;
-(double)remotePressedScale;
@end

