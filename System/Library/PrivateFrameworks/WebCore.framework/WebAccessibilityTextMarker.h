/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@interface WebAccessibilityTextMarker : NSObject {

	AXObjectCache* _cache;
	TextMarkerData* _textMarkerData;

}
+(id)textMarkerWithVisiblePosition:(VisiblePosition*)arg1 cache:(AXObjectCache*)arg2 ;
-(id)dataRepresentation;
-(id)initWithTextMarker:(TextMarkerData*)arg1 cache:(AXObjectCache*)arg2 ;
-(id)initWithData:(id)arg1 accessibilityObject:(WebAccessibilityObjectWrapper*)arg2 ;
-(VisiblePosition*)visiblePosition;
-(id)description;
-(id)initWithData:(id)arg1 cache:(AXObjectCache*)arg2 ;
@end

