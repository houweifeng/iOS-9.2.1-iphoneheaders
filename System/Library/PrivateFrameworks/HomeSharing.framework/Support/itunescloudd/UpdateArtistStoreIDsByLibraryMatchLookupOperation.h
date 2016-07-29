/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/QueueAwareOperation.h>

@class NSURL;

@interface UpdateArtistStoreIDsByLibraryMatchLookupOperation : QueueAwareOperation {

	NSURL* _artistNameLibraryMatchURL;

}

@property (nonatomic,retain) NSURL * artistNameLibraryMatchURL;              //@synthesize artistNameLibraryMatchURL=_artistNameLibraryMatchURL - In the implementation block
-(void)setArtistNameLibraryMatchURL:(NSURL *)arg1 ;
-(NSURL *)artistNameLibraryMatchURL;
-(void)_addSpecificArtistNamesToLookupToSet:(id)arg1 ;
-(void)_addAllArtistNamesToLookupToSet:(id)arg1 ;
-(void)main;
@end

