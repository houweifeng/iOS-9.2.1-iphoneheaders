/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSException.h>

@class NSString;

@interface _NSCoreDataException : NSException {

	long long _code;
	NSString* _domain;

}
+(id)exceptionWithName:(id)arg1 code:(long long)arg2 reason:(id)arg3 userInfo:(id)arg4 ;
-(id)initWithName:(id)arg1 code:(long long)arg2 reason:(id)arg3 userInfo:(id)arg4 ;
-(void)_setDomain:(id)arg1 ;
-(void)dealloc;
-(id)domain;
-(long long)code;
-(id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3 ;
@end

