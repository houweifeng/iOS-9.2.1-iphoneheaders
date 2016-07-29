/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/IKJSDOMXPathResult.h>

@class NSString, IKDOMNode, NSArray;

@interface IKDOMXPathResult : IKJSObject <IKJSDOMXPathResult> {

	long long _type;
	NSArray* _nodes;

}

@property (assign) long long type;                                              //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * nodes;                                     //@synthesize nodes=_nodes - In the implementation block
@property (nonatomic,readonly) long long resultType; 
@property (nonatomic,readonly) long long numberValue; 
@property (nonatomic,__weak,readonly) NSString * stringValue; 
@property (nonatomic,readonly) BOOL booleanValue; 
@property (nonatomic,__weak,readonly) IKDOMNode * singleNodeValue; 
@property (nonatomic,readonly) BOOL invalidIteratorState; 
@property (nonatomic,readonly) long long snapshotLength; 
-(IKDOMNode *)singleNodeValue;
-(BOOL)invalidIteratorState;
-(long long)snapshotLength;
-(id)iterateNext;
-(id)snapshotItem:(long long)arg1 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSString *)stringValue;
-(NSArray *)nodes;
-(void)setNodes:(NSArray *)arg1 ;
-(id)initWithAppContext:(id)arg1 type:(long long)arg2 nodes:(id)arg3 ;
-(long long)numberValue;
-(long long)resultType;
-(BOOL)booleanValue;
@end

