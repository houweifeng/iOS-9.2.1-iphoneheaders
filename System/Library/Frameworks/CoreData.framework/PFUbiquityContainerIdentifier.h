/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSFilePresenter.h>

@class NSString, PFUbiquityLocation, NSURL, NSOperationQueue;

@interface PFUbiquityContainerIdentifier : NSObject <NSFilePresenter> {

	NSString* _storeName;
	NSString* _localPeerID;
	PFUbiquityLocation* _ubiquityRootLocation;
	NSString* _uuidString;
	PFUbiquityLocation* _uuidFileLocation;
	NSURL* _presentedItemURL;
	BOOL _usedExistingUUIDFile;

}

@property (nonatomic,readonly) NSString * uuidString;                              //@synthesize uuidString=_uuidString - In the implementation block
@property (nonatomic,readonly) PFUbiquityLocation * uuidFileLocation;              //@synthesize uuidFileLocation=_uuidFileLocation - In the implementation block
@property (nonatomic,readonly) BOOL usedExistingUUIDFile;                          //@synthesize usedExistingUUIDFile=_usedExistingUUIDFile - In the implementation block
@property (copy,readonly) NSURL * presentedItemURL;                                //@synthesize presentedItemURL=_presentedItemURL - In the implementation block
@property (readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
-(NSString *)uuidString;
-(id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 andUbiquityRootLocation:(id)arg3 ;
-(BOOL)identifyContainer:(id*)arg1 ;
-(BOOL)usedExistingUUIDFile;
-(BOOL)replaceIdentifierWithUUID:(id)arg1 error:(id*)arg2 ;
-(void)setUUIDStringFromLocation:(id)arg1 ;
-(BOOL)writeToDisk:(id*)arg1 ;
-(PFUbiquityLocation *)uuidFileLocation;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
@end

