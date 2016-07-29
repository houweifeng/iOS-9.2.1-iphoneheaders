/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKViewElement.h>

@class NSDate, IKViewElement;

@interface IKTimelineEventElement : IKViewElement

@property (nonatomic,readonly) double offset; 
@property (nonatomic,retain,readonly) NSDate * startDate; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,retain,readonly) IKViewElement * relatedContent; 
-(double)duration;
-(double)offset;
-(NSDate *)startDate;
-(IKViewElement *)relatedContent;
@end
