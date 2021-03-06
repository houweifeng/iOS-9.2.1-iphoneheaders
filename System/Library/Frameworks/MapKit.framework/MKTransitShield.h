/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitShieldDataSource.h>

@class NSString;

@interface MKTransitShield : NSObject <GEOTransitShieldDataSource> {

	long long _shieldType;
	NSString* _shieldText;
	NSString* _shieldColorString;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long shieldType;                      //@synthesize shieldType=_shieldType - In the implementation block
@property (nonatomic,readonly) NSString * shieldText;                     //@synthesize shieldText=_shieldText - In the implementation block
@property (nonatomic,readonly) NSString * shieldColorString;              //@synthesize shieldColorString=_shieldColorString - In the implementation block
-(NSString *)shieldText;
-(long long)shieldType;
-(NSString *)shieldColorString;
-(id)initWithShieldType:(long long)arg1 text:(id)arg2 color:(id)arg3 ;
@end

