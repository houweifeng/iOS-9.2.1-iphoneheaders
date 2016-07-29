/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PrintKit/PrintKit-Structs.h>
@class NSArray;

@interface PKPaperList : NSObject {

	BOOL _hasMediaReady;
	NSArray* _papers;
	NSArray* _simplexPapers;
	NSArray* _duplexPapers;
	NSArray* _photoPapers;
	NSArray* _rolls;

}

@property (assign) BOOL hasMediaReady;                     //@synthesize hasMediaReady=_hasMediaReady - In the implementation block
@property (retain) NSArray * papers;                       //@synthesize papers=_papers - In the implementation block
@property (retain) NSArray * simplexPapers;                //@synthesize simplexPapers=_simplexPapers - In the implementation block
@property (retain) NSArray * duplexPapers;                 //@synthesize duplexPapers=_duplexPapers - In the implementation block
@property (retain) NSArray * photoPapers;                  //@synthesize photoPapers=_photoPapers - In the implementation block
@property (nonatomic,retain) NSArray * rolls;              //@synthesize rolls=_rolls - In the implementation block
+(id)paperListWithAttrs:(ipp_s*)arg1 ;
+(id)paperListWithTXTRecord:(id)arg1 ;
+(id)mediaDictFromAttrs:(ipp_s*)arg1 ;
-(void)dealloc;
-(id)papersForPhotoWithSize:(CGSize)arg1 ;
-(id)papersForDocumentWithSize:(CGSize)arg1 scaleUpOnRoll:(BOOL)arg2 andDuplex:(BOOL)arg3 ;
-(NSArray *)photoPapers;
-(id)availableRollPapersPreferBorderless:(BOOL)arg1 ;
-(BOOL)isPaperReady:(id)arg1 ;
-(id)matchedPaper:(id)arg1 preferBorderless:(BOOL)arg2 withDuplexMode:(id)arg3 didMatch:(BOOL*)arg4 ;
-(BOOL)hasMediaReady;
-(id)rollReadyPaperListForPhotoWithContentSize:(CGSize)arg1 ;
-(id)rollReadyPaperListWithContentSize:(CGSize)arg1 forPhoto:(BOOL)arg2 ;
-(id)paperListForDuplexMode:(id)arg1 ;
-(id)initWithAttrs:(ipp_s*)arg1 ;
-(void)setHasMediaReady:(BOOL)arg1 ;
-(void)setPapers:(NSArray *)arg1 ;
-(void)setRolls:(NSArray *)arg1 ;
-(NSArray *)papers;
-(void)categorizePapers:(id)arg1 ;
-(id)initWithTXTRecord:(id)arg1 ;
-(id)conjureMediaFromTXT:(id)arg1 ;
-(BOOL)hasMatchingLoadedRoll:(id)arg1 ;
-(NSArray *)simplexPapers;
-(id)matchPaper:(id)arg1 inList:(id)arg2 ;
-(NSArray *)duplexPapers;
-(id)adjustMargins:(id)arg1 forDuplex:(id)arg2 ;
-(NSArray *)rolls;
-(id)rollReadyPaperListForDocumentWithContentSize:(CGSize)arg1 scaleUp:(BOOL)arg2 ;
-(id)tersePaperFrom:(id)arg1 withRequest:(id)arg2 ;
-(id)tersePaperFrom:(id)arg1 withMediaInfo:(id)arg2 ;
-(void)addPaperSet:(id*)arg1 withCount:(int)arg2 toArrays:(id*)arg3 ;
-(void)setSimplexPapers:(NSArray *)arg1 ;
-(void)setDuplexPapers:(NSArray *)arg1 ;
-(void)setPhotoPapers:(NSArray *)arg1 ;
-(id)filterUsingBlock:(/*^block*/id)arg1 ;
-(id)filterPapers:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(long long)jobTypesSupported:(id)arg1 ;
-(id)matchPaper:(id)arg1 ;
@end

