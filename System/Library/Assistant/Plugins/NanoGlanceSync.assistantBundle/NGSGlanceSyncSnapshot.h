/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/Plugins/NanoGlanceSync.assistantBundle/NanoGlanceSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NARWorkspaceInfo, NSArray;

@interface NGSGlanceSyncSnapshot : NSObject {

	NARWorkspaceInfo* _workspaceInfo;
	NSArray* _glances;

}

@property (nonatomic,readonly) NARWorkspaceInfo * workspaceInfo;              //@synthesize workspaceInfo=_workspaceInfo - In the implementation block
@property (nonatomic,readonly) NSArray * glances;                             //@synthesize glances=_glances - In the implementation block
-(id)initWithWorkspaceInfo:(id)arg1 ;
-(BOOL)isSyncAnchorValid:(id)arg1 ;
-(id)glanceAfterAnchor:(id)arg1 postAnchor:(id*)arg2 ;
-(NSArray *)glances;
-(NARWorkspaceInfo *)workspaceInfo;
-(long long)glanceCount;
-(id)validity;
@end

