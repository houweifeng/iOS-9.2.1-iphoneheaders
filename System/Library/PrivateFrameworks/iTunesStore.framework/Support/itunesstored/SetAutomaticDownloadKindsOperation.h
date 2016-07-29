/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSAuthenticationContext, NSString, NSSet;

@interface SetAutomaticDownloadKindsOperation : ISOperation {

	SSAuthenticationContext* _authenticationContext;
	NSString* _clientIdentifierHeader;
	NSSet* _downloadKinds;
	NSSet* _previousDownloadKinds;
	BOOL _runsOnlyIfKindsAreDirty;
	BOOL _shouldSuppressServerDialogs;

}

@property (readonly) NSSet * downloadKinds; 
@property (copy) SSAuthenticationContext * authenticationContext; 
@property (copy) NSString * clientIdentifierHeader; 
@property (copy) NSSet * previousDownloadKinds; 
@property (assign) BOOL runsOnlyIfKindsAreDirty; 
@property (assign) BOOL shouldSuppressServerDialogs; 
-(BOOL)runsOnlyIfKindsAreDirty;
-(BOOL)_isFatalError:(id)arg1 ;
-(BOOL)shouldSuppressServerDialogs;
-(id)_copyFilteredDownloadKinds;
-(BOOL)_postDownloadKinds:(id)arg1 error:(id*)arg2 ;
-(NSSet *)previousDownloadKinds;
-(void)setPreviousDownloadKinds:(NSSet *)arg1 ;
-(void)setRunsOnlyIfKindsAreDirty:(BOOL)arg1 ;
-(void)setShouldSuppressServerDialogs:(BOOL)arg1 ;
-(id)initWithDownloadKinds:(id)arg1 ;
-(NSString *)clientIdentifierHeader;
-(void)setClientIdentifierHeader:(NSString *)arg1 ;
-(void)dealloc;
-(void)_run;
-(void)run;
-(BOOL)shouldFailAfterUniquePredecessorError:(id)arg1 ;
-(id)uniqueKey;
-(SSAuthenticationContext *)authenticationContext;
-(NSSet *)downloadKinds;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
@end

