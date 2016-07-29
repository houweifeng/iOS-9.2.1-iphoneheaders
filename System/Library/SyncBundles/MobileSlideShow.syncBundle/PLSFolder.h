/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:46 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/SyncBundles/MobileSlideShow.syncBundle/MobileSlideShow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSlideShow/PLSItem.h>

@class NSString;

@interface PLSFolder : PLSItem {

	NSString* _name;
	NSString* _parentUUID;

}

@property (nonatomic,retain) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * parentUUID;              //@synthesize parentUUID=_parentUUID - In the implementation block
+(id)folderWithUUID:(id)arg1 ;
+(id)folder;
-(id)initFromPropertyList:(id)arg1 ;
-(void)setParentUUID:(NSString *)arg1 ;
-(NSString *)parentUUID;
-(id)initWithHostPropertyList:(id)arg1 ;
-(id)mergeWithHostPropertyList:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)initWithUUID:(id)arg1 ;
-(id)propertyList;
@end

