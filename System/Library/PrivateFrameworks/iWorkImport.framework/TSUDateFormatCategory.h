/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class NSMutableArray;

@interface TSUDateFormatCategory : NSObject {

	CFDateFormatterRef mInitialFormatter;
	NSMutableArray* mEntries;

}
-(void)dealloc;
-(CFDateRef)newDateFromString:(CFStringRef)arg1 forceAllowAMPM:(BOOL)arg2 successfulFormatString:(const _CFString*)arg3 perfect:(BOOL*)arg4 ;
-(id)initWithInitialPattern:(id)arg1 locale:(CFLocaleRef)arg2 ;
-(void)addSeparator:(unsigned short)arg1 format:(id)arg2 locale:(CFLocaleRef)arg3 ;
-(id)entryForSeparator:(unsigned short)arg1 ;
@end

