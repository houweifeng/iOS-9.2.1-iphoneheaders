/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/Plugins/Phone.assistantBundle/Phone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAPhoneSearch.h>
#import <Accessibility/AFServiceCommand.h>

@class CHManager, NSString;

@interface PHSearchRequest : SAPhoneSearch <AFServiceCommand> {

	CHManager* _recentsManager;

}

@property (nonatomic,retain) CHManager * recentsManager;              //@synthesize recentsManager=_recentsManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)personFromRawAddress:(id)arg1 ;
-(id)voicemails;
-(id)recentCallsFilterPredicate;
-(id)phoneCallHistoryFromRecentCall:(id)arg1 ;
-(id)labelForRawAddress:(id)arg1 ;
-(void*)addressBookRecordForRawAddress:(id)arg1 ;
-(id)recordIDStringFromVoicemail:(id)arg1 ;
-(id)personFromAddressBookRecord:(void*)arg1 ;
-(id)typedDataForRawAddress:(id)arg1 ;
-(id)contactsRecordIDs;
-(id)voicemailFilterPredicate;
-(id)phoneVoiceMailFromVMVoicemail:(id)arg1 ;
-(CHManager *)recentsManager;
-(void)setRecentsManager:(CHManager *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)_validate;
-(id)_perform;
-(id)recentCalls;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
@end

