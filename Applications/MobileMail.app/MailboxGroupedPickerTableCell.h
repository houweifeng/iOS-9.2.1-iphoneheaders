/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView;

@interface MailboxGroupedPickerTableCell : UITableViewCell {

	UILabel* _mailboxText;
	UIImageView* _mailboxIcon;
	unsigned _level;
	unsigned _disabled : 1;
	unsigned _rootMailbox : 1;

}
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(double)fontSize;
-(void)setCellEnabled:(BOOL)arg1 ;
-(void)setMailbox:(id)arg1 ;
-(void)setCurrentMailbox:(BOOL)arg1 ;
-(void)setMailboxType:(int)arg1 ;
-(BOOL)isCellEnabled;
-(int)levelForMailbox:(id)arg1 ;
-(id)_mailboxFontForSize:(double)arg1 ;
-(void)_setupMailboxIconForImage:(id)arg1 ;
-(id)nameForMailbox:(id)arg1 ;
-(double)horizontalContentOffset;
@end

