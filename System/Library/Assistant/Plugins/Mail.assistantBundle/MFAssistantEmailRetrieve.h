/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/Plugins/Mail.assistantBundle/Mail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObjectRetrieve.h>
#import <libobjc.A.dylib/MSSearchDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;
@class NSMutableArray, NSObject, NSString;

@interface MFAssistantEmailRetrieve : SADomainObjectRetrieve <MSSearchDelegate> {

	NSMutableArray* _results;
	NSObject*<OS_dispatch_queue> _resultsQueue;
	NSObject*<OS_dispatch_semaphore> _searchCompleted;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_searchFinished:(id)arg1 ;
-(id)_convertMSEmailToSAEmail:(id)arg1 ;
-(void)_populateResults:(id)arg1 ;
-(id)_validateEmails:(id)arg1 ;
-(id)_retrieveEmails:(id)arg1 ;
-(void)dealloc;
-(BOOL)search:(id)arg1 didFindResults:(id)arg2 ;
-(void)search:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end

