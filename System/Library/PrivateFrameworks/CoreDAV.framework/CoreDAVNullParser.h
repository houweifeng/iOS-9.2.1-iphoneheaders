/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVResponseBodyParser.h>

@class NSError, NSString;

@interface CoreDAVNullParser : NSObject <CoreDAVResponseBodyParser> {

	NSError* _parserError;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSError * parserError; 
+(BOOL)canHandleContentType:(id)arg1 ;
-(NSError *)parserError;
-(void)dealloc;
-(BOOL)processData:(id)arg1 forTask:(id)arg2 ;
@end

