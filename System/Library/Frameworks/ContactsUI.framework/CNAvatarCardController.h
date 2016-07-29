/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:46 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNAvatarCardControllerDelegate;
#import <ContactsUI/ContactsUI-Structs.h>
@class NSArray, CNAvatarView, CNContactHeaderDisplayView, UIButton, UIGestureRecognizer, CNContact, NSString, UIView, UIViewController;

@interface CNAvatarCardController : NSObject {

	BOOL _bypassActionValidation;
	BOOL _actionsNeedRefresh;
	NSArray* _contacts;
	NSArray* _actionCategories;
	id<CNAvatarCardControllerDelegate> _delegate;
	CNAvatarView* _avatarView;
	CNContactHeaderDisplayView* _headerView;
	UIButton* _infoButton;
	UIGestureRecognizer* _rolloverGestureRecognizer;
	CGRect _sourceRect;

}

@property (nonatomic,retain) CNContact * contact; 
@property (nonatomic,retain) NSArray * contacts;                                              //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,copy) NSArray * actionCategories;                                        //@synthesize actionCategories=_actionCategories - In the implementation block
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * message; 
@property (assign,nonatomic,__weak) id<CNAvatarCardControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isVisible,nonatomic,readonly) BOOL visible; 
@property (nonatomic,retain) UIView * sourceView; 
@property (assign,nonatomic) CGRect sourceRect;                                               //@synthesize sourceRect=_sourceRect - In the implementation block
@property (assign,nonatomic) BOOL bypassActionValidation;                                     //@synthesize bypassActionValidation=_bypassActionValidation - In the implementation block
@property (assign,nonatomic,__weak) CNAvatarView * avatarView;                                //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) CNContactHeaderDisplayView * headerView;                         //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIButton * infoButton;                                           //@synthesize infoButton=_infoButton - In the implementation block
@property (nonatomic,readonly) UIViewController * presentingViewController; 
@property (nonatomic,retain) UIGestureRecognizer * rolloverGestureRecognizer;                 //@synthesize rolloverGestureRecognizer=_rolloverGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL actionsNeedRefresh;                                         //@synthesize actionsNeedRefresh=_actionsNeedRefresh - In the implementation block
+(BOOL)avatarCardEnabled;
+(long long)actionsMode;
+(BOOL)showsWithTapAndHold;
+(long long)avatarCardImplementation;
+(id)descriptorForRequiredKeys;
-(void)setDelegate:(id<CNAvatarCardControllerDelegate>)arg1 ;
-(id)init;
-(id<CNAvatarCardControllerDelegate>)delegate;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(UIViewController *)presentingViewController;
-(UIView *)sourceView;
-(void)setSourceView:(UIView *)arg1 ;
-(CGRect)sourceRect;
-(void)setSourceRect:(CGRect)arg1 ;
-(NSString *)message;
-(CNContactHeaderDisplayView *)headerView;
-(void)setHeaderView:(CNContactHeaderDisplayView *)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(BOOL)isVisible;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)presentAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(UIButton *)infoButton;
-(void)setInfoButton:(UIButton *)arg1 ;
-(NSArray *)contacts;
-(BOOL)bypassActionValidation;
-(void)showContact:(id)arg1 ;
-(NSArray *)actionCategories;
-(void)setRolloverGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(UIGestureRecognizer *)rolloverGestureRecognizer;
-(void)dismissAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)actionsNeedRefresh;
-(void)setActionsNeedRefresh:(BOOL)arg1 ;
-(id)preparedViewControllerForPresentationWithGestureRecognizer:(id)arg1 ;
-(void)showContact;
-(void)_updateCard;
-(void)setContact:(CNContact *)arg1 ;
-(CNContact *)contact;
-(void)presentAnimated:(BOOL)arg1 ;
-(void)setBypassActionValidation:(BOOL)arg1 ;
-(void)setActionCategories:(NSArray *)arg1 ;
-(void)setContacts:(NSArray *)arg1 ;
-(CNAvatarView *)avatarView;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
@end

