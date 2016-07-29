/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ApplicationDownloadProgress : NSObject <NSCopying> {

	NSString* _bundleIdentifier;
	long long _completedUnitCount;
	long long _downloadIdentifier;
	long long _totalUnitCount;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) long long downloadIdentifier;              //@synthesize downloadIdentifier=_downloadIdentifier - In the implementation block
@property (assign,nonatomic) long long completedUnitCount;              //@synthesize completedUnitCount=_completedUnitCount - In the implementation block
@property (assign,nonatomic) long long totalUnitCount;                  //@synthesize totalUnitCount=_totalUnitCount - In the implementation block
-(void)setCompletedUnitCount:(long long)arg1 ;
-(void)setTotalUnitCount:(long long)arg1 ;
-(void)setDownloadIdentifier:(long long)arg1 ;
-(NSString *)bundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)totalUnitCount;
-(long long)completedUnitCount;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(long long)downloadIdentifier;
@end

