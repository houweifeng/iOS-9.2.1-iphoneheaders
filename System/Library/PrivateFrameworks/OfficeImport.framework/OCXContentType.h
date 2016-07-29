/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface OCXContentType : NSObject {

	NSString* mContentType;
	NSString* mPath;
	NSString* mExtension;

}

@property (nonatomic,readonly) NSString * contentType; 
@property (nonatomic,readonly) NSString * path; 
-(void)dealloc;
-(NSString *)path;
-(NSString *)contentType;
-(id)initWithContentType:(id)arg1 path:(id)arg2 ;
-(BOOL)isOverride;
-(void)writeToStreamWriter:(id)arg1 ;
-(id)initWithContentType:(id)arg1 extension:(id)arg2 ;
@end

