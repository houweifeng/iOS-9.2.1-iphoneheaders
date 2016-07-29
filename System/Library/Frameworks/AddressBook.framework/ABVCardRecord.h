/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AddressBook/AddressBook-Structs.h>
@interface ABVCardRecord : NSObject {

	void* _record;
	CFArrayRef _properties;

}
+(BOOL)includeREVInVCards;
+(BOOL)includeNotesInVCards;
+(BOOL)includeImageURIInVCards;
+(BOOL)includeABClipRectInVCardPhotos;
+(BOOL)privateVCardEnabled;
+(void)setPrivateVCardEnabled:(BOOL)arg1 ;
+(void)setVCardField:(id)arg1 isPrivate:(BOOL)arg2 ;
+(void)clearPrivateFields;
+(BOOL)vcardFieldisPrivate:(id)arg1 ;
+(void)setIncludeNotesInVCards:(BOOL)arg1 ;
+(void)setIncludeREVInVCards:(BOOL)arg1 ;
+(void)setIncludePhotosInVCards:(BOOL)arg1 ;
+(BOOL)includePhotosInVCards;
+(CFArrayRef)supportedProperties;
-(void)dealloc;
-(id)init;
-(void*)valueForProperty:(unsigned)arg1 ;
-(id)_21vCardRepresentationAsData;
-(id)_copyVCardRepresentationAsStringIncludeExternalProperties:(BOOL)arg1 withPhoto:(id)arg2 extraPhotoParameters:(id)arg3 includePrivateData:(BOOL)arg4 ;
-(BOOL)useThumbnailImageFormatIfAvailable;
-(id)_copyGroupVCardRepresentationAsStringIncludeExternalProperties:(BOOL)arg1 ;
-(id)newISO8061StringFromDate:(id)arg1 ;
-(id)stringForAlternateBirthdayComponent:(id)arg1 key:(id)arg2 format:(id)arg3 ;
-(void*)copyValueForProperty:(unsigned)arg1 ;
-(BOOL)_showField:(unsigned)arg1 identifier:(int)arg2 ;
-(CFStringRef)_vCardKeyForGenericLabel:(id)arg1 ;
-(void)appendLabel:(id)arg1 toVCardRep:(id)arg2 inGroup:(id)arg3 ;
-(id)encodedDataForValue:(id)arg1 charsetName:(id*)arg2 ;
-(id)encodedLineForValue:(id)arg1 ;
-(id)propertyLineForIMHandles:(id)arg1 labels:(id)arg2 vCardProperty:(id)arg3 ;
-(id)_valueForPersonSounds:(void*)arg1 identifier:(int)arg2 ;
-(void)_addPersonSounds:(void*)arg1 identifier:(int)arg2 toActivityAlerts:(id*)arg3 activity:(id)arg4 alert:(id)arg5 ;
-(id)_dictionaryForActivityAlerts;
-(id)_typeParameterForToneType:(id)arg1 ;
-(id)_fullNameIncludingAuxiliaryElements:(BOOL)arg1 ;
-(BOOL)_isCompany;
-(id)_realCompositeName;
-(CFStringRef)_vCardKeyForEmailLabel:(id)arg1 ;
-(id)_vCardKeysForPhoneLabel:(id)arg1 ;
-(id)_vCardKeyForAddressLabel:(id)arg1 vCard3:(BOOL)arg2 ;
-(id)propertyLineForGenericABProperty21:(unsigned)arg1 vCardProperty:(id)arg2 ;
-(BOOL)_showField:(unsigned)arg1 ;
-(id)ISO8061StringFromDate:(id)arg1 ;
-(id)dataForInstantMessageProperties;
-(id)dataForSocialProfileProperty:(void*)arg1 groupCount:(long long*)arg2 ;
-(id)ISO8061StringFromDateTime:(id)arg1 ;
-(id)stringFromAlternateBirthday:(id)arg1 ;
-(BOOL)_usesArrayForExternalPropKey:(id)arg1 ;
-(id)_prodID;
-(id)propertyLineForGenericABProperty:(unsigned)arg1 vCardProperty:(id)arg2 is21:(BOOL)arg3 groupCount:(long long*)arg4 ;
-(id)propertyLineForInstantMessageHandles:(BOOL)arg1 groupCount:(long long*)arg2 ;
-(id)propertyLineForIMPPProperty:(BOOL)arg1 groupCount:(long long*)arg2 ;
-(void)_appendPropValue:(id)arg1 forExternalPropKey:(id)arg2 toOutString:(id)arg3 usingDelimiter:(id)arg4 ;
-(id)dataForSoundProperty:(void*)arg1 ;
-(id)initWithRecord:(void*)arg1 ;
-(id)vCardRepresentationForMode:(int)arg1 ;
-(id)alternateName;
-(id)_fullName;
-(BOOL)setValue:(void*)arg1 forProperty:(unsigned)arg2 ;
-(id)imageData;
-(void*)record;
-(id)initWithVCardRepresentation:(id)arg1 ;
@end

