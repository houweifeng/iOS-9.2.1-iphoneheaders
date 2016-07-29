/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WebDocumentView;
#import <UIKit/UIKit-Structs.h>
@class NSObject, NSArray, UIWebDocumentView;

@interface UIWebPaginationInfo : NSObject {

	NSObject*<WebDocumentView> _documentView;
	double _scaleFactor;
	CGSize _layoutSize;
	NSArray* _pageRects;
	UIWebDocumentView* _webDocumentView;

}

@property (nonatomic,readonly) unsigned long long pageCount; 
@property (nonatomic,readonly) double lastPageHeight; 
@property (nonatomic,retain) UIWebDocumentView * webDocumentView;              //@synthesize webDocumentView=_webDocumentView - In the implementation block
-(void)dealloc;
-(id)documentView;
-(id)initWithDocumentView:(id)arg1 scaleFactor:(double)arg2 layoutSize:(CGSize)arg3 pageRects:(id)arg4 ;
-(void)setWebDocumentView:(UIWebDocumentView *)arg1 ;
-(id)pageRects;
-(double)scaleFactor;
-(CGSize)layoutSize;
-(unsigned long long)pageCount;
-(double)lastPageHeight;
-(CGSize)sizeForPageAtIndex:(long long)arg1 ;
-(UIWebDocumentView *)webDocumentView;
@end

