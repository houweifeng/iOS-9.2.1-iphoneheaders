/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSValue.h>

@interface NSWeakPointerValue : NSValue {

	void* _value;
	void* _weakValue;

}
-(id)initWithPointer:(void*)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)getValue:(void*)arg1 ;
-(const char*)objCType;
-(BOOL)isEqualToValue:(id)arg1 ;
-(id)nonretainedObjectValue;
@end

