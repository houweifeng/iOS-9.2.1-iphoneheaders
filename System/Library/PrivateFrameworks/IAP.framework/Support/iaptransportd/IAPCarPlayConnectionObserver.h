/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iaptransportd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iaptransportd/iaptransportd-Structs.h>
#import <iaptransportd/CRCarPlayPreferencesDelegate.h>

@class CRCarPlayPreferences, NSString;

@interface IAPCarPlayConnectionObserver : NSObject <CRCarPlayPreferencesDelegate> {

	BOOL _isStarkPossibleByCarPlaySettings;
	CRCarPlayPreferences* _carPreferences;
	CIapPortIOKit* _parentUSBPort;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)initWithPort:(CIapPortIOKit*)arg1 ;
-(void)handleCarPlayAllowedDidChange;
@end

