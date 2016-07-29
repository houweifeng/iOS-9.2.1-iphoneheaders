/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMChatItemRules <NSObject>
@required
-(id)_items;
-(void)_setItems:(id)arg1;
-(void)_invalidate;
-(id)_initWithChat:(id)arg1;
-(id)_chatItems;
-(void)_didProcessChatItems:(id)arg1;
-(BOOL)_shouldReloadChatItem:(id)arg1 oldChatItem:(id)arg2;
-(id)_nextStaleChatItem;
-(void)_setNextStaleChatItem:(id)arg1;
-(id)_itemWithChatItemsDeleted:(id)arg1 fromItem:(id)arg2;
-(id)_chatItemsForItem:(id)arg1 previousItem:(id)arg2;
-(BOOL)_shouldRegenerateChatItemsForItem:(id)arg1 previousItem:(id)arg2 oldPreviousItem:(id)arg3;

@end

