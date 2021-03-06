/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBNotificationCenterSectionInfo.h>

@class NSString, SBWidgetRowInfo;

@interface SBWidgetSectionInfo : SBNotificationCenterSectionInfo {

	NSString* _identifier;
	SBWidgetRowInfo* _widgetRowInfo;

}

@property (nonatomic,retain) SBWidgetRowInfo * widgetRowInfo;              //@synthesize widgetRowInfo=_widgetRowInfo - In the implementation block
@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
+(id)sectionInfoWithIdentifier:(id)arg1 ;
-(void)populateReusableView:(id)arg1 ;
-(SBWidgetRowInfo *)widgetRowInfo;
-(void)setWidgetRowInfo:(SBWidgetRowInfo *)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(Class)reusableViewClass;
@end

