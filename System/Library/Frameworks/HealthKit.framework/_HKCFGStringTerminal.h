/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/_HKCFGTerminal.h>

@class NSString;

@interface _HKCFGStringTerminal : _HKCFGTerminal {

	BOOL _caseSensitive;
	NSString* _string;

}

@property (nonatomic,copy) NSString * string;                 //@synthesize string=_string - In the implementation block
@property (assign,nonatomic) BOOL caseSensitive;              //@synthesize caseSensitive=_caseSensitive - In the implementation block
-(BOOL)caseSensitive;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(id)_label;
-(unsigned long long)_minimumLength;
-(BOOL)_scanValue:(id*)arg1 withScanner:(id)arg2 ;
-(void)setCaseSensitive:(BOOL)arg1 ;
-(id)characterSet;
@end

