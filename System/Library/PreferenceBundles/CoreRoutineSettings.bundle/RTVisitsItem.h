/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/CoreRoutineSettings.bundle/CoreRoutineSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutineSettings/RTMapAndTableRowItem.h>

@class RTPrivacyLOI, NSString;

@interface RTVisitsItem : NSObject <RTMapAndTableRowItem> {

	RTPrivacyLOI* _privacyLOI;

}

@property (nonatomic,retain) RTPrivacyLOI * privacyLOI;              //@synthesize privacyLOI=_privacyLOI - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)populateSubtitleStyleCell:(id)arg1 ;
-(RTPrivacyLOI *)privacyLOI;
-(void)setPrivacyLOI:(RTPrivacyLOI *)arg1 ;
@end

