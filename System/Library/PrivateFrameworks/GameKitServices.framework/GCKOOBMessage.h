/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSData;

@interface GCKOOBMessage : NSObject <NSCoding> {

	unsigned type;
	unsigned band;
	NSData* data;

}
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned)type;
-(id)data;
-(unsigned)band;
@end

