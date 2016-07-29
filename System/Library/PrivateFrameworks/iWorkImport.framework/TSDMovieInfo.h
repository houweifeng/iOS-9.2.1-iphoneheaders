/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDMediaInfo.h>
#import <iWorkImport/TSDMixing.h>

@class TSPData, NSURL, TSDMediaStyle;

@interface TSDMovieInfo : TSDMediaInfo <TSDMixing> {

	TSPData* mMovieData;
	NSURL* mMovieRemoteURL;
	TSPData* mImportedAuxiliaryMovieData;
	TSPData* mAudioOnlyImageData;
	double mStartTime;
	double mEndTime;
	double mPosterTime;
	TSPData* mPosterImageData;
	BOOL mPosterImageGeneratedWithAlphaSupport;
	CGSize mNaturalSize;
	unsigned long long mLoopOption;
	float mVolume;
	BOOL mAudioOnly;
	BOOL mStreaming;
	TSDMediaStyle* mStyle;

}

@property (nonatomic,retain) TSPData * movieData; 
@property (nonatomic,retain) NSURL * movieRemoteURL; 
@property (nonatomic,retain) TSPData * importedAuxiliaryMovieData; 
@property (nonatomic,retain) TSPData * audioOnlyImageData; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double endTime; 
@property (assign,nonatomic) double posterTime; 
@property (nonatomic,retain) TSPData * posterImageData; 
@property (assign,nonatomic) unsigned long long loopOption; 
@property (assign,nonatomic) float volume; 
@property (assign,getter=isAudioOnly,nonatomic) BOOL audioOnly; 
@property (assign,getter=isStreaming,nonatomic) BOOL streaming; 
+(id)presetKinds;
+(double)defaultPosterTimeForDuration:(double)arg1 ;
-(BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1 ;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(MovieArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const MovieArchive*)arg1 unarchiver:(id)arg2 ;
-(id)subclassInitFromUnarchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(id)presetKind;
-(int)intValueForProperty:(int)arg1 ;
-(Class)styleClass;
-(BOOL)containsProperty:(int)arg1 ;
-(float)floatValueForProperty:(int)arg1 ;
-(Class)repClass;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(id)animationFilters;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 ;
-(id)localizedChunkNameForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2 chunkIndex:(unsigned long long)arg3 ;
-(BOOL)supportsHyperlinks;
-(BOOL)supportsAttachedComments;
-(BOOL)canChangeWrapType;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 ;
-(id)styleIdentifierTemplateForNewPreset;
-(id)mediaDisplayName;
-(CGSize)rawDataSize;
-(void)p_setPropertiesFromLoadedAsset:(id)arg1 ;
-(TSPData *)movieData;
-(NSURL *)movieRemoteURL;
-(id)makeAVAssetWithOptions:(id)arg1 ;
-(id)makeAVAsset;
-(id)makePosterImageGeneratorWithAVAsset:(id)arg1 ;
-(id)generateEmptyPosterImageForContext:(id)arg1 ;
-(TSPData *)posterImageData;
-(double)doubleValueForProperty:(int)arg1 ;
-(unsigned long long)loopOption;
-(void)setMovieData:(TSPData *)arg1 ;
-(void)setMovieRemoteURL:(NSURL *)arg1 ;
-(TSPData *)importedAuxiliaryMovieData;
-(void)setImportedAuxiliaryMovieData:(TSPData *)arg1 ;
-(TSPData *)audioOnlyImageData;
-(void)setAudioOnlyImageData:(TSPData *)arg1 ;
-(void)setPosterTime:(double)arg1 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 movieData:(id)arg4 loadedAsset:(id)arg5 ;
-(id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 movieRemoteURL:(id)arg4 loadedAsset:(id)arg5 ;
-(void)setPosterImageData:(TSPData *)arg1 ;
-(void)setLoopOption:(unsigned long long)arg1 ;
-(id)synchronouslyGenerateDefaultPosterImageForContext:(id)arg1 ;
-(double)posterTime;
-(void)dealloc;
-(id)objectForProperty:(int)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(id)style;
-(void)setStyle:(id)arg1 ;
-(double)startTime;
-(BOOL)isStreaming;
-(id)mediaFileType;
-(double)endTime;
-(void)setEndTime:(double)arg1 ;
-(void)setAudioOnly:(BOOL)arg1 ;
-(Class)layoutClass;
-(void)setVolume:(float)arg1 ;
-(void)setStreaming:(BOOL)arg1 ;
-(void)acceptVisitor:(id)arg1 ;
-(BOOL)isAudioOnly;
-(float)volume;
@end

