/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface TCEnumerationMap : NSObject {

	CFDictionaryRef m_valueToString;
	CFDictionaryRef m_stringToValue;
	BOOL m_caseSensitive;

}
-(void)dealloc;
-(id)initWithStructs:(const TCEnumerationStruct*)arg1 count:(int)arg2 caseSensitive:(BOOL)arg3 ;
-(id)initWithStructs:(const TCEnumerationStruct*)arg1 count:(int)arg2 ;
-(long long)valueForString:(id)arg1 ;
-(id)stringForValue:(int)arg1 ;
@end

