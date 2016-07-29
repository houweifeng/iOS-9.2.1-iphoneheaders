/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKWidgetView.h>
#import <libobjc.A.dylib/OKWidgetViewCollection.h>
#import <libobjc.A.dylib/OKWidgetGroupViewExports.h>

@class NSArray, NSMutableDictionary, OKWidgetView, OKTransition, NSString, OFUIView;

@interface OKWidgetGroupView : OKWidgetView <OKWidgetViewCollection, OKWidgetGroupViewExports> {

	long long _index;
	NSArray* _items;
	NSMutableDictionary* _itemWidgetViews;
	OKWidgetView* _currentWidgetView;
	OKTransition* _transition;
	NSString* _switchActionScript;
	BOOL _autoplay;
	BOOL _loop;
	BOOL _isPlaying;
	double _itemDuration;
	BOOL _isInTransition;
	UIEdgeInsets _itemEdgeInsets;
	OFUIView* _itemContainerView;

}

@property (nonatomic,readonly) BOOL isPlaying;                      //@synthesize isPlaying=_isPlaying - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)valueForUndefinedKey:(id)arg1 ;
-(BOOL)prepareForDisplay:(BOOL)arg1 ;
-(void)_stop;
-(BOOL)isPlaying;
-(id)initWithWidget:(id)arg1 ;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setSettingAutoplay:(BOOL)arg1 ;
-(void)setSettingLoop:(BOOL)arg1 ;
-(void)prepareForReload;
-(void)prepareForRefresh;
-(BOOL)prepareForWarmup:(BOOL)arg1 ;
-(BOOL)prepareForUnload:(BOOL)arg1 ;
-(id)collectionItemAtIndexPath:(id)arg1 ;
-(id)layoutSettingsKeys;
-(void)setSettingTransition:(id)arg1 ;
-(void)setAntialiasing:(BOOL)arg1 ;
-(unsigned long long)collectionItemsCount;
-(id)collectionItemsNames;
-(id)collectionItemForName:(id)arg1 ;
-(CGRect)itemContainerRect;
-(long long)rotatedIndexForIndex:(long long)arg1 ;
-(id)_widgetViewForIndex:(long long)arg1 ;
-(void)_updateDisplayedWidgetViews;
-(id)_previousWidgetView;
-(id)_nextWidgetView;
-(void)_prepareAllForUnload:(BOOL)arg1 except:(id)arg2 ;
-(void)_play;
-(void)_transitionToIndex:(long long)arg1 withTransition:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_reloadWidgetViews;
-(void)_gotoIndex:(long long)arg1 ;
-(void)_transitionToIndex:(long long)arg1 forward:(BOOL)arg2 andLocation:(CGPoint)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_gotoNextIndex;
-(void)_jsTransitionToIndex:(long long)arg1 forward:(BOOL)arg2 andLocation:(CGPoint)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_jsTransitionToIndex:(long long)arg1 withTransition:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_jsGotoIndex:(long long)arg1 ;
-(id)settingTransition;
-(void)setSettingItems:(id)arg1 ;
-(void)setSettingIndex:(long long)arg1 ;
-(long long)settingIndex;
-(void)setSettingItemDuration:(double)arg1 ;
-(void)setSettingSwitchActionScript:(id)arg1 ;
-(UIEdgeInsets)settingItemEdgeInsets;
-(void)setSettingItemEdgeInsets:(UIEdgeInsets)arg1 ;
@end

