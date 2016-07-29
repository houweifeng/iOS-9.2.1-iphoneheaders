/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:10 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DGLFramebuffer.h>

@class TSCH3DFBOLoader, TSCH3DResource;

@interface TSCH3DGLFBO : TSCH3DGLFramebuffer {

	TSCH3DFBOLoader* mLoader;
	TSCH3DResource* mResource;
	BOOL mPreserveProtectedResourceAfterDestroy;

}

@property (assign,nonatomic) BOOL preserveProtectedResourceAfterDestroy; 
+(id)FBOFromContext:(id)arg1 size:(tvec2<int>*)arg2 attributes:(const FramebufferAttributes*)arg3 colorAllocator:(id)arg4 depthAllocator:(id)arg5 resource:(id)arg6 ;
+(id)FBOFromContext:(id)arg1 size:(const tvec2<int>*)arg2 attributes:(const FramebufferAttributes*)arg3 textureAttributes:(const FramebufferAttributes*)arg4 resource:(id)arg5 ;
+(id)FBOFromContext:(id)arg1 size:(const tvec2<int>*)arg2 attributes:(const FramebufferAttributes*)arg3 textureAttributes:(const FramebufferAttributes*)arg4 resource:(id)arg5 FBOClass:(Class)arg6 RTTRenderbufferAllocatorBlock:(/*^block*/id)arg7 ;
-(void)disableSamplingInSession:(id)arg1 ;
-(BOOL)bindInSession:(id)arg1 ;
-(BOOL)activateInsideSession:(id)arg1 ;
-(BOOL)validForSession:(id)arg1 ;
-(void)bindColorbufferInSession:(id)arg1 ;
-(id)GLHandleForSession:(id)arg1 ;
-(void)destroyResourcesInSession:(id)arg1 ;
-(void)protectInSession:(id)arg1 unprotectOnFail:(BOOL)arg2 ;
-(void)discardBuffers;
-(void)unprotectInSession:(id)arg1 clearOnFailProtection:(BOOL)arg2 ;
-(BOOL)isProtectedInSession:(id)arg1 ;
-(BOOL)isTexturable;
-(unsigned long long)estimatedMemroyInBytes;
-(void)discardColorBuffer;
-(void)discardDepthBuffer;
-(id)initFromContext:(id)arg1 size:(tvec2<int>*)arg2 attributes:(const FramebufferAttributes*)arg3 colorAllocator:(id)arg4 depthAllocator:(id)arg5 resource:(id)arg6 ;
-(BOOL)preserveProtectedResourceAfterDestroy;
-(id)FBOHandleForSession:(id)arg1 ;
-(SessionLoadResourceResult)loadInsideSession:(id)arg1 ;
-(void)setPreserveProtectedResourceAfterDestroy:(BOOL)arg1 ;
-(tvec2<int>)size;
-(void)dealloc;
-(id)description;
-(unsigned)type;
-(id)loader;
@end

