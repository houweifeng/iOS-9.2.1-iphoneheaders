/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface CACGPathCodingSegment : NSObject <NSCoding> {

	int _type;
	CGPoint _points[3];

}
-(id)initWithCGPathElement:(const CGPathElement*)arg1 ;
-(void)addToCGPath:(CGPathRef)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

