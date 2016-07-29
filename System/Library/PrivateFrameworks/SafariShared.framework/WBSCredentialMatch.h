/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/WBSFormAutoFillItem.h>

@class NSURLCredential, NSURLProtectionSpace;

@interface WBSCredentialMatch : WBSFormAutoFillItem {

	NSURLCredential* _credential;
	NSURLProtectionSpace* _protectionSpace;

}

@property (nonatomic,readonly) NSURLCredential * credential;                        //@synthesize credential=_credential - In the implementation block
@property (nonatomic,readonly) NSURLProtectionSpace * protectionSpace;              //@synthesize protectionSpace=_protectionSpace - In the implementation block
-(id)completion;
-(NSURLProtectionSpace *)protectionSpace;
-(NSURLCredential *)credential;
-(id)initWithCredential:(id)arg1 ;
-(id)initWithCredential:(id)arg1 protectionSpace:(id)arg2 ;
@end

