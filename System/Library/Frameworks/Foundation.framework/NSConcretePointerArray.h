/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSPointerArray.h>

@interface NSConcretePointerArray : NSPointerArray {

	NSSlice* slice;
	unsigned long long count;
	unsigned long long capacity;
	unsigned long long options;
	unsigned long long mutations;
	BOOL needsCompaction;

}
-(id)initWithPointerFunctions:(id)arg1 ;
-(id)pointerFunctions;
-(void)insertPointer:(void*)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_initBlock;
-(void)arrayGrow:(unsigned long long)arg1 ;
-(void)_markNeedsCompaction;
-(unsigned long long)indexOfPointer:(void*)arg1 ;
-(void)removePointer:(void*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS5*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(void)setCount:(unsigned long long)arg1 ;
-(void)addPointer:(void*)arg1 ;
-(void*)pointerAtIndex:(unsigned long long)arg1 ;
-(void)removePointerAtIndex:(unsigned long long)arg1 ;
-(void)compact;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(void)replacePointerAtIndex:(unsigned long long)arg1 withPointer:(void*)arg2 ;
-(void)finalize;
@end

