/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:46 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSharing/HomeSharing-Structs.h>
#import <HomeSharing/HSRequest.h>

@interface HSArtworkRequest : HSRequest
+(id)requestWithDatabaseID:(unsigned)arg1 itemID:(unsigned long long)arg2 size:(CGSize)arg3 ;
-(BOOL)isConcurrent;
-(id)initWithDatabaseID:(unsigned)arg1 itemID:(unsigned long long)arg2 size:(CGSize)arg3 ;
-(BOOL)acceptsGzipEncoding;
@end

