/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppleAccount/AppleAccount-Structs.h>
@class NSString;

@interface AASigningSession : NSObject {

	NACContextOpaque_Ref _context;
	NSString* _certURL;
	NSString* _sessionURL;
	int _error;

}

@property (nonatomic,readonly) int error;              //@synthesize error=_error - In the implementation block
-(void)dealloc;
-(void)establishSession;
-(id)initWithCertURL:(id)arg1 sessionURL:(id)arg2 ;
-(id)signatureForData:(id)arg1 ;
-(int)error;
@end

