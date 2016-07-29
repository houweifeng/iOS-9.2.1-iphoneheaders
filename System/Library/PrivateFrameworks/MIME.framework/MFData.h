/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:05 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MIME-Structs.h>
#import <CoreFoundation/NSData.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSData, NSString;

@interface MFData : NSData <NSCopying, NSMutableCopying> {

	NSData* _internal;
	NSString* _path;
	NSData* _parent;
	BOOL _subdata;

}
+(void)setDefaultMappingThresholdInBytes:(unsigned long long)arg1 ;
-(id)initWithContentsOfMappedFile:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(unsigned long long)length;
-(BOOL)writeToFile:(id)arg1 atomically:(BOOL)arg2 ;
-(BOOL)writeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)writeToURL:(id)arg1 atomically:(BOOL)arg2 ;
-(const void*)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)data;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(BOOL)writeToFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)_initWithRange:(NSRange)arg1 from:(id)arg2 retainingParent:(BOOL)arg3 ;
-(BOOL)mf_immutable;
-(id)_initWithData:(id)arg1 maybeMutable:(BOOL)arg2 ;
-(id)_initWithFile:(id)arg1 ;
-(id)initWithImmutableData:(id)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 freeWhenDone:(BOOL)arg3 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)subdataWithRange:(NSRange)arg1 ;
@end

