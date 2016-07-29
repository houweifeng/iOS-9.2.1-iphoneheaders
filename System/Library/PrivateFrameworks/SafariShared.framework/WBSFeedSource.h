/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSArray, NSString;

@interface WBSFeedSource : NSObject {

	BOOL _subscribedWhenSyncWasOff;
	NSURL* _sourceURL;
	NSURL* _feedURL;
	NSArray* _siteIconURLs;
	long long _state;
	NSString* _title;

}

@property (nonatomic,readonly) NSURL * sourceURL;                        //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,readonly) NSURL * feedURL;                          //@synthesize feedURL=_feedURL - In the implementation block
@property (nonatomic,readonly) NSArray * siteIconURLs;                   //@synthesize siteIconURLs=_siteIconURLs - In the implementation block
@property (nonatomic,readonly) long long state;                          //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
@property (assign,nonatomic) BOOL subscribedWhenSyncWasOff;              //@synthesize subscribedWhenSyncWasOff=_subscribedWhenSyncWasOff - In the implementation block
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)state;
-(NSString *)title;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(NSURL *)sourceURL;
-(id)initFromDictionaryRepresentation:(id)arg1 ;
-(NSURL *)feedURL;
-(BOOL)subscribedWhenSyncWasOff;
-(void)setSubscribedWhenSyncWasOff:(BOOL)arg1 ;
-(id)dictionaryRepresentationForSyncing;
-(id)initWithFeedURL:(id)arg1 sourceURL:(id)arg2 siteIconURLs:(id)arg3 title:(id)arg4 state:(long long)arg5 ;
-(BOOL)isEqualIgnoringTitle:(id)arg1 ;
-(NSArray *)siteIconURLs;
@end

