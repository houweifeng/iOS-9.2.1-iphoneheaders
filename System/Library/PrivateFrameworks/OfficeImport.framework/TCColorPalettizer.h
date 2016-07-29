/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface TCColorPalettizer : NSObject {

	tagOctree* m_pTree;
	BOOL isDefaultPaletteSize;

}
-(int)createOctree:(tagOctree*)arg1 maxPaletteSize:(unsigned short)arg2 ;
-(int)deleteOctree:(tagOctree*)arg1 ;
-(int)addPixelToOctree:(tagOctree*)arg1 pixel:(tagRgbQuad)arg2 ;
-(int)reduceOctree:(tagOctree*)arg1 ;
-(unsigned short)getPaletteFromOctree:(tagOctreeNode*)arg1 paletteEntry:(tagRgbQuad*)arg2 index:(unsigned short)arg3 ;
-(int)rgbToIndexOctree:(tagOctree*)arg1 source:(tagRgbQuad)arg2 destination:(char*)arg3 ;
-(int)createNodeOctree:(tagOctreeNode*)arg1 parent:(tagOctreeNode*)arg2 ;
-(int)deleteNodeOctree:(tagOctreeNode*)arg1 ;
-(int)deleteListOctree:(tagLevelItem*)arg1 ;
-(void)dealloc;
-(BOOL)addQuadColor:(tagRgbQuad)arg1 ;
-(int)paletteIndexFromQuadColor:(tagRgbQuad)arg1 ;
-(id)initWitMaxPaletteSize:(unsigned)arg1 ;
-(id)initWitDefaultPaletteSize;
-(BOOL)addTSUColor:(id)arg1 ;
-(void)createPalette;
-(unsigned)paletteColorCount;
-(id)getPaletteDataRaw;
-(id)getPngPaletteData;
-(id)getPaletteData;
-(int)paletteIndexFromTSUColor:(id)arg1 ;
@end

