/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, NSNumber, NSArray;

@interface NSURLComponents : NSObject <NSCopying>

@property (copy,readonly) NSURL * URL; 
@property (copy,readonly) NSString * string; 
@property (copy) NSString * scheme; 
@property (copy) NSString * user; 
@property (copy) NSString * password; 
@property (copy) NSString * host; 
@property (copy) NSNumber * port; 
@property (copy) NSString * path; 
@property (copy) NSString * query; 
@property (copy) NSString * fragment; 
@property (copy) NSString * percentEncodedUser; 
@property (copy) NSString * percentEncodedPassword; 
@property (copy) NSString * percentEncodedHost; 
@property (copy) NSString * percentEncodedPath; 
@property (copy) NSString * percentEncodedQuery; 
@property (copy) NSString * percentEncodedFragment; 
@property (readonly) NSRange rangeOfScheme; 
@property (readonly) NSRange rangeOfUser; 
@property (readonly) NSRange rangeOfPassword; 
@property (readonly) NSRange rangeOfHost; 
@property (readonly) NSRange rangeOfPort; 
@property (readonly) NSRange rangeOfPath; 
@property (readonly) NSRange rangeOfQuery; 
@property (readonly) NSRange rangeOfFragment; 
@property (copy) NSArray * queryItems; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)componentsWithURL:(id)arg1 resolvingAgainstBaseURL:(BOOL)arg2 ;
+(id)componentsWithString:(id)arg1 ;
-(void)setPort:(NSNumber *)arg1 ;
-(NSString *)user;
-(NSString *)password;
-(NSString *)percentEncodedPath;
-(NSString *)percentEncodedHost;
-(NSString *)percentEncodedQuery;
-(NSString *)percentEncodedFragment;
-(NSString *)percentEncodedUser;
-(NSString *)percentEncodedPassword;
-(id)URLRelativeToURL:(id)arg1 ;
-(void)setPercentEncodedQuery:(NSString *)arg1 ;
-(void)setUser:(NSString *)arg1 ;
-(void)setPassword:(NSString *)arg1 ;
-(void)setPercentEncodedUser:(NSString *)arg1 ;
-(void)setPercentEncodedPassword:(NSString *)arg1 ;
-(void)setPercentEncodedHost:(NSString *)arg1 ;
-(void)setPercentEncodedPath:(NSString *)arg1 ;
-(void)setPercentEncodedFragment:(NSString *)arg1 ;
-(NSRange)rangeOfScheme;
-(NSRange)rangeOfUser;
-(NSRange)rangeOfPassword;
-(NSRange)rangeOfHost;
-(NSRange)rangeOfPort;
-(NSRange)rangeOfPath;
-(NSRange)rangeOfQuery;
-(NSRange)rangeOfFragment;
-(id)init;
-(NSString *)scheme;
-(NSString *)query;
-(NSString *)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)string;
-(void)setQuery:(NSString *)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSURL *)URL;
-(NSString *)host;
-(void)setPath:(NSString *)arg1 ;
-(NSString *)fragment;
-(NSNumber *)port;
-(void)setScheme:(NSString *)arg1 ;
-(void)setQueryItems:(NSArray *)arg1 ;
-(NSArray *)queryItems;
-(void)setHost:(NSString *)arg1 ;
-(id)initWithURL:(id)arg1 resolvingAgainstBaseURL:(BOOL)arg2 ;
-(void)setFragment:(NSString *)arg1 ;
@end

