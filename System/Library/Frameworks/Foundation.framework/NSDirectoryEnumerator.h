/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSDictionary;

@interface NSDirectoryEnumerator : NSEnumerator

@property (copy,readonly) NSDictionary * fileAttributes; 
@property (copy,readonly) NSDictionary * directoryAttributes; 
@property (readonly) unsigned long long level; 
-(void)skipDescendents;
-(id)nextObject;
-(unsigned long long)level;
-(void)skipDescendants;
-(NSDictionary *)directoryAttributes;
-(NSDictionary *)fileAttributes;
@end

