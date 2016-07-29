/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:48 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/TextInput/Plugins/MessagesDataKeyboardPlugin.bundle/MessagesDataKeyboardPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessagesDataKeyboardPlugin/TILinguisticDataSourceMessage.h>

@class NSDate, NSString;

@interface MessagesDataSourceMessage : NSObject <TILinguisticDataSourceMessage> {

	NSDate* _dateSent;
	NSString* _recipient;
	NSString* _body;
	BOOL _fromMe;
	unsigned long long _rowID;

}

@property (assign,nonatomic) BOOL fromMe;                              //@synthesize fromMe=_fromMe - In the implementation block
@property (assign,nonatomic) unsigned long long rowID;                 //@synthesize rowID=_rowID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDate * dateSent;                 //@synthesize dateSent=_dateSent - In the implementation block
@property (nonatomic,copy,readonly) NSString * recipient;              //@synthesize recipient=_recipient - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;                   //@synthesize body=_body - In the implementation block
-(void)setFromMe:(BOOL)arg1 ;
-(id)initWithDate:(id)arg1 recipient:(id)arg2 body:(id)arg3 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)body;
-(BOOL)fromMe;
-(NSDate *)dateSent;
-(unsigned long long)rowID;
-(NSString *)recipient;
-(void)setRowID:(unsigned long long)arg1 ;
@end

