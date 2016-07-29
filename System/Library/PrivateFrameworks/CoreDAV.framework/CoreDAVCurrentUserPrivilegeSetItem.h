/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CoreDAVCurrentUserPrivilegeSetItem : CoreDAVItem {

	NSMutableSet* _privileges;

}

@property (nonatomic,retain) NSMutableSet * privileges;              //@synthesize privileges=_privileges - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setPrivileges:(NSMutableSet *)arg1 ;
-(void)addPrivilege:(id)arg1 ;
-(BOOL)hasPrivilegeWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(NSMutableSet *)privileges;
@end

