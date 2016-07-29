/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:22 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPObject.h>

@class TSTIntegerKeyDict, TSTTableDataObjectKeyDict;

@interface TSTTableDataList : TSPObject {

	int mListType;
	unsigned mNextID;
	TSTIntegerKeyDict* mData;
	TSTTableDataObjectKeyDict* mIDs;

}

@property (nonatomic,readonly) unsigned nextID; 
@property (nonatomic,readonly) TSTIntegerKeyDict * data; 
+(id)newObjectForUnarchiver:(id)arg1 ;
-(id)packageLocator;
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)allRichTextPayloadStorages;
-(unsigned long long)flushableSize;
-(id)initWithType:(int)arg1 context:(id)arg2 ;
-(BOOL)supportsIDMapForType:(int)arg1 ;
-(void)p_setupWithType:(int)arg1 nextKeyID:(unsigned)arg2 ;
-(void)enumerateCustomFormatsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned)nextID;
-(void)dealloc;
-(id)description;
-(TSTIntegerKeyDict *)data;
@end

