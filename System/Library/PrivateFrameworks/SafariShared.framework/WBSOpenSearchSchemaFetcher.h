/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface WBSOpenSearchSchemaFetcher : NSObject {

	NSMutableSet* _openSearchDescriptionURLs;

}
+(id)sharedFetcher;
-(void)_didFinishFetchingOpenSearchDescriptionDocumentWithURL:(id)arg1 ;
-(void)fetchOpenSearchDescriptionWithURL:(id)arg1 ;
@end

