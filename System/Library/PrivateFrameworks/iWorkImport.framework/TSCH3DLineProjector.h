/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:06 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DProjector.h>

@interface TSCH3DLineProjector : TSCH3DProjector {

	line<glm::detail::tvec3<float> > mLine;

}

@property (assign,nonatomic) line<glm::detail::tvec3<float> > line; 
-(BOOL)projectPoint:(const tvec2<float>*)arg1 returningPoint:(tvec3<float>*)arg2 ;
-(line<glm::detail::tvec3<float> >)line;
-(void)setLine:(line<glm::detail::tvec3<float> >)arg1 ;
@end

