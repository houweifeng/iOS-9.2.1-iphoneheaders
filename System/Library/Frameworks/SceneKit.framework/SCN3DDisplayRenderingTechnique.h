/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SCNTechnique.h>
#import <libobjc.A.dylib/SCNStereoscopicRenderingTechnique.h>

@interface SCN3DDisplayRenderingTechnique : SCNTechnique <SCNStereoscopicRenderingTechnique> {

	long long _displayLayout;

}

@property (nonatomic,readonly) long long displayLayout; 
@property (assign,nonatomic) double interaxialDistance; 
-(void)setInteraxialDistance:(double)arg1 ;
-(double)interaxialDistance;
-(id)initWithDisplayLayout:(long long)arg1 ;
-(long long)displayLayout;
@end

