/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OCXReadState.h>

@class OAXClient, OCPPackagePart, OADStyleMatrix, OAXTableStyleCache, NSMutableDictionary, OADBlipCollection, NSMutableArray, OAVReadState, OADColorScheme, OADColorMap, OADFontScheme, CXNamespace;

@interface OAXDrawingState : OCXReadState {

	OAXClient* mClient;
	OCPPackagePart* mPackagePart;
	OADStyleMatrix* mStyleMatrix;
	OAXTableStyleCache* mTableStyleCache;
	NSMutableDictionary* mShapeIdMap;
	NSMutableDictionary* mDrawableIdToVmlShapeIdMap;
	id mDocumentState;
	OADBlipCollection* mTgtBlipCollection;
	NSMutableDictionary* mSrcURLToTgtBlipIndexMap;
	NSMutableArray* mTgtBulletBlips;
	NSMutableDictionary* mSrcURLToTgtBulletBlipIndexMap;
	OAVReadState* mOavState;
	OADColorScheme* mColorScheme;
	OADColorMap* mColorMap;
	OADFontScheme* mFontScheme;
	NSMutableArray* mGroupStack;
	CXNamespace* mOAXMainNamespace;
	CXNamespace* mOAXChartNamespace;
	CXNamespace* mOAXChartDrawingNamespace;
	CXNamespace* mOAXCompatNamespace;
	CXNamespace* mOAXLockedCanvasNamespace;
	CXNamespace* mOAXPictureNamespace;
	CXNamespace* mOAXTableNamespace;
	CXNamespace* mOAXWordProcessingMLNamespace;
	CXNamespace* mOAXDrawing2010Namespace;
	CXNamespace* mOAXChart2012Namespace;
	/*^block*/id _clientChartGraphicPropertyDefaultsBlock;

}

@property (nonatomic,retain) NSMutableDictionary * sourceURLToTargetBlipIndexMap; 
@property (nonatomic,retain) NSMutableDictionary * sourceURLToTargetBulletBlipIndexMap; 
@property (nonatomic,retain) CXNamespace * OAXMainNamespace; 
@property (nonatomic,retain) CXNamespace * OAXChartNamespace; 
@property (nonatomic,retain) CXNamespace * OAXChartDrawingNamespace; 
@property (nonatomic,retain) CXNamespace * OAXCompatNamespace; 
@property (nonatomic,retain) CXNamespace * OAXLockedCanvasNamespace; 
@property (nonatomic,retain) CXNamespace * OAXPictureNamespace; 
@property (nonatomic,retain) CXNamespace * OAXTableNamespace; 
@property (nonatomic,retain) CXNamespace * OAXWordProcessingMLNamespace; 
@property (nonatomic,retain) CXNamespace * OAXDrawing2010Namespace; 
@property (nonatomic,retain) CXNamespace * OAXChart2012Namespace; 
@property (nonatomic,copy) id clientChartGraphicPropertyDefaultsBlock;                               //@synthesize clientChartGraphicPropertyDefaultsBlock=_clientChartGraphicPropertyDefaultsBlock - In the implementation block
-(void)dealloc;
-(id)init;
-(id)documentState;
-(void)setDocumentState:(id)arg1 ;
-(id)colorScheme;
-(void)setColorScheme:(id)arg1 ;
-(id)styleMatrix;
-(BOOL)isInsideGroup;
-(id)colorMap;
-(void)setColorMap:(id)arg1 ;
-(id)fontScheme;
-(CXNamespace *)OAXMainNamespace;
-(void)setupNSForXMLFormat:(int)arg1 ;
-(id)blipRefWithURL:(id)arg1 blipArray:(id)arg2 blipURLtoIndexMap:(id)arg3 ;
-(id)peekGroup;
-(void)setOAXMainNamespace:(CXNamespace *)arg1 ;
-(void)setOAXChartNamespace:(CXNamespace *)arg1 ;
-(void)setOAXChartDrawingNamespace:(CXNamespace *)arg1 ;
-(void)setOAXLockedCanvasNamespace:(CXNamespace *)arg1 ;
-(void)setOAXPictureNamespace:(CXNamespace *)arg1 ;
-(void)setOAXTableNamespace:(CXNamespace *)arg1 ;
-(void)setOAXWordProcessingMLNamespace:(CXNamespace *)arg1 ;
-(void)setOAXCompatNamespace:(CXNamespace *)arg1 ;
-(void)setOAXChart2012Namespace:(CXNamespace *)arg1 ;
-(void)setOAXDrawing2010Namespace:(CXNamespace *)arg1 ;
-(id)initWithClient:(id)arg1 ;
-(id)client;
-(id)packagePart;
-(void)setPackagePart:(id)arg1 ;
-(void)setStyleMatrix:(id)arg1 ;
-(id)tableStyleCache;
-(void)setTableStyleCache:(id)arg1 ;
-(id)drawableForShapeId:(unsigned)arg1 ;
-(void)setDrawable:(id)arg1 forShapeId:(unsigned)arg2 ;
-(id)vmlShapeIdForDrawableId:(unsigned)arg1 ;
-(void)setVmlShapeId:(id)arg1 forDrawableId:(unsigned)arg2 ;
-(void)resetForNewDrawing;
-(id)oavState;
-(void)setOavState:(id)arg1 ;
-(void)setFontScheme:(id)arg1 ;
-(id)targetBlipCollection;
-(void)clearTargetBlipCollection;
-(void)setTargetBlipCollection:(id)arg1 ;
-(void)setTargetBulletBlipArray:(id)arg1 ;
-(id)blipRefForURL:(id)arg1 ;
-(id)bulletBlipRefForURL:(id)arg1 ;
-(void)pushGroup:(id)arg1 ;
-(id)popGroup;
-(void)replaceGroupStack:(id)arg1 ;
-(CXNamespace *)OAXChartNamespace;
-(CXNamespace *)OAXChartDrawingNamespace;
-(CXNamespace *)OAXCompatNamespace;
-(CXNamespace *)OAXLockedCanvasNamespace;
-(CXNamespace *)OAXPictureNamespace;
-(CXNamespace *)OAXTableNamespace;
-(CXNamespace *)OAXWordProcessingMLNamespace;
-(CXNamespace *)OAXDrawing2010Namespace;
-(CXNamespace *)OAXChart2012Namespace;
-(NSMutableDictionary *)sourceURLToTargetBlipIndexMap;
-(void)setSourceURLToTargetBlipIndexMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)sourceURLToTargetBulletBlipIndexMap;
-(void)setSourceURLToTargetBulletBlipIndexMap:(NSMutableDictionary *)arg1 ;
-(id)clientChartGraphicPropertyDefaultsBlock;
-(void)setClientChartGraphicPropertyDefaultsBlock:(id)arg1 ;
@end

