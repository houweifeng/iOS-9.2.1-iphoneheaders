/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface SKUISettingValueStore : NSObject {

	NSObject*<OS_dispatch_queue> _mutexQueue;
	NSMutableDictionary* _originalValues;
	NSMutableDictionary* _modifiedValues;

}
-(id)valueForKey:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(id)valueForKeyPath:(id)arg1 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)clearValueForKey:(id)arg1 ;
-(void)commitChanges;
-(void)discardChanges;
-(id)modifiedKeys;
-(id)originalValueForKey:(id)arg1 ;
-(id)resolvedValueForKey:(id)arg1 ;
-(void)setModifiedValue:(id)arg1 forKey:(id)arg2 ;
-(void)setOriginalValue:(id)arg1 forKey:(id)arg2 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(BOOL)hasChanges;
@end

