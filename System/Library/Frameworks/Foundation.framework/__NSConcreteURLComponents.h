/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSURLComponents.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface __NSConcreteURLComponents : NSURLComponents <NSCopying> {

	int _lock;
	NSString* _urlString;
	URIParseInfo _parseInfo;
	unsigned _schemeComponentValid : 1;
	unsigned _userComponentValid : 1;
	unsigned _passwordComponentValid : 1;
	unsigned _hostComponentValid : 1;
	unsigned _portComponentValid : 1;
	unsigned _pathComponentValid : 1;
	unsigned _queryComponentValid : 1;
	unsigned _fragmentComponentValid : 1;
	NSString* _schemeComponent;
	NSString* _userComponent;
	NSString* _passwordComponent;
	NSString* _hostComponent;
	NSNumber* _portComponent;
	NSString* _pathComponent;
	NSString* _queryComponent;
	NSString* _fragmentComponent;

}
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)setPort:(id)arg1 ;
-(id)user;
-(id)password;
-(id)percentEncodedPath;
-(id)percentEncodedHost;
-(id)percentEncodedQuery;
-(id)percentEncodedFragment;
-(id)percentEncodedUser;
-(id)percentEncodedPassword;
-(void)freeIvars;
-(id)URLRelativeToURL:(id)arg1 ;
-(BOOL)parseInfoIsValid;
-(void)setPercentEncodedQuery:(id)arg1 ;
-(void)setUser:(id)arg1 ;
-(void)setPassword:(id)arg1 ;
-(void)setPercentEncodedUser:(id)arg1 ;
-(void)setPercentEncodedPassword:(id)arg1 ;
-(void)setPercentEncodedHost:(id)arg1 ;
-(void)setPercentEncodedPath:(id)arg1 ;
-(void)setPercentEncodedFragment:(id)arg1 ;
-(NSRange)rangeOfScheme;
-(NSRange)rangeOfUser;
-(NSRange)rangeOfPassword;
-(NSRange)rangeOfHost;
-(NSRange)rangeOfPort;
-(NSRange)rangeOfPath;
-(NSRange)rangeOfQuery;
-(NSRange)rangeOfFragment;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)scheme;
-(id)query;
-(id)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)string;
-(void)setQuery:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)URL;
-(id)host;
-(void)setPath:(id)arg1 ;
-(id)fragment;
-(id)port;
-(void)setScheme:(id)arg1 ;
-(void)setQueryItems:(id)arg1 ;
-(id)queryItems;
-(void)setHost:(id)arg1 ;
-(id)initWithURL:(id)arg1 resolvingAgainstBaseURL:(BOOL)arg2 ;
-(void)finalize;
-(void)setFragment:(id)arg1 ;
@end

