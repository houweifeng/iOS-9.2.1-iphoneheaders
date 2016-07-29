/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSArray;

@interface TSPUnknownContent : NSObject {

	NSArray* _messages;
	NSArray* _ignoreAndPreserveFields;
	NSArray* _ignoreAndDropFields;
	NSArray* _savedIgnoreAndPreserveFields;
	NSArray* _savedIgnoreAndDropFields;

}

@property (nonatomic,readonly) NSArray * messages;              //@synthesize messages=_messages - In the implementation block
+(id)unknownContentWithMessage:(Message*)arg1 fieldInfos:(FieldInfoTree*)arg2 unknownMessages:(id)arg3 foundMustUnderstandFields:(BOOL*)arg4 ;
-(void)willModifyObject;
-(void)saveToArchiver:(id)arg1 ;
-(void)updateMessageInfo:(MessageInfo*)arg1 ;
-(id)initWithMessages:(id)arg1 ignoreAndPreserveFields:(id)arg2 ignoreAndDropFields:(id)arg3 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(id)init;
-(NSArray *)messages;
@end

