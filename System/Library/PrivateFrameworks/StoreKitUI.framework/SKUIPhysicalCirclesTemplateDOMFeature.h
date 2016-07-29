/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKUIDOMFeature.h>

@protocol SKUIPhysicalCirclesTemplateDelegate;
@class IKAppContext, NSMutableArray, NSString;

@interface SKUIPhysicalCirclesTemplateDOMFeature : NSObject <SKUIDOMFeature> {

	IKAppContext* _appContext;
	id<SKUIPhysicalCirclesTemplateDelegate> _delegate;
	NSMutableArray* _domUpdateBlocks;
	NSString* _featureName;
	NSMutableArray* _pendingAnimationRequests;

}

@property (assign,nonatomic,__weak) id<SKUIPhysicalCirclesTemplateDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * featureName;                                        //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                                   //@synthesize appContext=_appContext - In the implementation block
+(id)featureName;
+(id)makeFeatureJSObjectForFeature:(id)arg1 ;
-(void)setDelegate:(id<SKUIPhysicalCirclesTemplateDelegate>)arg1 ;
-(id<SKUIPhysicalCirclesTemplateDelegate>)delegate;
-(NSString *)featureName;
-(void)finishDOMUpdates;
-(IKAppContext *)appContext;
-(id)initWithDOMNode:(id)arg1 featureName:(id)arg2 ;
-(id)popPendingAnimationRequests;
-(void)_addDOMUpdateBlock:(/*^block*/id)arg1 ;
-(void)_requestAnimation:(id)arg1 ;
@end

