/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class OISFUZipEntry;

@interface TCBundleResourcePackageEntry : NSObject {

	OISFUZipEntry* mZipEntry;
	xmlDoc* mXmlDocument;

}
-(void)dealloc;
-(id)data;
-(xmlDoc*)xmlDocument;
-(id)initWithZipEntry:(id)arg1 ;
@end

