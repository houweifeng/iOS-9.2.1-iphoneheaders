/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKEventDetailCell.h>

@class UILabel;

@interface EKEventDetailRecurrenceCell : EKEventDetailCell {

	UILabel* _recurrenceLabel;
	double _lastLayoutWidth;

}
-(void)layoutSubviews;
-(double)height;
-(void)layoutForWidth:(double)arg1 position:(int)arg2 ;
-(id)_recurrenceLabel;
-(id)_myTableView;
-(void)setRecurrenceString:(id)arg1 ;
@end

