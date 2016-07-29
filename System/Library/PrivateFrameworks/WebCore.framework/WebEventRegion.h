/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WebEventRegion : NSObject <NSCopying> {

	CGPoint p1;
	CGPoint p2;
	CGPoint p3;
	CGPoint p4;

}
-(CGPoint)p2;
-(CGPoint)p3;
-(CGPoint)p4;
-(id)initWithPoints:(CGPoint)arg1 :(CGPoint)arg2 :(CGPoint)arg3 :(CGPoint)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hitTest:(CGPoint)arg1 ;
-(FloatQuad)quad;
-(CGPoint)p1;
@end

