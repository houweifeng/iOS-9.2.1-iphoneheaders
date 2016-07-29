/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSMutableDictionary, NSString;

@interface GEOPhoneNumberMUIDMapper : NSObject {

	NSObject*<OS_dispatch_queue> _writeQ;
	NSMutableArray* _uniquePhoneNumbers;
	NSMutableDictionary* _phoneNumberMuidMapping;
	NSString* _filePath;

}
-(void)dealloc;
-(void)_save;
-(void)_pruneToSize:(unsigned long long)arg1 ;
-(id)initWithMappingFilePath:(id)arg1 ;
-(void)setMuid:(unsigned long long)arg1 providerId:(int)arg2 forPhoneNumber:(unsigned long long)arg3 ;
-(BOOL)getMuid:(out unsigned long long*)arg1 providerId:(out int*)arg2 forPhoneNumber:(unsigned long long)arg3 ;
@end

