/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSProgressReporting.h>

@class NSProgress, NSSet, NSBundle, NSString;

@interface NSBundleResourceRequest : NSObject <NSProgressReporting> {

	NSSet* _tags;
	double _priority;
	NSBundle* _bundle;
	NSProgress* _progress;
	long long _fetchState;

}

@property (assign) double loadingPriority; 
@property (copy,readonly) NSSet * tags; 
@property (readonly) NSBundle * bundle; 
@property (readonly) NSProgress * progress; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionEndpoint;
+(id)_extensionEndpointForMainBundleOfHostApplication:(id)arg1 ;
+(void)_addExtensionEndpoint:(id)arg1 ;
+(void)_setConnection:(id)arg1 ;
+(id)_assetPackBundleForBundle:(id)arg1 withAssetPackID:(id)arg2 ;
+(id)_manifestWithBundle:(id)arg1 error:(id*)arg2 ;
+(id)_connection;
-(id)initWithTags:(id)arg1 bundle:(id)arg2 ;
-(void)endAccessingResources;
-(id)initWithTag:(id)arg1 ;
-(id)initWithTags:(id)arg1 ;
-(double)loadingPriority;
-(void)setLoadingPriority:(double)arg1 ;
-(void)beginAccessingResourcesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)conditionallyBeginAccessingResourcesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSSet *)tags;
-(NSBundle *)bundle;
-(NSProgress *)progress;
@end

