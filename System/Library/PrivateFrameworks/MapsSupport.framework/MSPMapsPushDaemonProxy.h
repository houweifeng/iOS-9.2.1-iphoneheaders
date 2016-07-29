/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MSPMapsPushDaemonProxy
@required
-(void)resetShownAnnouncements;
-(void)registerForTopic;
-(void)fetchCurrentAnnouncement:(/*^block*/id)arg1;
-(void)fetchDevicePushToken:(/*^block*/id)arg1;
-(void)clearBulletinWithRecordID:(id)arg1;
-(void)fetchProblemStatus;
-(void)simulateAnnouncement:(id)arg1;
-(void)simulateProblemResolution;
-(void)clearCurrentAnnouncement;
-(void)checkin;
-(void)showTrafficConditionsBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3;
-(void)clearTrafficConditionsBulletin;

@end

