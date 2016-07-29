/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AppEntry : NSObject {

	unsigned long long _positiveHits;
	unsigned long long _negativeHits;
	unsigned long long _type1Errors;
	unsigned long long _type2Errors;
	unsigned long long _admissions;
	unsigned long long _rejections;

}

@property (assign) unsigned long long positiveHits;              //@synthesize positiveHits=_positiveHits - In the implementation block
@property (assign) unsigned long long negativeHits;              //@synthesize negativeHits=_negativeHits - In the implementation block
@property (assign) unsigned long long type1Errors;               //@synthesize type1Errors=_type1Errors - In the implementation block
@property (assign) unsigned long long type2Errors;               //@synthesize type2Errors=_type2Errors - In the implementation block
@property (assign) unsigned long long admissions;                //@synthesize admissions=_admissions - In the implementation block
@property (assign) unsigned long long rejections;                //@synthesize rejections=_rejections - In the implementation block
-(id)init;
-(id)initWithStatistics:(unsigned long long)arg1 negativeHits:(unsigned long long)arg2 type1Errors:(unsigned long long)arg3 type2Errors:(unsigned long long)arg4 admissions:(unsigned long long)arg5 rejections:(unsigned long long)arg6 ;
-(unsigned long long)positiveHits;
-(void)setPositiveHits:(unsigned long long)arg1 ;
-(unsigned long long)negativeHits;
-(void)setNegativeHits:(unsigned long long)arg1 ;
-(unsigned long long)type1Errors;
-(void)setType1Errors:(unsigned long long)arg1 ;
-(unsigned long long)type2Errors;
-(void)setType2Errors:(unsigned long long)arg1 ;
-(unsigned long long)admissions;
-(void)setAdmissions:(unsigned long long)arg1 ;
-(unsigned long long)rejections;
-(void)setRejections:(unsigned long long)arg1 ;
@end

