/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class OCPPackageRelationshipCollection, OCPPackageProperties, NSMutableDictionary;

@interface OCPPackage : NSObject {

	OCPPackageRelationshipCollection* mRelationships;
	OCPPackageProperties* mProperties;
	NSMutableDictionary* mDefaultContentTypes;
	NSMutableDictionary* mContentTypeOverrides;

}
-(void)readContentTypesXml:(xmlDoc*)arg1 ;
-(void)readDefaultContentTypeFromElement:(xmlNode*)arg1 ;
-(void)readContentTypeOverrideFromElement:(xmlNode*)arg1 ;
-(id)contentTypeForPartLocation:(id)arg1 ;
-(id)initWithRelationshipsXml:(xmlDoc*)arg1 propertiesXml:(xmlDoc*)arg2 contentTypesXml:(xmlDoc*)arg3 ;
-(void)dealloc;
-(id)init;
-(id)properties;
-(id)partForLocation:(id)arg1 ;
-(void)resetPartForLocation:(id)arg1 ;
-(id)mainDocumentPart;
-(id)relationshipsByType:(id)arg1 ;
-(id)partByRelationshipType:(id)arg1 ;
-(id)relationshipForIdentifier:(id)arg1 ;
@end

