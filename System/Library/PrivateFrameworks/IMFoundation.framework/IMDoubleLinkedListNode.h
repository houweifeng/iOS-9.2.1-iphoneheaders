/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:58 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMDoubleLinkedListNode : NSObject {

	IMDoubleLinkedListNode* _prev;
	IMDoubleLinkedListNode* _next;
	id _dataValue;

}

@property (retain) IMDoubleLinkedListNode * prev;              //@synthesize prev=_prev - In the implementation block
@property (retain) IMDoubleLinkedListNode * next;              //@synthesize next=_next - In the implementation block
@property (retain) id dataValue;                               //@synthesize dataValue=_dataValue - In the implementation block
-(void)setNext:(IMDoubleLinkedListNode *)arg1 ;
-(IMDoubleLinkedListNode *)next;
-(void)setPrev:(IMDoubleLinkedListNode *)arg1 ;
-(void)setDataValue:(id)arg1 ;
-(IMDoubleLinkedListNode *)prev;
-(id)dataValue;
@end

