/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:37 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/SKUICacheCoding.h>

@class NSMutableArray, NSArray, SKUIArtwork, NSString, NSMutableDictionary;

@interface SKUIArtworkList : NSObject <NSCopying, SKUICacheCoding> {

	NSMutableArray* _artworks;

}

@property (nonatomic,copy) NSArray * artworks;                                          //@synthesize artworks=_artworks - In the implementation block
@property (nonatomic,readonly) SKUIArtwork * largestArtwork; 
@property (nonatomic,readonly) SKUIArtwork * smallestArtwork; 
@property (getter=_lookupArray,nonatomic,readonly) NSArray * _lookupArray; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setArtworks:(NSArray *)arg1 ;
-(NSArray *)artworks;
-(id)artworkForSize:(long long)arg1 ;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(NSMutableDictionary *)cacheRepresentation;
-(id)artworkURLForSize:(long long)arg1 ;
-(id)initWithLookupArray:(id)arg1 ;
-(SKUIArtwork *)largestArtwork;
-(NSArray *)_lookupArray;
-(id)initWithArtworkListArray:(id)arg1 ;
-(id)bestArtworkForSize:(CGSize)arg1 ;
-(id)artworkWithWidth:(long long)arg1 ;
-(id)bestArtworkForScaledSize:(CGSize)arg1 ;
-(SKUIArtwork *)smallestArtwork;
@end
