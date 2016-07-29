/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView;

@interface _UIDocumentPickerOverviewViewControllerCell : UITableViewCell {

	UIImageView* _iconView;
	UIImageView* _newlyAddedView;

}

@property (nonatomic,retain) UIImageView * iconView;                    //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UIImageView * newlyAddedView;              //@synthesize newlyAddedView=_newlyAddedView - In the implementation block
@property (assign,nonatomic) BOOL showNewlyAdded; 
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(id)_dotImage;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(void)setShowNewlyAdded:(BOOL)arg1 ;
-(void)setNewlyAddedView:(UIImageView *)arg1 ;
-(UIImageView *)newlyAddedView;
-(BOOL)showNewlyAdded;
@end

