/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate;


@protocol PKDatePickerInternalImplementationProtocol <NSObject>
@property (nonatomic,retain) NSDate * date; 
@required
-(NSDate *)date;
-(void)setDate:(id)arg1;
-(void)prepareToDie;
-(id)initShowingDay:(BOOL)arg1 month:(BOOL)arg2 year:(BOOL)arg3 useDarkAppearance:(BOOL)arg4;
-(void)setDateValueChangedTarget:(id)arg1 action:(SEL)arg2;

@end

