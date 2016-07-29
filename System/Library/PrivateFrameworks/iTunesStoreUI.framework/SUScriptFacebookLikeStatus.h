/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/SUScriptObject.h>

@class NSDictionary, NSArray;

@interface SUScriptFacebookLikeStatus : SUScriptObject {

	NSDictionary* _dictionary;

}

@property (readonly) unsigned long long friendLikeCount; 
@property (readonly) NSArray * friends; 
@property (readonly) unsigned long long globalLikeCount; 
@property (getter=isLikedByMe,readonly) id likedByMe; 
+(void)initialize;
+(id)webScriptNameForKeyName:(id)arg1 ;
-(void)dealloc;
-(id)attributeKeys;
-(id)initWithLikeStatusDictionary:(id)arg1 ;
-(unsigned long long)friendLikeCount;
-(NSArray *)friends;
-(unsigned long long)globalLikeCount;
-(id)isLikedByMe;
-(id)scriptAttributeKeys;
-(id)_className;
@end

