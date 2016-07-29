/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:14 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNCommonProfileProgramGenerator : NSObject {

	opaque_pthread_mutex_t _programMutex;
	CFDictionaryRef _shaders;
	CFDictionaryRef _trackedResourcesToHashcode;

}

@property (nonatomic,readonly) int profile; 
+(id)generatorWithProfile:(int)arg1 ;
-(void)dealloc;
-(id)init;
-(int)profile;
-(C3DFXProgramRef)programWithHashCode:(C3DRendererElementProgramHashCodeRef)arg1 trackedResource:(id)arg2 introspectionDataPtr:(void*)arg3 ;
-(void)releaseProgramForResource:(id)arg1 ;
@end

