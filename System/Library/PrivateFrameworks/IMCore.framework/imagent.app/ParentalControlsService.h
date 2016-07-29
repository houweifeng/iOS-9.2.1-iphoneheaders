/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/imagent.app/imagent
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSString;

@interface ParentalControlsService : NSObject {

	BOOL _disableService;
	BOOL _forceWhiteList;
	NSSet* _whitelist;
	NSString* _name;

}

@property (assign) BOOL disableService;              //@synthesize disableService=_disableService - In the implementation block
@property (assign) BOOL forceWhiteList;              //@synthesize forceWhiteList=_forceWhiteList - In the implementation block
@property (retain) NSSet * whitelist;                //@synthesize whitelist=_whitelist - In the implementation block
@property (retain) NSString * name;                  //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSSet *)whitelist;
-(void)setWhitelist:(NSSet *)arg1 ;
-(BOOL)disableService;
-(void)setDisableService:(BOOL)arg1 ;
-(BOOL)forceWhiteList;
-(void)setForceWhiteList:(BOOL)arg1 ;
@end

