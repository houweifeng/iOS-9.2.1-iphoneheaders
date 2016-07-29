/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKUIConstrainedFontsTableViewCell.h>

@class UITextView, NSString;

@interface CalendarNotesCell : EKUIConstrainedFontsTableViewCell {

	UITextView* _textView;
	NSString* _text;

}

@property (nonatomic,copy) NSString * text;                               //@synthesize text=_text - In the implementation block
@property (nonatomic,retain,readonly) UITextView * textView; 
@property (nonatomic,retain) NSString * placeholder; 
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)becomeFirstResponder;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setPlaceholder:(NSString *)arg1 ;
-(NSString *)placeholder;
-(UITextView *)textView;
@end

