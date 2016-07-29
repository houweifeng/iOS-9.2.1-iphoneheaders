/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BSAction.h>

@class NSArray;

@interface BKSInsecureDrawingAction : BSAction

@property (nonatomic,readonly) NSArray * processIds; 
-(id)initWithInsecureProcessIds:(id)arg1 ;
-(NSArray *)processIds;
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
@end

