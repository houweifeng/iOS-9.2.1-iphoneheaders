/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/DOMObject.h>

@class NSString, DOMNode;

@interface DOMXPathResult : DOMObject

@property (readonly) unsigned short resultType; 
@property (readonly) double numberValue; 
@property (copy,readonly) NSString * stringValue; 
@property (readonly) BOOL booleanValue; 
@property (readonly) DOMNode * singleNodeValue; 
@property (readonly) BOOL invalidIteratorState; 
@property (readonly) unsigned snapshotLength; 
-(DOMNode *)singleNodeValue;
-(BOOL)invalidIteratorState;
-(unsigned)snapshotLength;
-(id)iterateNext;
-(id)snapshotItem:(unsigned)arg1 ;
-(void)dealloc;
-(NSString *)stringValue;
-(double)numberValue;
-(unsigned short)resultType;
-(BOOL)booleanValue;
-(void)finalize;
@end

