/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface OISFUZipOutputEntry : NSObject {

	NSString* name;
	unsigned long long utf8NameLength;
	BOOL isCompressed;
	BOOL isEncrypted;
	unsigned time;
	unsigned long long compressedSize;
	unsigned long long uncompressedSize;
	unsigned long long offset;
	unsigned long long compressedDataOffset;
	unsigned crc;
	BOOL isWrittenDirectlyToFile;
	BOOL is64Bit;

}
-(void)dealloc;
-(id)description;
-(long long)compareByOffset:(id)arg1 ;
@end

