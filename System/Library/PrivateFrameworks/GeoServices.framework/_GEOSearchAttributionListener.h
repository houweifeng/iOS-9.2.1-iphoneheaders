/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface _GEOSearchAttributionListener : NSObject {

	NSString* _identifier;
	unsigned _version;
	NSMutableArray* _completionHandlers;
	NSMutableArray* _errorHandlers;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) unsigned version;                   //@synthesize version=_version - In the implementation block
-(void)dealloc;
-(NSString *)identifier;
-(unsigned)version;
-(void)handleError:(id)arg1 ;
-(void)addCompletionHandler:(/*^block*/id)arg1 errorHandler:(/*^block*/id)arg2 ;
-(id)initWithIdentifier:(id)arg1 version:(unsigned)arg2 ;
-(void)handleInfo:(id)arg1 updatedManifest:(BOOL)arg2 ;
@end

