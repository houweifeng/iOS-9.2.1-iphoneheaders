/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:34 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSEntityMigrationPolicy.h>

@class NSMutableDictionary, NSString;

@interface CHMigrationPolicy : NSEntityMigrationPolicy {

	NSMutableDictionary* mccToISOCountryCodeMap;
	NSString* lastQueriedISOCountryCode;
	NSString* currentLocale;

}
-(id)init;
-(id)getLocationForCallerId:(id)arg1 andIsoCountryCode:(id)arg2 ;
-(id)isoCountryCodeForMCC:(id)arg1 ;
-(id)isoCountryCodeIfAbsent:(id)arg1 ;
@end

