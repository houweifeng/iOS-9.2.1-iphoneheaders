/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSPUnknownField : NSObject {

	shared_ptr<google::protobuf::UnknownFieldSet>* _fieldSet;
	FieldInfo* _fieldInfo;

}
+(id)unknownFieldWithFieldSet:(shared_ptr<google::protobuf::UnknownFieldSet>*)arg1 fieldInfo:(const FieldInfo*)arg2 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)updateMessageInfo:(MessageInfo*)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(id)initWithFieldSet:(shared_ptr<google::protobuf::UnknownFieldSet>*)arg1 fieldInfo:(const FieldInfo*)arg2 ;
-(const FieldInfo*)fieldInfo;
-(void)mergeToUnknownFieldSet:(UnknownFieldSet*)arg1 ;
-(id)debugDescription;
@end

