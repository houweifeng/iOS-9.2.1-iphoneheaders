/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSRecursiveLock.h>
#import <libobjc.A.dylib/MFLockObject.h>

@class NSString;

@interface MFRecursiveLock : NSRecursiveLock <MFLockObject> {

	NSString* _name;
	id _delegate;

}
+(void)initialize;
-(BOOL)lockBeforeDate:(id)arg1 ;
-(BOOL)tryLock;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)lock;
-(void)unlock;
-(BOOL)isLockedByMe;
-(id)initWithName:(id)arg1 andDelegate:(id)arg2 ;
@end

