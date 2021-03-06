/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EDLinkReference : NSObject {

	unsigned long long mLinkIndex;
	unsigned long long mFirstSheetIndex;
	unsigned long long mLastSheetIndex;

}
+(id)linkReferenceWithLinkIndex:(unsigned long long)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithLinkIndex:(unsigned long long)arg1 firstSheetIndex:(unsigned long long)arg2 lastSheetIndex:(unsigned long long)arg3 ;
-(BOOL)isEqualToLinkReference:(id)arg1 ;
-(unsigned long long)firstSheetIndex;
-(void)setFirstSheetIndex:(unsigned long long)arg1 ;
-(unsigned long long)lastSheetIndex;
-(void)setLastSheetIndex:(unsigned long long)arg1 ;
-(unsigned long long)linkIndex;
-(void)setLinkIndex:(unsigned long long)arg1 ;
-(BOOL)isWorkbookLevelReference;
@end

