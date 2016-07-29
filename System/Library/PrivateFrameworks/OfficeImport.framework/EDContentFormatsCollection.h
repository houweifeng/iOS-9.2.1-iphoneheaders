/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/EDKeyedCollection.h>

@interface EDContentFormatsCollection : EDKeyedCollection {

	unsigned long long mNextContentFormatId;

}
-(void)setupDefaults;
-(void)addDefaultWithNSString:(id)arg1 formatId:(unsigned long long)arg2 ;
-(BOOL)isOverwritingKeyOK;
-(id)init;
-(unsigned long long)addObject:(id)arg1 ;
-(unsigned long long)addOrEquivalentObject:(id)arg1 ;
@end

