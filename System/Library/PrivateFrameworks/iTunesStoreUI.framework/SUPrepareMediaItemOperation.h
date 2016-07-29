/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SUMediaPlayerItem;

@interface SUPrepareMediaItemOperation : ISOperation {

	SUMediaPlayerItem* _mediaItem;

}

@property (nonatomic,copy,readonly) SUMediaPlayerItem * mediaPlayerItem;              //@synthesize mediaItem=_mediaItem - In the implementation block
-(void)dealloc;
-(id)init;
-(void)run;
-(id)initWithMediaPlayerItem:(id)arg1 ;
-(SUMediaPlayerItem *)mediaPlayerItem;
-(BOOL)_runHEADRequest:(id*)arg1 ;
@end

