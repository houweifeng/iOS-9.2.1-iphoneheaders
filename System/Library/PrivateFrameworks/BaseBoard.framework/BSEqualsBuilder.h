/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <BaseBoard/BaseBoard-Structs.h>
@interface BSEqualsBuilder : NSObject {

	BOOL _equal;

}
+(id)builder;
+(id)builderWithObject:(id)arg1 ofExpectedClass:(Class)arg2 ;
-(id)appendCGFloat:(double)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendUnsignedInteger:(unsigned long long)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendEqualsBlocks:(/*^block*/id)arg1 ;
-(id)appendString:(id)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendPointer:(void*)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendArray:(id)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendBool:(BOOL)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendCGPoint:(CGPoint)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendCGSize:(CGSize)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendCGRect:(CGRect)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)init;
-(id)appendObject:(id)arg1 counterpart:(/*^block*/id)arg2 ;
-(id)appendInteger:(long long)arg1 counterpart:(/*^block*/id)arg2 ;
-(BOOL)isEqual;
@end

