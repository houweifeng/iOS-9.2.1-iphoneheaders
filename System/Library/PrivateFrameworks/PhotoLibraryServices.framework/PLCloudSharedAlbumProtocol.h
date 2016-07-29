/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDictionary, NSDate, NSOrderedSet, NSNumber;


@protocol PLCloudSharedAlbumProtocol <PLAlbumProtocol>
@property (nonatomic,retain) NSString * cloudGUID; 
@property (nonatomic,retain) NSDictionary * cloudMetadata; 
@property (nonatomic,retain) NSString * cloudOwnerFirstName; 
@property (nonatomic,retain) NSString * cloudOwnerLastName; 
@property (nonatomic,retain) NSString * cloudOwnerFullName; 
@property (nonatomic,retain) NSString * cloudOwnerEmail; 
@property (nonatomic,retain) NSString * cloudOwnerHashedPersonID; 
@property (nonatomic,retain) NSDate * cloudSubscriptionDate; 
@property (nonatomic,retain) NSString * publicURL; 
@property (nonatomic,retain) NSOrderedSet * invitationRecords; 
@property (nonatomic,retain) NSNumber * unseenAssetsCount; 
@property (assign) unsigned long long unseenAssetsCountIntegerValue; 
@property (nonatomic,retain) NSNumber * cloudPublicURLEnabled; 
@property (nonatomic,retain) NSNumber * cloudPublicURLEnabledLocal; 
@property (nonatomic,retain) NSNumber * cloudMultipleContributorsEnabled; 
@property (nonatomic,retain) NSNumber * cloudMultipleContributorsEnabledLocal; 
@property (nonatomic,retain) NSDate * cloudLastInterestingChangeDate; 
@property (nonatomic,retain) NSDate * cloudCreationDate; 
@property (nonatomic,retain) NSDate * cloudLastContributionDate; 
@property (nonatomic,retain) NSString * cloudPersonID; 
@property (readonly) int cloudRelationshipStateValue; 
@property (readonly) int cloudRelationshipStateLocalValue; 
@property (nonatomic,retain,readonly) NSString * localizedSharedWithLabel; 
@property (nonatomic,retain,readonly) NSOrderedSet * cloudAlbumSubscriberRecords; 
@property (nonatomic,retain,readonly) NSDate * cloudFirstRecentBatchDate; 
@property (assign,nonatomic) BOOL cloudNotificationsEnabled; 
@required
-(NSString *)cloudGUID;
-(NSString *)localizedSharedWithLabel;
-(id)localizedSharedByLabelAllowsEmail:(BOOL)arg1;
-(id)cloudOwnerDisplayNameIncludingEmail:(BOOL)arg1 allowsEmail:(BOOL)arg2;
-(void)updateCloudLastInterestingChangeDateWithDate:(id)arg1;
-(void)updateCloudLastContributionDateWithDate:(id)arg1;
-(void)getUnseenStartMarkerIndex:(unsigned long long*)arg1 count:(unsigned long long*)arg2 showsProgress:(BOOL*)arg3;
-(void)userDeleteSubscriberRecord:(id)arg1;
-(void)setCloudGUID:(id)arg1;
-(NSDictionary *)cloudMetadata;
-(void)setCloudMetadata:(id)arg1;
-(NSString *)cloudOwnerFirstName;
-(void)setCloudOwnerFirstName:(id)arg1;
-(NSString *)cloudOwnerLastName;
-(void)setCloudOwnerLastName:(id)arg1;
-(NSString *)cloudOwnerFullName;
-(void)setCloudOwnerFullName:(id)arg1;
-(NSString *)cloudOwnerEmail;
-(void)setCloudOwnerEmail:(id)arg1;
-(NSString *)cloudOwnerHashedPersonID;
-(void)setCloudOwnerHashedPersonID:(id)arg1;
-(NSDate *)cloudSubscriptionDate;
-(void)setCloudSubscriptionDate:(id)arg1;
-(NSString *)publicURL;
-(void)setPublicURL:(id)arg1;
-(NSOrderedSet *)invitationRecords;
-(void)setInvitationRecords:(id)arg1;
-(NSNumber *)unseenAssetsCount;
-(void)setUnseenAssetsCount:(id)arg1;
-(unsigned long long)unseenAssetsCountIntegerValue;
-(void)setUnseenAssetsCountIntegerValue:(unsigned long long)arg1;
-(NSNumber *)cloudPublicURLEnabled;
-(void)setCloudPublicURLEnabled:(id)arg1;
-(NSNumber *)cloudPublicURLEnabledLocal;
-(void)setCloudPublicURLEnabledLocal:(id)arg1;
-(NSNumber *)cloudMultipleContributorsEnabled;
-(void)setCloudMultipleContributorsEnabled:(id)arg1;
-(NSNumber *)cloudMultipleContributorsEnabledLocal;
-(void)setCloudMultipleContributorsEnabledLocal:(id)arg1;
-(NSDate *)cloudLastInterestingChangeDate;
-(void)setCloudLastInterestingChangeDate:(id)arg1;
-(NSDate *)cloudCreationDate;
-(void)setCloudCreationDate:(id)arg1;
-(NSDate *)cloudLastContributionDate;
-(void)setCloudLastContributionDate:(id)arg1;
-(NSString *)cloudPersonID;
-(void)setCloudPersonID:(id)arg1;
-(int)cloudRelationshipStateValue;
-(int)cloudRelationshipStateLocalValue;
-(NSOrderedSet *)cloudAlbumSubscriberRecords;
-(NSDate *)cloudFirstRecentBatchDate;
-(BOOL)cloudNotificationsEnabled;
-(void)setCloudNotificationsEnabled:(BOOL)arg1;

@end

