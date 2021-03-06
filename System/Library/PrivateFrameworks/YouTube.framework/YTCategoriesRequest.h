/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <YouTube/YTXMLHTTPRequest.h>

@class NSMutableArray;

@interface YTCategoriesRequest : YTXMLHTTPRequest {

	id _delegate;
	NSMutableArray* _categories;
	BOOL _responseIndicatesAuthenticationFailure;

}
-(int)parseData:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)clearDelegate;
-(void)loadRequest:(id)arg1 ;
-(BOOL)receivedValidResponse:(id)arg1 ;
-(void)didParseData;
-(void)failWithError:(id)arg1 ;
-(void)didAuthenticate:(id)arg1 ;
-(id)_categoriesURL;
-(void)requestCategoriesWithDelegate:(id)arg1 ;
@end

