/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDResources, EDColorReference;

@interface EDBorder : NSObject {

	EDResources* mResources;
	int mType;
	EDColorReference* mColorReference;
	int mDiagonalType;

}
+(id)borderWithType:(int)arg1 colorReference:(id)arg2 resources:(id)arg3 ;
+(id)borderWithType:(int)arg1 colorReference:(id)arg2 diagonalType:(int)arg3 resources:(id)arg4 ;
+(id)borderWithType:(int)arg1 resources:(id)arg2 ;
+(id)borderWithType:(int)arg1 color:(id)arg2 resources:(id)arg3 ;
+(id)borderWithType:(int)arg1 color:(id)arg2 diagonalType:(int)arg3 resources:(id)arg4 ;
-(id)colorReference;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)color;
-(id)initWithResources:(id)arg1 ;
-(BOOL)isEqualToBorder:(id)arg1 ;
-(int)diagonalType;
-(void)setDiagonalType:(int)arg1 ;
@end

