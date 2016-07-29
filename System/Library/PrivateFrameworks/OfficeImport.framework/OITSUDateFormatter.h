/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:48 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString;

@interface OITSUDateFormatter : NSObject {

	NSString* mDateOnlyFormatString;
	NSString* mTimeOnlyFormatString;
	CFDateFormatterRef mFullDateFormatter;

}
+(unsigned long long)p_DateTimeSplitLocationInFormatString:(id)arg1 ;
+(id)defaultDateTimeFormatForLocale:(id)arg1 ;
+(id)supportedDateFormatsForLocale:(id)arg1 ;
+(id)supportedTimeFormatsForLocale:(id)arg1 ;
+(id)dateFormatStringSpecialSymbols;
+(id)datePortionOfDateTimeFormatString:(id)arg1 ;
+(id)timePortionOfDateTimeFormatString:(id)arg1 ;
+(id)shortMonthNamesForNonCachedCurrentLocale;
-(void)dealloc;
-(id)init;
-(id)initWithLocale:(id)arg1 ;
@end

