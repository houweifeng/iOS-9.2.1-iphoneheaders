/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableDictionary;

@interface OCPPackageRelationshipCollection : NSObject {

	NSMutableDictionary* mIdentifierMap;
	NSMutableDictionary* mTypeMap;

}
-(void)dealloc;
-(id)relationshipsByType:(id)arg1 ;
-(id)relationshipForIdentifier:(id)arg1 ;
-(id)initWithRelationshipsXml:(xmlDoc*)arg1 baseLocation:(id)arg2 ;
@end

