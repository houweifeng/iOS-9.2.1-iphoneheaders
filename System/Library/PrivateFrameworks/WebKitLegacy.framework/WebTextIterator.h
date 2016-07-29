/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@class WebTextIteratorPrivate;

@interface WebTextIterator : NSObject {

	WebTextIteratorPrivate* _private;

}
+(id)dd_iteratorForDocument:(id)arg1 ;
-(BOOL)dd_checkCurrentRangeAgainstString:(CFStringRef)arg1 ;
-(id)dd_collectDDRangesForQuery:(_DDScanQuery*)arg1 forResults:(id)arg2 ;
-(_DDScanQuery*)dd_newQueryStopRange:(id*)arg1 ;
-(id)dd_doUrlificationForQuery:(_DDScanQuery*)arg1 forResults:(id)arg2 referenceDate:(id)arg3 document:(id)arg4 DOMWasModified:(BOOL*)arg5 relevantResults:(id*)arg6 URLificationBlock:(/*^block*/id)arg7 ;
-(id)currentNode;
-(id)currentText;
-(void)dealloc;
-(BOOL)atEnd;
-(unsigned long long)currentTextLength;
-(const unsigned short*)currentTextPointer;
-(id)currentRange;
-(void)advance;
-(id)initWithRange:(id)arg1 ;
@end

