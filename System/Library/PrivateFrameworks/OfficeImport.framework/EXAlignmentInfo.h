/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXAlignmentInfo : NSObject
+(int)edHorizontalAlignFromHorizontalAlignString:(id)arg1 ;
+(int)edVerticalAlignFromVerticalAlignString:(id)arg1 ;
+(void)initialize;
+(id)edAlignmentInfoFromXmlAlignmentInfoElement:(xmlNode*)arg1 state:(id)arg2 ;
+(id)edAlignmentInfoFromVmlAlignmentInfoElement:(xmlNode*)arg1 state:(id)arg2 ;
@end
