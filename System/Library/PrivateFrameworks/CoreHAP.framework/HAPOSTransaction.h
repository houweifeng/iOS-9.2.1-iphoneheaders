/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:24 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_transaction;
@class NSObject;

@interface HAPOSTransaction : NSObject {

	NSObject*<OS_os_transaction> _HAPOSTransaction;
	double _creationTime;

}

@property (nonatomic,retain) NSObject*<OS_os_transaction> HAPOSTransaction;              //@synthesize HAPOSTransaction=_HAPOSTransaction - In the implementation block
@property (assign,nonatomic) double creationTime;                                        //@synthesize creationTime=_creationTime - In the implementation block
-(void)dealloc;
-(id)init;
-(id)initWithName:(id)arg1 ;
-(double)creationTime;
-(NSObject*<OS_os_transaction>)HAPOSTransaction;
-(void)setHAPOSTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)setCreationTime:(double)arg1 ;
@end

