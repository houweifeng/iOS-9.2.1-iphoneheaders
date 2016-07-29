/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBFolderController.h>

@class NSIndexPath, SBIcon;

@interface SBStarkFolderController : SBFolderController {

	NSIndexPath* _focusedIndex;
	unsigned long long _interactionAffordances;
	BOOL _supportsKnobEvents;
	BOOL _supportsTouchEvents;
	BOOL _pageAnimating;

}

@property (assign,nonatomic) unsigned long long interactionAffordances; 
@property (nonatomic,retain) NSIndexPath * focusedIndex; 
@property (nonatomic,retain) SBIcon * focusedIcon; 
-(unsigned long long)interactionAffordances;
-(id)initWithFolder:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3 context:(id)arg4 ;
-(void)setInteractionAffordances:(unsigned long long)arg1 ;
-(void)setFocusedIcon:(SBIcon *)arg1 ;
-(void)setFocusedIndex:(NSIndexPath *)arg1 ;
-(void)setFocusedIndex:(id)arg1 animated:(BOOL)arg2 ;
-(void)_setFocusedIndex:(id)arg1 animated:(BOOL)arg2 scrollToPageIfNecessary:(BOOL)arg3 ;
-(void)setInnerFolderController:(id)arg1 ;
-(SBIcon *)focusedIcon;
-(void)folderView:(id)arg1 currentPageIndexDidChange:(long long)arg2 ;
-(id)_iconPageIndicatorImageSetCache;
-(NSIndexPath *)focusedIndex;
-(void)handleFocusMoveAlongHeading:(unsigned long long)arg1 ;
-(void)dealloc;
-(Class)_contentViewClass;
@end

