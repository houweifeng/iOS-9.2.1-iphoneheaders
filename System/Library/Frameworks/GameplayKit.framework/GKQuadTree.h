/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameplayKit/GameplayKit-Structs.h>
@interface GKQuadTree : NSObject {

	GKCQuadTree<NSObject>* _cQuadTree;

}
+(id)quadTreeWithMinPosition:(float)arg1 ;
-(void)dealloc;
-(id)init;
-(id)initWithMinPosition:(float)arg1 ;
-(id)addDataWithPoint:(id)arg1 ;
-(id)addDataWithQuad:(id)arg1 ;
-(id)queryDataForPoint:;
-(id)queryDataForQuad:quadSize:;
-(BOOL)removeData:(id)arg1 ;
-(BOOL)removeData:(id)arg1 withNode:(id)arg2 ;
@end

