/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CNAutocompleteResultFactory : NSObject {

	NSString* _preferredDomain;
	NSString* _sendingAddress;

}
+(id)factoryWithPriorityDomain:(id)arg1 sendingAddress:(id)arg2 ;
-(id)duetResultWithDisplayName:(id)arg1 value:(id)arg2 contactIdentifier:(id)arg3 ;
-(id)directoryServerResultWithDisplayName:(id)arg1 value:(id)arg2 nameComponents:(id)arg3 ;
-(id)suggestedResultWithDisplayName:(id)arg1 value:(id)arg2 nameComponents:(id)arg3 ;
-(id)localContactResultWithDisplayName:(id)arg1 value:(id)arg2 nameComponents:(id)arg3 contactIdentifier:(id)arg4 ;
-(id)localGroupResultWithDisplayName:(id)arg1 groupIdentifier:(id)arg2 ;
-(id)calendarServerResultWithDisplayName:(id)arg1 value:(id)arg2 nameComponents:(id)arg3 ;
-(id)initWithPriorityDomain:(id)arg1 sendingAddress:(id)arg2 ;
-(void)applySearchContextToResult:(id)arg1 ;
-(id)frequentRecentResultWithDisplayName:(id)arg1 value:(id)arg2 lastSendingAddress:(id)arg3 date:(id)arg4 group:(BOOL)arg5 completesChosenGroup:(BOOL)arg6 ;
-(id)infrequentRecentResultWithDisplayName:(id)arg1 value:(id)arg2 lastSendingAddress:(id)arg3 dateCount:(unsigned long long)arg4 date:(id)arg5 group:(BOOL)arg6 completesChosenGroup:(BOOL)arg7 ;
-(void)applyPreferredDomainBitToResult:(id)arg1 ;
-(void)applyLastSendingAddressBitToResult:(id)arg1 ;
-(id)localGroupResultWithDisplayName:(id)arg1 groupIdentifier:(id)arg2 membersProvider:(/*^block*/id)arg3 ;
-(id)recentResultWithDisplayName:(id)arg1 value:(id)arg2 lastSendingAddress:(id)arg3 dateCount:(unsigned long long)arg4 date:(id)arg5 group:(BOOL)arg6 completesChosenGroup:(BOOL)arg7 ;
@end

