/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLWebViewPrintPageHelper.h>

@class UIWebPaginationInfo;

@interface QLWordProcessorPrintPageRenderer : QLWebViewPrintPageHelper {

	UIWebPaginationInfo* _paginationInfo;

}
-(void)dealloc;
-(long long)numberOfPages;
-(id)pdfDataForPageAtIndex:(long long)arg1 printingDone:(BOOL*)arg2 ;
-(id)_paginationInfo;
@end

