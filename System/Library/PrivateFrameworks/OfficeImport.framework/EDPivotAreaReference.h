/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EDPivotAreaReference : NSObject {

	BOOL mByPosition;
	BOOL mRelative;
	BOOL mSelected;
	unsigned long long mFieldId;
	unsigned long long mCount;

}
+(id)pivotAreaReference;
-(unsigned long long)count;
-(id)init;
-(id)description;
-(void)setCount:(unsigned long long)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(BOOL)relative;
-(void)setRelative:(BOOL)arg1 ;
-(unsigned long long)fieldId;
-(void)setFieldId:(unsigned long long)arg1 ;
-(BOOL)byPosition;
-(void)setByPosition:(BOOL)arg1 ;
@end

