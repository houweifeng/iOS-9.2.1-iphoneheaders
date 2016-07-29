/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKUIJSDOMFeatureCollectionAppBridge.h>
#import <libobjc.A.dylib/SKUIDOMFeature.h>

@protocol SKUICollectionDOMFeatureTargetting;
@class IKAppContext, NSString;

@interface SKUICollectionDOMFeature : NSObject <SKUIJSDOMFeatureCollectionAppBridge, SKUIDOMFeature> {

	IKAppContext* _appContext;
	NSString* _featureName;
	id<SKUICollectionDOMFeatureTargetting> _collectionTarget;

}

@property (assign,nonatomic,__weak) id<SKUICollectionDOMFeatureTargetting> collectionTarget;              //@synthesize collectionTarget=_collectionTarget - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * featureName;                                               //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                                          //@synthesize appContext=_appContext - In the implementation block
+(id)featureName;
+(id)makeFeatureJSObjectForFeature:(id)arg1 ;
-(NSString *)featureName;
-(IKAppContext *)appContext;
-(void)setEditing:(BOOL)arg1 options:(id)arg2 ;
-(id)initWithDOMNode:(id)arg1 featureName:(id)arg2 ;
-(id<SKUICollectionDOMFeatureTargetting>)collectionTarget;
-(void)setCollectionTarget:(id<SKUICollectionDOMFeatureTargetting>)arg1 ;
@end

