/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OCMapper.h>

@class NSURL, NSData, OCDReader, TCImportTracing, OITSUProgressContext, NSString;

@interface OCImporter : OCMapper {

	NSURL* mURL;
	NSData* mData;
	OCDReader* mReader;
	TCImportTracing* mTracing;
	BOOL mTryAlternateReader;
	OITSUProgressContext* mProgressContext;
	NSString* _docPassphrase;

}

@property (nonatomic,readonly) TCImportTracing * tracing; 
@property (retain) OITSUProgressContext * progressContext; 
@property (nonatomic,retain) NSString * docPassphrase;                  //@synthesize docPassphrase=_docPassphrase - In the implementation block
+(void)initialize;
-(BOOL)start;
-(BOOL)isXML;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)setURL:(id)arg1 ;
-(id)displayName;
-(BOOL)setPassphrase:(id)arg1 ;
-(void)setProgressContext:(OITSUProgressContext *)arg1 ;
-(OITSUProgressContext *)progressContext;
-(BOOL)isDocumentEncryptedUnsupportedVersionHelper:(BOOL*)arg1 errorMessage:(id*)arg2 readError:(BOOL*)arg3 ;
-(void)setDocPassphrase:(NSString *)arg1 ;
-(BOOL)tryAlternateReader;
-(BOOL)isDocumentEncryptedUnsupportedVersion:(BOOL*)arg1 errorMessage:(id*)arg2 ;
-(id)filename;
-(void)finalizeWithDocumentState:(id)arg1 ;
-(TCImportTracing *)tracing;
-(NSString *)docPassphrase;
@end

