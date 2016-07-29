/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@interface ICSDateValue : NSObject <NSCoding> {

	long long _year;
	long long _month;
	long long _day;

}

@property (readonly) long long year;               //@synthesize year=_year - In the implementation block
@property (readonly) long long month;              //@synthesize month=_month - In the implementation block
@property (readonly) long long day;                //@synthesize day=_day - In the implementation block
+(id)dateFromICSUTF8String:(const char*)arg1 ;
+(id)dateFromICSString:(id)arg1 ;
-(int)dateType;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(long long)compare:(id)arg1 ;
-(long long)year;
-(long long)month;
-(long long)day;
-(id)components;
-(id)initWithYear:(long long)arg1 month:(long long)arg2 day:(long long)arg3 ;
-(id)icsString;
@end

