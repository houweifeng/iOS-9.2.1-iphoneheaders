/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSArray;

@interface MediaSocialStatusPollOperation : ISOperation {

	/*^block*/id _responseBlock;
	NSArray* _statusPollRequests;

}

@property (copy,readonly) NSArray * statusPollRequests; 
@property (copy) id responseBlock; 
-(id)_requestURL;
-(id)initWithStatusPollRequests:(id)arg1 ;
-(NSArray *)statusPollRequests;
-(void)main;
-(id)responseBlock;
-(void)setResponseBlock:(id)arg1 ;
@end

