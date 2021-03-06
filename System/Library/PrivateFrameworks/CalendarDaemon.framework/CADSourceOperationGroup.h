/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarDaemon/CalendarDaemon-Structs.h>
#import <CalendarDaemon/CADOperationGroup.h>
#import <libobjc.A.dylib/CADSourceInterface.h>

@interface CADSourceOperationGroup : CADOperationGroup <CADSourceInterface>
+(BOOL)requiresEventAccess;
+(BOOL)requiresReminderAccess;
+(BOOL)requiresEventOrReminderAccess;
-(void)CADDatabaseGetSources:(/*^block*/id)arg1 ;
-(void)CADSourceGetConstraints:(SCD_Struct_CA1)arg1 reply:(/*^block*/id)arg2 ;
-(void)CADSourceRefresh:(SCD_Struct_CA1)arg1 isUserRequested:(BOOL)arg2 reply:(/*^block*/id)arg3 ;
@end

