/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, NSURL, SKUIImageViewElement, SKUILabelViewElement, SKUIURLViewElement;

@interface SKUIShareSheetActivityViewElement : SKUIViewElement {

	NSString* _activityType;
	NSURL* _contentSourceURL;

}

@property (nonatomic,readonly) NSString * activityType;                     //@synthesize activityType=_activityType - In the implementation block
@property (nonatomic,readonly) NSURL * contentSourceURL;                    //@synthesize contentSourceURL=_contentSourceURL - In the implementation block
@property (nonatomic,readonly) SKUIImageViewElement * image; 
@property (nonatomic,readonly) SKUILabelViewElement * message; 
@property (nonatomic,readonly) SKUILabelViewElement * title; 
@property (nonatomic,readonly) SKUIURLViewElement * URL; 
-(SKUILabelViewElement *)title;
-(NSString *)activityType;
-(SKUIImageViewElement *)image;
-(SKUILabelViewElement *)message;
-(SKUIURLViewElement *)URL;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(NSURL *)contentSourceURL;
@end

