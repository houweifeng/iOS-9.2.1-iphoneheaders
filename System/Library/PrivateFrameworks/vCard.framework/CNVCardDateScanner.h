/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CNVCardDateScanner : NSObject {

	NSString* _string;
	unsigned long long _position;

}

@property (readonly) unsigned long long position;              //@synthesize position=_position - In the implementation block
+(id)scannerWithString:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)position;
-(id)initWithString:(id)arg1 ;
-(BOOL)isAtEnd;
-(unsigned long long)lengthOfCalendarUnit:(unsigned long long)arg1 ;
-(long long)scanComponentValueOfLength:(unsigned long long)arg1 ;
-(long long)scanCalendarUnit:(unsigned long long)arg1 ;
-(BOOL)scanLeapMarker;
-(unsigned short)nextCharacter;
@end

