/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableDictionary;

@interface TCBundleResourceManager : NSObject {

	NSMutableDictionary* mPackageMap;

}
+(id)instance;
+(void)disposeInstance;
-(id)packageWithName:(id)arg1 cacheResult:(BOOL)arg2 ;
-(void)dealloc;
-(id)init;
-(id)dataForResource:(id)arg1 ofType:(id)arg2 inPackage:(id)arg3 cacheResult:(BOOL)arg4 ;
-(xmlDoc*)xmlDocumentForResource:(id)arg1 ofType:(id)arg2 inPackage:(id)arg3 cacheResult:(BOOL)arg4 ;
@end

