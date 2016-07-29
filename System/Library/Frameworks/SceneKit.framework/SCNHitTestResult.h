/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class SCNNode;

@interface SCNHitTestResult : NSObject {

	C3DHitTestResultRef _result;

}

@property (nonatomic,readonly) SCNNode * node; 
@property (nonatomic,readonly) long long geometryIndex; 
@property (nonatomic,readonly) long long faceIndex; 
@property (nonatomic,readonly) SCNVector3 localCoordinates; 
@property (nonatomic,readonly) SCNVector3 worldCoordinates; 
@property (nonatomic,readonly) SCNVector3 localNormal; 
@property (nonatomic,readonly) SCNVector3 worldNormal; 
@property (nonatomic,readonly) SCNMatrix4 modelTransform; 
+(id)hitTestResultsFromHitTestResultRef:(CFArrayRef)arg1 ;
-(void)dealloc;
-(id)description;
-(SCNNode *)node;
-(id)initWithResult:(C3DHitTestResultRef)arg1 ;
-(CGPoint)textureCoordinatesWithMappingChannel:(long long)arg1 ;
-(long long)geometryIndex;
-(long long)faceIndex;
-(SCNVector3)localCoordinates;
-(SCNVector3)worldCoordinates;
-(SCNVector3)localNormal;
-(SCNVector3)worldNormal;
-(CGPoint)textureCoordinate;
-(SCNMatrix4)modelTransform;
@end

