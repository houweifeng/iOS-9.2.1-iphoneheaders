/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface ECCurrencyConverter : NSObject {

	NSMutableDictionary* mXlToLassoCurrencyCode;
	NSMutableDictionary* mLassoToXlCurrencyCode;
	NSMutableDictionary* mXlAccountingFormat;
	NSMutableDictionary* mXlToLassoCurrencyCodeBySymbol;

}
+(id)currencyConverter;
-(void)populateDictionaries;
-(id)lassoCurrencyCodeForDollar;
-(void)dealloc;
-(id)lassoCurrencyCodeFromXl:(id)arg1 ;
-(id)xlCurrencyCodeFromLasso:(id)arg1 ;
-(int)xlAccountFormatFromLasso:(id)arg1 ;
@end

