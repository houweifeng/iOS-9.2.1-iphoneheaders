/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Foundation/Foundation-Structs.h>
@interface NSArrayChange : NSObject

@property (readonly) unsigned long long changeType; 
@property (readonly) unsigned long long sourceIndex; 
@property (readonly) unsigned long long destinationIndex; 
@property (readonly) id value; 
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)initWithType:(unsigned long long)arg1 sourceIndex:(unsigned long long)arg2 destinationIndex:(unsigned long long)arg3 value:(id)arg4 ;
-(unsigned long long)sourceIndex;
-(unsigned long long)destinationIndex;
-(id)value;
-(unsigned long long)changeType;
@end
