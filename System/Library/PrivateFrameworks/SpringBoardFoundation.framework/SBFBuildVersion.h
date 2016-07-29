/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SBFBuildVersion : NSObject {

	NSString* _stringRepresentation;
	long long _majorBuildNumber;
	NSString* _majorBuildLetterString;
	long long _minorBuildNumber;
	NSString* _minorBuildLetterString;

}

@property (nonatomic,copy,readonly) NSString * stringRepresentation;                //@synthesize stringRepresentation=_stringRepresentation - In the implementation block
@property (nonatomic,readonly) long long majorBuildNumber;                          //@synthesize majorBuildNumber=_majorBuildNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * majorBuildLetterString;              //@synthesize majorBuildLetterString=_majorBuildLetterString - In the implementation block
@property (nonatomic,readonly) long long minorBuildNumber;                          //@synthesize minorBuildNumber=_minorBuildNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * minorBuildLetterString;              //@synthesize minorBuildLetterString=_minorBuildLetterString - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithString:(id)arg1 ;
-(long long)majorBuildNumber;
-(NSString *)majorBuildLetterString;
-(NSString *)minorBuildLetterString;
-(long long)minorBuildNumber;
-(long long)compareBuildVersion:(id)arg1 withPrecision:(long long)arg2 ;
-(long long)compareBuildVersionString:(id)arg1 withPrecision:(long long)arg2 ;
-(NSString *)stringRepresentation;
@end

