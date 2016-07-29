/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/Plugins/Reminders.assistantBundle/Reminders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObjectCommit.h>
#import <Accessibility/AFServiceCommand.h>

@class NSString;

@interface RemindersAssistantCommitReminder : SADomainObjectCommit <AFServiceCommand>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)commitReminder:(id)arg1 ;
-(id)commitList:(id)arg1 ;
-(id)_validateList:(id)arg1 ;
-(id)_validateReminder:(id)arg1 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end
