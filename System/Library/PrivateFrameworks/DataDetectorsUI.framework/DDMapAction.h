/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDRemoteAction.h>

@class NSURL, NSString;

@interface DDMapAction : DDRemoteAction {

	NSURL* _commitURL;
	NSString* _addressString;

}
+(BOOL)handlesUrl:(id)arg1 result:(DDResultRef)arg2 ;
+(id)viewControllerProviderClass;
-(id)previewActions;
-(id)initWithURL:(id)arg1 result:(DDResultRef)arg2 context:(id)arg3 ;
-(id)commitURL;
-(id)platterTitle;
@end

