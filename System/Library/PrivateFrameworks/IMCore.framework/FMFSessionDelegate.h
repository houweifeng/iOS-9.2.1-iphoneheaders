/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FMFSessionDelegate <NSObject>
@optional
-(void)didReceiveLocation:(id)arg1;
-(void)didFailToFetchLocationForHandle:(id)arg1 withError:(id)arg2;
-(void)connectionError:(id)arg1;
-(void)didReceiveFriendshipRequest:(id)arg1;
-(void)didStartSharingMyLocationWithHandle:(id)arg1;
-(void)didStopSharingMyLocationWithHandle:(id)arg1;
-(void)didStartAbilityToGetLocationForHandle:(id)arg1;
-(void)didStopAbilityToGetLocationForHandle:(id)arg1;
-(void)didUpdateHidingStatus:(BOOL)arg1;
-(void)sendMappingPacket:(id)arg1 toHandle:(id)arg2;
-(void)mappingPacketProcessingCompleted:(id)arg1;
-(void)didFailToHandleMappingPacket:(id)arg1 error:(id)arg2;
-(void)didChangeActiveLocationSharingDevice:(id)arg1;
-(void)didUpdateActiveDeviceList:(id)arg1;
-(void)didUpdatePendingOffersForHandles:(id)arg1;
-(void)didReceiveServerError:(id)arg1;
-(void)didUpdateFavoriteHandles:(id)arg1;

@end

