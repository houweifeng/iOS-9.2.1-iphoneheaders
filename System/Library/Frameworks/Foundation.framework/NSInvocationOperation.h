/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@class NSInvocation;

@interface NSInvocationOperation : NSOperation {

	id _inv;
	id _exception;
	void* _reserved2;

}

@property (retain,readonly) NSInvocation * invocation; 
@property (retain,readonly) id result; 
-(void)dealloc;
-(id)init;
-(id)initWithInvocation:(id)arg1 ;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 object:(id)arg3 ;
-(void)main;
-(NSInvocation *)invocation;
-(id)result;
@end

