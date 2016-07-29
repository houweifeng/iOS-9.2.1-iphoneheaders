/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKit/StoreKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSURL, NSError;

@interface SKDownloadChangeset : NSObject <NSCopying> {

	NSNumber* _contentLength;
	NSURL* _contentURL;
	NSNumber* _downloadID;
	NSNumber* _downloadState;
	NSError* _error;
	NSNumber* _progress;
	NSNumber* _timeRemaining;

}

@property (nonatomic,copy) NSNumber * contentLength;              //@synthesize contentLength=_contentLength - In the implementation block
@property (nonatomic,copy) NSURL * contentURL;                    //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,copy) NSNumber * downloadID;                 //@synthesize downloadID=_downloadID - In the implementation block
@property (nonatomic,copy) NSNumber * downloadState;              //@synthesize downloadState=_downloadState - In the implementation block
@property (nonatomic,copy) NSError * error;                       //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) NSNumber * progress;                   //@synthesize progress=_progress - In the implementation block
@property (nonatomic,copy) NSNumber * timeRemaining;              //@synthesize timeRemaining=_timeRemaining - In the implementation block
+(id)changesetWithDownloadID:(id)arg1 state:(long long)arg2 ;
-(NSNumber *)downloadID;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setProgress:(NSNumber *)arg1 ;
-(NSNumber *)progress;
-(void)setContentLength:(NSNumber *)arg1 ;
-(NSNumber *)contentLength;
-(NSNumber *)timeRemaining;
-(void)setTimeRemaining:(NSNumber *)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSNumber *)downloadState;
-(void)setDownloadState:(NSNumber *)arg1 ;
-(NSURL *)contentURL;
-(void)setContentURL:(NSURL *)arg1 ;
-(NSError *)error;
-(void)setDownloadID:(NSNumber *)arg1 ;
-(void)setError:(NSError *)arg1 ;
@end

