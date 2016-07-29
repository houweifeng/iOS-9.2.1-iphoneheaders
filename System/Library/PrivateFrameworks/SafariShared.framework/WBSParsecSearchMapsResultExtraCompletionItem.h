/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:03 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSCompletionListItem.h>

@class WBSParsecImageRepresentation, WBSParsecSearchMapsResult, NSString, NSURL;

@interface WBSParsecSearchMapsResultExtraCompletionItem : NSObject <WBSCompletionListItem> {

	WBSParsecImageRepresentation* _icon;
	WBSParsecSearchMapsResult* _mapsResult;
	NSString* _title;
	NSURL* _url;

}

@property (nonatomic,readonly) NSString * title;                               //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSURL * url;                                    //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * feedbackIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * parsecDomainIdentifier; 
@property (nonatomic,readonly) NSString * lastSearchQuery; 
-(NSURL *)url;
-(NSString *)title;
-(NSString *)parsecDomainIdentifier;
-(NSString *)feedbackIdentifier;
-(id)initWithMapsResult:(id)arg1 text:(id)arg2 url:(id)arg3 icon:(id)arg4 ;
-(id)iconWithSession:(id)arg1 ;
@end

