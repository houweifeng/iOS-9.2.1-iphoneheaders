/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/Plugins/FMF.assistantBundle/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSLocale;

@interface FMFDistanceCalculator : NSObject {

	NSLocale* locale;

}

@property (nonatomic,readonly) int measurementSystem; 
@property (nonatomic,retain) NSLocale * locale; 
+(id)sharedInstance;
+(id)bundle;
-(id)init;
-(void)setLocale:(NSLocale *)arg1 ;
-(NSLocale *)locale;
-(id)localizedStringFromNumber:(id)arg1 numberStyle:(unsigned long long)arg2 ;
-(int)measurementSystem;
-(id)_scaledAndConvertedMin:(double)arg1 andMax:(double)arg2 ;
-(double)averageDistanceFromLocation:(id)arg1 toLocation:(id)arg2 ;
-(id)localizedDistanceFromLocation:(id)arg1 toLocation:(id)arg2 ;
@end

