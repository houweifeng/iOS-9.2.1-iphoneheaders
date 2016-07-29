/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalDAV/CalDAVGetDelegatesBaseTaskGroup.h>

@interface CalDAVGetGrantedDelegatesTaskGroup : CalDAVGetDelegatesBaseTaskGroup {

	BOOL _fetchPrincipalDetails;
	int _state;

}

@property (assign,nonatomic) BOOL fetchPrincipalDetails;              //@synthesize fetchPrincipalDetails=_fetchPrincipalDetails - In the implementation block
@property (assign,nonatomic) int state;                               //@synthesize state=_state - In the implementation block
-(int)state;
-(void)setState:(int)arg1 ;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)startTaskGroup;
-(void)_finishWithError:(id)arg1 state:(int)arg2 ;
-(void)taskGroup:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3 ;
-(void)_getChildProperties;
-(void)setFetchPrincipalDetails:(BOOL)arg1 ;
-(id)_urlAppendingSegmentWithAllowWrite:(BOOL)arg1 ;
-(BOOL)fetchPrincipalDetails;
-(void)_expandPropertiesWithAllowWrite:(BOOL)arg1 ;
-(void)_fetchOnlyHrefs;
@end

