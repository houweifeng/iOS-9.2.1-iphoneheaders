/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetTrackInspector.h>

@class AVWeakReference;

@interface AVPlaybackItemTrackInspector : AVAssetTrackInspector {

	OpaqueFigPlaybackItemRef _playbackItem;
	int _trackID;
	unsigned _mediaType;
	AVWeakReference* _weakReferenceToAsset;

}
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)isEnabled;
-(id)asset;
-(CGSize)dimensions;
-(CGSize)naturalSize;
-(OpaqueFigPlaybackItemRef)_playbackItem;
-(id)formatDescriptions;
-(id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3 ;
-(float)estimatedDataRate;
-(SCD_Struct_CM5)samplePresentationTimeForTrackTime:(SCD_Struct_CM5)arg1 ;
-(void*)_valueAsCFTypeForProperty:(CFStringRef)arg1 ;
-(unsigned)_figMediaType;
-(SCD_Struct_CM6)timeRange;
-(CGAffineTransform)preferredTransform;
-(id)mediaType;
-(int)trackID;
-(void)finalize;
@end

