/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@protocol NSFastEnumeration;
@interface __NSFastEnumerationEnumerator : NSEnumerator {

	id<NSFastEnumeration> _obj;
	id _origObj;
	unsigned long long _count;
	unsigned long long _mut;

}
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)nextObject;
-(id)initWithObject:(id)arg1 ;
@end

