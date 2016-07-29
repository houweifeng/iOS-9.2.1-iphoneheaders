/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BBSectionInfo, NSDictionary, NSString;

@interface BLTSectionInfoListItem : NSObject {

	BBSectionInfo* _sectionInfo;
	NSDictionary* _overrides;
	NSString* _universalSectionID;
	NSString* _displayName;

}

@property (nonatomic,retain) BBSectionInfo * sectionInfo;              //@synthesize sectionInfo=_sectionInfo - In the implementation block
@property (nonatomic,retain) NSDictionary * overrides;                 //@synthesize overrides=_overrides - In the implementation block
@property (nonatomic,copy) NSString * universalSectionID;              //@synthesize universalSectionID=_universalSectionID - In the implementation block
@property (nonatomic,copy) NSString * displayName;                     //@synthesize displayName=_displayName - In the implementation block
-(NSString *)displayName;
-(void)setOverrides:(NSDictionary *)arg1 ;
-(NSDictionary *)overrides;
-(BBSectionInfo *)sectionInfo;
-(NSString *)universalSectionID;
-(void)setUniversalSectionID:(NSString *)arg1 ;
-(void)setSectionInfo:(BBSectionInfo *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
@end

