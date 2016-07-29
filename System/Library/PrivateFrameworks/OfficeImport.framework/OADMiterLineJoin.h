/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/OADLineJoin.h>

@interface OADMiterLineJoin : OADLineJoin {

	float mLimit;
	unsigned mIsLimitOverridden : 1;

}
+(id)defaultProperties;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLimit:(float)arg1 ;
-(id)initWithDefaults;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg1 ;
-(BOOL)isAnythingOverridden;
-(void)removeUnnecessaryOverrides;
-(BOOL)isLimitOverridden;
-(float)limit;
@end

