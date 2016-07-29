/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:09 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIScrollViewDelegate.h>

@class NSString;

@interface WKOverflowScrollViewDelegate : NSObject <UIScrollViewDelegate> {

	ScrollingTreeOverflowScrollingNodeIOS* _scrollingTreeNode;
	BOOL _inUserInteraction;

}

@property (assign,getter=_isInUserInteraction,nonatomic) BOOL inUserInteraction;              //@synthesize inUserInteraction=_inUserInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id)initWithScrollingTreeNode:(ScrollingTreeOverflowScrollingNodeIOS*)arg1 ;
-(BOOL)_isInUserInteraction;
-(void)setInUserInteraction:(BOOL)arg1 ;
@end
