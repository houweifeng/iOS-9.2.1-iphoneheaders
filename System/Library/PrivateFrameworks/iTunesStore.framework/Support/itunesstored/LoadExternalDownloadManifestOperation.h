/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class NSOrderedSet, ExternalDownloadManifest, NSURLRequest, SSDownloadManifestResponse;

@interface LoadExternalDownloadManifestOperation : ISOperation {

	NSOrderedSet* _downloadIDs;
	ExternalDownloadManifest* _manifest;
	long long _manifestFormat;
	BOOL _shouldHideUserPrompts;
	NSURLRequest* _urlRequest;

}

@property (assign) long long manifestFormat; 
@property (assign) BOOL shouldHideUserPrompts; 
@property (copy) NSURLRequest * URLRequest; 
@property (readonly) ExternalDownloadManifest * manifest; 
@property (readonly) SSDownloadManifestResponse * manifestResponse; 
-(SSDownloadManifestResponse *)manifestResponse;
-(BOOL)_runForPurchaseFormatWithURLRequest:(id)arg1 error:(id*)arg2 ;
-(BOOL)_runForPublicFormatWithURLRequest:(id)arg1 error:(id*)arg2 ;
-(void)_processValidDownloads:(id)arg1 ;
-(void)_showDialogForError:(id)arg1 ;
-(BOOL)_showConfirmationPromptForManifest:(id)arg1 response:(id)arg2 ;
-(BOOL)_handlePublicResponseForOperation:(id)arg1 error:(id*)arg2 ;
-(void)setShouldHideUserPrompts:(BOOL)arg1 ;
-(BOOL)shouldHideUserPrompts;
-(long long)manifestFormat;
-(void)dealloc;
-(void)run;
-(id)initWithRequest:(id)arg1 ;
-(void)setURLRequest:(NSURLRequest *)arg1 ;
-(void)setManifestFormat:(long long)arg1 ;
-(NSURLRequest *)URLRequest;
-(ExternalDownloadManifest *)manifest;
@end

