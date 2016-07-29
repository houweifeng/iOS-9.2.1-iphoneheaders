/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray, NSString, IPMessage;

@interface IPMessageUnit : NSObject {

	NSMutableArray* _followups;
	NSArray* _flatMessageThread;
	NSArray* _features;
	NSString* _text;
	IPMessageUnit* _previous;
	IPMessage* _originalMessage;
	long long _indexInOriginalMessage;

}

@property (readonly) NSString * text;                                 //@synthesize text=_text - In the implementation block
@property (__weak,readonly) IPMessage * originalMessage;              //@synthesize originalMessage=_originalMessage - In the implementation block
@property (readonly) long long indexInOriginalMessage;                //@synthesize indexInOriginalMessage=_indexInOriginalMessage - In the implementation block
@property (readonly) NSArray * features;                              //@synthesize features=_features - In the implementation block
@property (__weak,readonly) IPMessageUnit * previous;                 //@synthesize previous=_previous - In the implementation block
@property (readonly) NSArray * followups; 
-(IPMessageUnit *)previous;
-(NSString *)text;
-(IPMessage *)originalMessage;
-(NSArray *)features;
-(void)addFollowup:(id)arg1 ;
-(long long)indexInOriginalMessage;
-(NSArray *)followups;
-(id)initWithText:(id)arg1 originalMessage:(id)arg2 index:(long long)arg3 ;
@end

