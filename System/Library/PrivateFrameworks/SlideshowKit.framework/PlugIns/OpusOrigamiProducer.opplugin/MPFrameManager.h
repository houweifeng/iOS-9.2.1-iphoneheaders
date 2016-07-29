/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface MPFrameManager : NSObject {

	NSMutableDictionary* mFrames;
	NSMutableDictionary* mCategories;

}
+(void)loadFrameManagerWithPaths:(id)arg1 ;
+(void)releaseSharedManager;
+(id)sharedManager;
-(id)initWithPaths:(id)arg1 ;
-(id)randomFrameFromList:(id)arg1 abidingWithConstraints:(id)arg2 ;
-(id)constraintsForFramesMatchingList:(id)arg1 andCriteria:(id)arg2 ;
-(id)allFrameIDs;
-(id)descriptionForFrameID:(id)arg1 ;
-(id)attributesForFrameID:(id)arg1 andPresetID:(id)arg2 ;
-(id)categoryIDsForFrameID:(id)arg1 ;
-(id)framesForCategoryID:(id)arg1 ;
-(id)versionOfFrameID:(id)arg1 ;
-(id)localizedCategoryNameFromCategoryID:(id)arg1 ;
-(id)localizedFrameNameForFrameID:(id)arg1 ;
-(id)allCategoryIDs;
-(void)dealloc;
@end

