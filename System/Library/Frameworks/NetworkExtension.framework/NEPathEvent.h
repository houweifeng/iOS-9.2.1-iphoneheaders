/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NEPathEvent : NSObject {

	long long _type;
	NSString* _bundleID;

}

@property (readonly) long long type;                   //@synthesize type=_type - In the implementation block
@property (readonly) NSString * bundleID;              //@synthesize bundleID=_bundleID - In the implementation block
-(long long)type;
-(NSString *)bundleID;
-(id)initWithType:(long long)arg1 bundleID:(id)arg2 ;
@end

