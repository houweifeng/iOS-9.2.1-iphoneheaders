/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:06 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSULocale;

@interface TSCECellValue : NSObject {

	int mValueType;
	TSULocale* mLocale;

}

@property (assign,nonatomic) int valueType; 
@property (nonatomic,retain) TSULocale * locale; 
-(BOOL)isEqualToCellValue:(id)arg1 ;
-(id)initCellValueWithArchive:(const CellValueArchive*)arg1 locale:(id)arg2 ;
-(void)encodeCellValueToArchive:(CellValueArchive*)arg1 ;
-(void)dealloc;
-(id)displayString;
-(void)setLocale:(TSULocale *)arg1 ;
-(TSULocale *)locale;
-(int)valueType;
-(id)initWithLocale:(id)arg1 ;
-(SCD_Struct_TS61)formatStruct;
-(void)setValueType:(int)arg1 ;
@end

