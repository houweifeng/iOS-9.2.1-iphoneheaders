/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/MTLStructMember.h>

@class NSString;

@interface MTLStructMemberInternal : MTLStructMember {

	NSString* _name;
	unsigned _offset : 32;
	unsigned _dataType : 16;
	id _details;

}
-(id)describe;
-(id)initWithName:(id)arg1 offset:(unsigned long long)arg2 dataType:(unsigned long long)arg3 details:(id)arg4 ;
-(void)dealloc;
-(id)name;
-(unsigned long long)offset;
-(id)structType;
-(id)arrayType;
-(unsigned long long)dataType;
@end

