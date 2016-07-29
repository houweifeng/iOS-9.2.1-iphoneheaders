/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:15 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSCoder.h>

@class NSMutableData;

@interface NSArchiver : NSCoder {

	void* mdata;
	void* pointerTable;
	void* stringTable;
	void* ids;
	void* map;
	void* replacementTable;
	void* reserved;

}

@property (retain,readonly) NSMutableData * archiverData; 
+(void)encodeClassName:(id)arg1 intoClassName:(id)arg2 ;
+(id)classNameEncodedForTrueClassName:(id)arg1 ;
+(BOOL)archiveRootObject:(id)arg1 toFile:(id)arg2 ;
+(void)initialize;
+(id)archivedDataWithRootObject:(id)arg1 ;
-(void)encodeArrayOfObjCType:(const char*)arg1 count:(unsigned long long)arg2 at:(const void*)arg3 ;
-(void)encodeClassName:(id)arg1 intoClassName:(id)arg2 ;
-(void)encodeRootObject:(id)arg1 ;
-(id)classNameEncodedForTrueClassName:(id)arg1 ;
-(NSMutableData *)archiverData;
-(void)encodeBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)encodeDataObject:(id)arg1 ;
-(void)dealloc;
-(id)initForWritingWithMutableData:(id)arg1 ;
-(id)data;
-(void)replaceObject:(id)arg1 withObject:(id)arg2 ;
-(long long)versionForClassName:(id)arg1 ;
-(void)encodeConditionalObject:(id)arg1 ;
-(void)encodeObject:(id)arg1 ;
-(void)encodeValueOfObjCType:(const char*)arg1 at:(const void*)arg2 ;
-(void)encodeValuesOfObjCTypes:(const char*)arg1 ;
-(void)finalize;
@end

