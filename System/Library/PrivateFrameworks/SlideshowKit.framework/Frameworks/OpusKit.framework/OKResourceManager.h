/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OFLRUCache, OKPresentationViewControllerProxy, NSArray;

@interface OKResourceManager : NSObject {

	OFLRUCache* _resources;
	OKPresentationViewControllerProxy* _presentationViewController;
	NSArray* _resourceLoaders;

}
-(void)dealloc;
-(id)initWithPresentationViewController:(id)arg1 ;
-(id)resourceLoaderForURL:(id)arg1 ;
-(id)resourceWithURL:(id)arg1 copy:(BOOL)arg2 ;
@end

