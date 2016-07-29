/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PersistentConnection/PersistentConnection-Structs.h>
#import <libobjc.A.dylib/PCInterfaceUsabilityMonitorDelegate.h>
#import <libobjc.A.dylib/PCInterfaceMonitorProtocol.h>

@protocol PCInterfaceUsabilityMonitorProtocol;
@class NSString, NSMapTable;

@interface PCInterfaceMonitor : NSObject <PCInterfaceUsabilityMonitorDelegate, PCInterfaceMonitorProtocol> {

	id<PCInterfaceUsabilityMonitorProtocol> _internal;
	NSMapTable* _delegateMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long interfaceIdentifier; 
@property (nonatomic,readonly) int linkQuality; 
@property (nonatomic,readonly) BOOL isInterfaceUsable; 
@property (nonatomic,readonly) BOOL isInterfaceHistoricallyUsable; 
@property (nonatomic,readonly) BOOL isInternetReachable; 
@property (nonatomic,retain,readonly) NSString * linkQualityString; 
@property (nonatomic,readonly) BOOL isPoorLinkQuality; 
@property (nonatomic,readonly) BOOL isBadLinkQuality; 
@property (nonatomic,readonly) BOOL isRadioHot; 
@property (nonatomic,readonly) CFStringRef currentRAT; 
@property (nonatomic,readonly) BOOL isLTEWithCDRX; 
@property (nonatomic,readonly) CFStringRef wwanInterfaceName; 
+(BOOL)isBadLinkQuality:(int)arg1 ;
+(id)stringForLinkQuality:(int)arg1 ;
+(BOOL)isPoorLinkQuality:(int)arg1 ;
+(id)sharedInstanceForIdentifier:(long long)arg1 ;
-(BOOL)isInterfaceUsable;
-(NSString *)linkQualityString;
-(BOOL)isPoorLinkQuality;
-(BOOL)isInterfaceHistoricallyUsable;
-(BOOL)isBadLinkQuality;
-(BOOL)isRadioHot;
-(CFStringRef)currentRAT;
-(BOOL)isLTEWithCDRX;
-(id)initWithInterfaceIdentifier:(long long)arg1 ;
-(void)dealloc;
-(CFStringRef)wwanInterfaceName;
-(void)removeDelegate:(id)arg1 ;
-(int)linkQuality;
-(long long)interfaceIdentifier;
-(BOOL)isInternetReachable;
-(void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2 ;
-(void)interfaceReachabilityChanged:(id)arg1 ;
-(void)interfaceRadioHotnessChanged:(id)arg1 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
@end

