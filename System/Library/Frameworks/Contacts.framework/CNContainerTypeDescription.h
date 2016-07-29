/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNContainerPropertyDescription.h>

@interface CNContainerTypeDescription : CNContainerPropertyDescription
-(int)abPropertyID;
-(void*)ABValueFromCNValue:(id)arg1 ;
-(id)CNValueFromABValue:(void*)arg1 ;
-(BOOL)isConvertibleABValue:(void*)arg1 ;
-(BOOL)setABValue:(void*)arg1 onABSource:(void*)arg2 error:(_CFError*)arg3 ;
-(id)key;
-(Class)valueClass;
-(BOOL)isValidValue:(id)arg1 error:(id*)arg2 ;
-(id)CNValueForContainer:(id)arg1 ;
-(void)setCNValue:(id)arg1 onContainer:(id)arg2 ;
-(BOOL)isWritable;
@end
