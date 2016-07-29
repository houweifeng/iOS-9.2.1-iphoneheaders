/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:58 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/SFUDataRepresentation.h>
#import <libobjc.A.dylib/SFUZipArchiveDataRepresentation.h>

@class SFUFileDataRepresentation, NSString;

@interface SFUZipArchiveFileDataRepresentation : SFUDataRepresentation <SFUZipArchiveDataRepresentation> {

	SFUFileDataRepresentation* mFileRepresentation;
	int mFd;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)path;
-(id)initWithPath:(id)arg1 ;
-(long long)dataLength;
-(id)inputStream;
-(BOOL)isReadable;
-(BOOL)hasSameLocationAs:(id)arg1 ;
-(id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2 ;
-(BOOL)isEncrypted;
-(id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2 ;
@end

