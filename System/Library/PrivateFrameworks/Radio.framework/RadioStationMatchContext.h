/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RadioStationMatchMetadata;

@interface RadioStationMatchContext : NSObject {

	BOOL _shouldMatchArtist;
	RadioStationMatchMetadata* _matchMetadata;

}

@property (nonatomic,retain) RadioStationMatchMetadata * matchMetadata;              //@synthesize matchMetadata=_matchMetadata - In the implementation block
@property (assign,nonatomic) BOOL shouldMatchArtist;                                 //@synthesize shouldMatchArtist=_shouldMatchArtist - In the implementation block
-(id)copyMatchDictionary;
-(BOOL)shouldMatchArtist;
-(RadioStationMatchMetadata *)matchMetadata;
-(void)setMatchMetadata:(RadioStationMatchMetadata *)arg1 ;
-(void)setShouldMatchArtist:(BOOL)arg1 ;
@end

