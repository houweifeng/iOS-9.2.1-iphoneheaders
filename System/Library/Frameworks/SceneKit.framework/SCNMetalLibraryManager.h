/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice, MTLLibrary;
#import <SceneKit/SceneKit-Structs.h>
@class NSMapTable;

@interface SCNMetalLibraryManager : NSObject {

	id<MTLDevice> _device;
	id<MTLLibrary> _defaultLibrary;
	id<MTLLibrary> _frameworkLibrary;
	_C3DFXMetalProgram* _defaultProgram;
	NSMapTable* _availableLibraries;
	CFDictionaryRef _availableCompiledLibraries;

}
-(void)dealloc;
-(_C3DFXProgram*)defaultProgram;
-(id)frameworkLibrary;
-(id)libraryForFile:(id)arg1 ;
-(id)libraryForSourceCode:(id)arg1 preprocessorsMacros:(id)arg2 programDelegate:(_C3DFXProgramDelegate*)arg3 ;
-(id)initWithDevice:(id)arg1 ;
@end

