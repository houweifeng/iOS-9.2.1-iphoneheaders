/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuickLook/QuickLook-Structs.h>
@class QLZipArchive, NSData, NSError, NSURL;

@interface QLZipArchiveEntry : NSObject {

	archive_entryRef _entry;
	QLZipArchive* _archive;
	NSData* _data;
	NSError* _error;
	NSURL* _url;

}

@property (assign,nonatomic) NSURL * url;               //@synthesize url=_url - In the implementation block
@property (assign) archive_entryRef entry;              //@synthesize entry=_entry - In the implementation block
@property (assign) QLZipArchive * archive;              //@synthesize archive=_archive - In the implementation block
@property (assign) NSData * data;                       //@synthesize data=_data - In the implementation block
-(void)setArchive:(QLZipArchive *)arg1 ;
-(void)dealloc;
-(NSURL *)url;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(archive_entryRef)entry;
-(id)readDataWithError:(id*)arg1 ;
-(void)setEntry:(archive_entryRef)arg1 ;
-(QLZipArchive *)archive;
@end

