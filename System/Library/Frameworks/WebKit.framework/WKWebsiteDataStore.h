/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:08 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class NSString;

@interface WKWebsiteDataStore : NSObject <WKObject> {

	ObjectStorage<API::WebsiteDataStore> _websiteDataStore;

}

@property (getter=isPersistent,nonatomic,readonly) BOOL persistent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
+(id)safari_allDataTypes;
+(id)defaultDataStore;
+(id)nonPersistentDataStore;
+(id)allWebsiteDataTypes;
-(void)dealloc;
-(BOOL)isPersistent;
-(Object*)_apiObject;
-(void)fetchDataRecordsOfTypes:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeDataOfTypes:(id)arg1 modifiedSince:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)removeDataOfTypes:(id)arg1 forDataRecords:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

