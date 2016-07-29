/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKBXPCClient.h>

@class CKContainer, NSString;

@interface CKContainerXPCProxy : NSObject <CKBXPCClient> {

	CKContainer* _container;

}

@property (assign,nonatomic,__weak) CKContainer * container;              //@synthesize container=_container - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CKContainer *)container;
-(void)setContainer:(CKContainer *)arg1 ;
-(id)initWithContainer:(id)arg1 ;
-(void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)handleOperationProgress:(id)arg1 forOperationWithID:(id)arg2 ;
-(void)handleOperationCompletion:(id)arg1 forOperationWithID:(id)arg2 ;
-(void)openFileWithOpenInfo:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

