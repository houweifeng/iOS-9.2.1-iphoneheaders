/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface TSUTemporaryDirectory : NSObject {

	NSString* _path;
	BOOL _leak;

}
-(void)dealloc;
-(id)init;
-(id)path;
-(id)URL;
-(id)initWithSignature:(id)arg1 subdirectory:(id)arg2 ;
-(void)_createDirectoryWithSignature:(id)arg1 subdirectory:(id)arg2 ;
-(id)initWithSignature:(id)arg1 ;
-(void)leakTemporaryDirectory;
@end

