/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:33 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString, RWIProtocolNetworkHeaders;

@interface RWIProtocolNetworkRequest : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * url; 
@property (nonatomic,copy) NSString * method; 
@property (nonatomic,retain) RWIProtocolNetworkHeaders * headers; 
@property (nonatomic,copy) NSString * postData; 
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)method;
-(void)setHeaders:(RWIProtocolNetworkHeaders *)arg1 ;
-(RWIProtocolNetworkHeaders *)headers;
-(id)initWithUrl:(id)arg1 method:(id)arg2 headers:(id)arg3 ;
-(void)setPostData:(NSString *)arg1 ;
-(NSString *)postData;
-(void)setMethod:(NSString *)arg1 ;
@end

