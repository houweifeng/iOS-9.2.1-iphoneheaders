/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/FileProvider.framework/Modules/FileProviderModule.bundle/FileProviderModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsFileProvider/FPModule.h>

@class NSString;

@interface FPFileProviderModule : NSObject <FPModule>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)containerPrefixURL;
-(void)FPBookmarkableStringFromDocumentURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)FPDocumentURLFromBookmarkableString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)FPExtendBookmarkForDocumentURL:(id)arg1 forBundleID:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

