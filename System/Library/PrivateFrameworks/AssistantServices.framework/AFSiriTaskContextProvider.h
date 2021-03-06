/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AFSiriAppContextProviding.h>

@class AFSiriTaskmaster, NSString;

@interface AFSiriTaskContextProvider : NSObject <AFSiriAppContextProviding> {

	AFSiriTaskmaster* _taskmaster;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)getAppContextWithDeliveryHandler:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithTaskmaster:(id)arg1 ;
@end

