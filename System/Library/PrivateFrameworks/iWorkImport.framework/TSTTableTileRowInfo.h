/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPContainedObject.h>

@interface TSTTableTileRowInfo : TSPContainedObject {

	CFDataRef mStorageBuffer;
	unsigned short mStorageOffsets[255];
	unsigned short mBufferSize;
	unsigned short mTileRowIndex;
	unsigned short mCellCount;
	unsigned char mMaxTileColumnIndex;
	BOOL mMaxTileColumnIndexValid;
	unsigned char mStorageVersion;

}

@property (assign,nonatomic) unsigned short tileRowIndex; 
@property (nonatomic,readonly) unsigned short cellCount; 
-(void)i_upgradeWithDataStore:(id)arg1 ;
-(void)saveToArchive:(TileRowInfo*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const TileRowInfo*)arg1 owner:(id)arg2 ;
-(id)initWithOwner:(id)arg1 tileRowIndex:(unsigned short)arg2 ;
-(id)p_debugDumpCompact;
-(void)enumerateStoragesInColumnRange:(NSRange)arg1 withBlock:(/*^block*/id)arg2 ;
-(unsigned short)tileRowIndex;
-(void)setTileRowIndex:(unsigned short)arg1 ;
-(void)debugDump;
-(void)dealloc;
-(id)description;
-(void)validate;
-(unsigned short)cellCount;
@end

