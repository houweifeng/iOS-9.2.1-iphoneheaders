/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@interface UICellHighlightingSupport : NSObject {

	CFDictionaryRef _unhighlightedStates;
	id _cell;

}
-(void)dealloc;
-(void)highlightView:(id)arg1 ;
-(void)applyState:(unsigned long long)arg1 toView:(id)arg2 ;
-(void)cacheState:(unsigned long long)arg1 forView:(id)arg2 ;
-(id)initWithCell:(id)arg1 ;
@end
