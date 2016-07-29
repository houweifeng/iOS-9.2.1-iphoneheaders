/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AVItemAccessLogInternal, NSArray;

@interface AVItemAccessLog : NSObject <NSCopying> {

	AVItemAccessLogInternal* _playerItemAccessLog;

}

@property (nonatomic,readonly) NSArray * events; 
-(void)dealloc;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithLogArray:(id)arg1 ;
-(id)extendedLogData;
-(unsigned long long)extendedLogDataStringEncoding;
-(NSArray *)events;
-(void)finalize;
@end
