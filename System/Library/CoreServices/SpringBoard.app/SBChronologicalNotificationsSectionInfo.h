/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBBBSectionInfo.h>

@class NSString, NSDate;

@interface SBChronologicalNotificationsSectionInfo : SBBBSectionInfo {

	NSString* _title;

}

@property (nonatomic,copy,readonly) NSDate * representedDate; 
@property (nonatomic,copy,readonly) NSString * title;                      //@synthesize title=_title - In the implementation block
+(id)infoWithRepresentedObject:(id)arg1 ;
+(id)_representedDateForDate:(id)arg1 ;
+(id)_identifierForSectionInfoWithRepresentedDate:(id)arg1 ;
+(id)_titleForDate:(id)arg1 ;
+(id)identifierForSectionInfoWithDate:(id)arg1 ;
-(void)populateReusableView:(id)arg1 ;
-(void)invalidateTitle;
-(void)dealloc;
-(id)description;
-(id)identifier;
-(NSString *)title;
-(NSDate *)representedDate;
@end

