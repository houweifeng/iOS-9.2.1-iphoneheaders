/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface UIKeyboardSliceStore : NSObject {

	NSMutableDictionary* _store;

}
+(id)sharedStore;
+(id)sliceSetForID:(id)arg1 ;
+(id)sliceSetIDForKeyplaneName:(id)arg1 type:(long long)arg2 orientation:(long long)arg3 ;
+(void)archiveSet:(id)arg1 ;
-(id)init;
-(id)sliceSetForID:(id)arg1 ;
-(void)addSet:(id)arg1 ;
@end

