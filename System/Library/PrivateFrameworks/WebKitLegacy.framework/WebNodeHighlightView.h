/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebKitLegacy-Structs.h>
#import <WebCore/WAKView.h>

@class WebNodeHighlight, NSMutableArray;

@interface WebNodeHighlightView : WAKView {

	WebNodeHighlight* _webNodeHighlight;
	NSMutableArray* _layers;

}
-(void)layoutSublayers:(id)arg1 ;
-(id)initWithWebNodeHighlight:(id)arg1 ;
-(void)detachFromWebNodeHighlight;
-(void)_attach:(id)arg1 numLayers:(unsigned long long)arg2 ;
-(void)_layoutForNodeHighlight:(Highlight*)arg1 parent:(id)arg2 ;
-(void)_layoutForRectsHighlight:(Highlight*)arg1 parent:(id)arg2 ;
-(id)webNodeHighlight;
-(void)dealloc;
-(void)_removeAllLayers;
-(BOOL)isFlipped;
@end

