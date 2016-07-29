/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PHAsset, NSData;

@interface PHAssetMomentProperties : NSObject {

	BOOL _reverseLocationDataIsValid;
	PHAsset* _asset;
	NSData* _reverseLocationData;

}

@property (nonatomic,__weak,readonly) PHAsset * asset;                       //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) BOOL reverseLocationDataIsValid;              //@synthesize reverseLocationDataIsValid=_reverseLocationDataIsValid - In the implementation block
@property (nonatomic,readonly) NSData * reverseLocationData;                 //@synthesize reverseLocationData=_reverseLocationData - In the implementation block
-(PHAsset *)asset;
-(BOOL)reverseLocationDataIsValid;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 ;
-(NSData *)reverseLocationData;
@end

