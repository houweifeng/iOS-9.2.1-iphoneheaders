/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKAnchor : NSObject {

	shared_ptr<vk::Anchor>* _anchor;

}

@property (nonatomic,readonly) BOOL isMercator; 
@property (nonatomic,readonly) BOOL isGeocentric; 
@property (nonatomic,readonly) BOOL followsTerrain; 
@property (nonatomic,readonly) VKPoint worldPoint; 
@property (nonatomic,readonly) VKPoint mercatorPoint; 
@property (assign,nonatomic) CGSize coordinate; 
@property (assign,nonatomic) id<VKAnchorDelegate> delegate; 
-(void)setDelegate:(id<VKAnchorDelegate>)arg1 ;
-(id<VKAnchorDelegate>)delegate;
-(long long)worldIndexWithContext:(id)arg1 ;
-(VKPoint)worldPoint;
-(BOOL)isGeocentric;
-(BOOL)isMercator;
-(BOOL)followsTerrain;
-(void)worldPointDidChange;
-(void)setMercatorPoint:(VKPoint)arg1 ;
-(VKPoint)mercatorPoint;
-(id)initWithAnchor:(shared_ptr<vk::Anchor>*)arg1 ;
-(void)setCoordinate:(CGSize)arg1 ;
-(CGSize)coordinate;
@end

