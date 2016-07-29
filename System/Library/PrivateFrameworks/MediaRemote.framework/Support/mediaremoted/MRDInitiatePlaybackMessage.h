/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Support/mediaremoted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface MRDInitiatePlaybackMessage : NSObject {

	NSString* _bundleID;
	NSData* _indexPathData;

}

@property (nonatomic,readonly) NSString * bundleID;                 //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,readonly) NSData * indexPathData;              //@synthesize indexPathData=_indexPathData - In the implementation block
-(NSData *)indexPathData;
-(id)initWithBundleID:(id)arg1 indexPathData:(id)arg2 ;
-(void)dealloc;
-(NSString *)bundleID;
@end

