/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:48 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunescloudd/CloudArtworkImporter.h>

@interface SagaArtworkImporter : CloudArtworkImporter
-(void)_importOriginalItemArtwork;
-(void)importAllItemArtwork;
-(void)_importOriginalContainerArtwork;
-(id)init;
-(void)importItemArtworkForSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)importContainerArtworkForSagaID:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

