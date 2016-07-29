/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:29 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerAccessItem : CoreDAVItem {

	CoreDAVItemWithNoChildren* _accessLevel;

}

@property (nonatomic,retain) CoreDAVItemWithNoChildren * accessLevel;              //@synthesize accessLevel=_accessLevel - In the implementation block
-(id)init;
-(id)copyParseRules;
-(CoreDAVItemWithNoChildren *)accessLevel;
-(void)setAccessLevel:(CoreDAVItemWithNoChildren *)arg1 ;
-(id)initWithAccess:(int)arg1 ;
@end

