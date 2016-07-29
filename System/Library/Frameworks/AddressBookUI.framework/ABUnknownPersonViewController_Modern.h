/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/ABContactViewControllerDelegate.h>
#import <libobjc.A.dylib/CNContactViewControllerPrivateDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UIActionSheetDelegate.h>

@protocol ABUnknownPersonViewControllerDelegate, ABStyleProvider;
@class NSString, ABPersonTableViewSharingDelegate, UIView, ABContactViewController, ABPersonViewControllerHelper, ABPersonTableViewDataSource, ABPersonTableViewActionsDelegate, ABUIPerson, NSArray, UITableView, NSMutableArray, CNContactViewController, UIFont, UIImage;

@interface ABUnknownPersonViewController_Modern : UIViewController <ABContactViewControllerDelegate, CNContactViewControllerPrivateDelegate, UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate> {

	void* _addressBook;
	void* _displayedPerson;
	BOOL _allowsActions;
	BOOL _allowsAddingToAddressBook;
	BOOL _allowsConferencing;
	BOOL _allowsContactBlocking;
	BOOL _allowsSharing;
	int _style;
	id<ABUnknownPersonViewControllerDelegate> _unknownPersonViewDelegate;
	NSString* _alternateName;
	NSString* _message;
	ABPersonTableViewSharingDelegate* _sharingDelegate;
	UIView* _personHeaderView;
	ABContactViewController* _contactViewController;
	id<ABStyleProvider> _styleProvider;
	ABPersonViewControllerHelper* _helper;
	ABPersonTableViewDataSource* _dataSource;
	ABPersonTableViewActionsDelegate* _actionsDelegate;
	ABUIPerson* _displayedUIPerson;
	NSArray* _displayedProperties;
	NSString* _primaryCNProperty;
	NSString* _primaryCountryCode;
	UITableView* _vCardTableView;
	NSArray* _vCards;
	NSArray* _vCardsProperties;
	NSMutableArray* _unmergedRecords;
	CNContactViewController* _cnContactViewController;

}

@property (assign,nonatomic) id<ABUnknownPersonViewControllerDelegate> unknownPersonViewDelegate;              //@synthesize unknownPersonViewDelegate=_unknownPersonViewDelegate - In the implementation block
@property (assign,nonatomic) const void* addressBook; 
@property (assign,nonatomic) const void* displayedPerson; 
@property (nonatomic,copy) NSString * alternateName;                                                           //@synthesize alternateName=_alternateName - In the implementation block
@property (nonatomic,copy) NSString * message;                                                                 //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) BOOL allowsActions;                                                               //@synthesize allowsActions=_allowsActions - In the implementation block
@property (assign,nonatomic) BOOL allowsAddingToAddressBook;                                                   //@synthesize allowsAddingToAddressBook=_allowsAddingToAddressBook - In the implementation block
@property (nonatomic,retain) UIFont * messageFont; 
@property (nonatomic,copy) NSString * messageDetail; 
@property (nonatomic,retain) UIFont * messageDetailFont; 
@property (nonatomic,retain) UIView * customMessageView; 
@property (nonatomic,retain) UIView * customHeaderView; 
@property (nonatomic,retain) UIView * customFooterView; 
@property (assign,nonatomic) BOOL allowsConferencing;                                                          //@synthesize allowsConferencing=_allowsConferencing - In the implementation block
@property (assign,nonatomic) BOOL allowsContactBlocking;                                                       //@synthesize allowsContactBlocking=_allowsContactBlocking - In the implementation block
@property (assign,nonatomic) BOOL shareMessageBodyIsHTML; 
@property (nonatomic,copy) NSString * shareMessageBody; 
@property (nonatomic,copy) NSString * shareMessageSubject; 
@property (nonatomic,copy) NSString * shareLocationURL; 
@property (nonatomic,retain) UIImage * shareLocationSnapshotImage; 
@property (nonatomic,copy) id willTweetLocationCallback; 
@property (nonatomic,copy) id willWeiboLocationCallback; 
@property (nonatomic,readonly) ABPersonTableViewSharingDelegate * sharingDelegate;                             //@synthesize sharingDelegate=_sharingDelegate - In the implementation block
@property (assign,nonatomic) BOOL allowsSharing;                                                               //@synthesize allowsSharing=_allowsSharing - In the implementation block
@property (nonatomic,readonly) BOOL canShareContact; 
@property (assign,nonatomic) BOOL isLocation; 
@property (assign,nonatomic) BOOL badgeEmailPropertiesForMailVIP; 
@property (nonatomic,retain) UIView * personHeaderView;                                                        //@synthesize personHeaderView=_personHeaderView - In the implementation block
@property (assign,nonatomic) BOOL shouldAlignPersonHeaderViewToImage; 
@property (assign,nonatomic) BOOL savesNewContactOnSuspend; 
@property (nonatomic,retain) ABContactViewController * contactViewController;                                  //@synthesize contactViewController=_contactViewController - In the implementation block
@property (nonatomic,retain) id<ABStyleProvider> styleProvider;                                                //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,readonly) ABPersonViewControllerHelper * helper;                                          //@synthesize helper=_helper - In the implementation block
@property (nonatomic,readonly) ABPersonTableViewDataSource * dataSource;                                       //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) ABPersonTableViewActionsDelegate * actionsDelegate;                             //@synthesize actionsDelegate=_actionsDelegate - In the implementation block
@property (nonatomic,retain) ABUIPerson * displayedUIPerson;                                                   //@synthesize displayedUIPerson=_displayedUIPerson - In the implementation block
@property (nonatomic,copy) NSArray * displayedProperties;                                                      //@synthesize displayedProperties=_displayedProperties - In the implementation block
@property (nonatomic,copy) NSString * attribution; 
@property (assign,nonatomic) int style;                                                                        //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) NSString * primaryCNProperty;                                                     //@synthesize primaryCNProperty=_primaryCNProperty - In the implementation block
@property (nonatomic,retain) NSString * primaryCountryCode;                                                    //@synthesize primaryCountryCode=_primaryCountryCode - In the implementation block
@property (nonatomic,retain) UITableView * vCardTableView;                                                     //@synthesize vCardTableView=_vCardTableView - In the implementation block
@property (nonatomic,retain) NSArray * vCards;                                                                 //@synthesize vCards=_vCards - In the implementation block
@property (nonatomic,retain) NSArray * vCardsProperties;                                                       //@synthesize vCardsProperties=_vCardsProperties - In the implementation block
@property (nonatomic,retain) NSMutableArray * unmergedRecords;                                                 //@synthesize unmergedRecords=_unmergedRecords - In the implementation block
@property (nonatomic,retain) CNContactViewController * cnContactViewController;                                //@synthesize cnContactViewController=_cnContactViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultLabelsForProperty:(int)arg1 person:(void*)arg2 addressBook:(void*)arg3 ;
-(void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 location:(long long)arg3 ;
-(void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 forProperty:(int)arg4 withActionGrouping:(long long)arg5 ordering:(long long)arg6 ;
-(void)removeActionWithSelector:(SEL)arg1 target:(id)arg2 forProperty:(int)arg3 withActionGrouping:(long long)arg4 ordering:(long long)arg5 ;
-(id)newActionButton;
-(void)addActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 location:(long long)arg4 destructive:(BOOL)arg5 ;
-(void)replaceActionWithTarget:(id)arg1 selector:(SEL)arg2 withTitle:(id)arg3 target:(id)arg4 selector:(SEL)arg5 location:(long long)arg6 destructive:(BOOL)arg7 ;
-(void)dealloc;
-(id)init;
-(BOOL)isKindOfClass:(Class)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(ABPersonTableViewDataSource *)dataSource;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(CGSize)preferredContentSize;
-(NSString *)message;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)attribution;
-(void)setAttribution:(NSString *)arg1 ;
-(int)abViewControllerType;
-(double)ab_heightToFitForViewInPopoverView;
-(ABPersonTableViewActionsDelegate *)actionsDelegate;
-(void)setSavesNewContactOnSuspend:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 style:(int)arg3 ;
-(void)loadContactViewController;
-(CNContactViewController *)cnContactViewController;
-(void)setCnContactViewController:(CNContactViewController *)arg1 ;
-(BOOL)savesNewContactOnSuspend;
-(ABPersonViewControllerHelper *)helper;
-(ABUIPerson *)displayedUIPerson;
-(void)setDisplayedUIPerson:(ABUIPerson *)arg1 ;
-(BOOL)allowsContactBlocking;
-(BOOL)allowsConferencing;
-(NSArray *)displayedProperties;
-(BOOL)allowsActions;
-(void)setAllowsConferencing:(BOOL)arg1 ;
-(void)reloadImageData;
-(void)setMessageFont:(UIFont *)arg1 ;
-(void)setMessageDetailFont:(UIFont *)arg1 ;
-(void)setMessageDetail:(NSString *)arg1 ;
-(void)setCustomMessageView:(UIView *)arg1 ;
-(NSString *)messageDetail;
-(UIFont *)messageDetailFont;
-(UIView *)customMessageView;
-(NSString *)alternateName;
-(void)setPrimaryProperty:(int)arg1 countryCode:(id)arg2 ;
-(BOOL)allowsSharing;
-(ABPersonTableViewSharingDelegate *)sharingDelegate;
-(BOOL)shouldAlignPersonHeaderViewToImage;
-(void)setShouldAlignPersonHeaderViewToImage:(BOOL)arg1 ;
-(void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 person:(void*)arg3 important:(BOOL)arg4 ;
-(BOOL)badgeEmailPropertiesForMailVIP;
-(void)setBadgeEmailPropertiesForMailVIP:(BOOL)arg1 ;
-(void)setWillTweetLocationCallback:(id)arg1 ;
-(id<ABUnknownPersonViewControllerDelegate>)unknownPersonViewDelegate;
-(BOOL)isLocation;
-(NSString *)shareMessageSubject;
-(NSString *)shareLocationURL;
-(id)willTweetLocationCallback;
-(id)willWeiboLocationCallback;
-(BOOL)canShareContact;
-(BOOL)shareMessageBodyIsHTML;
-(void)setShareMessageBodyIsHTML:(BOOL)arg1 ;
-(NSString *)shareMessageBody;
-(void)setShareMessageBody:(NSString *)arg1 ;
-(void)setShareMessageSubject:(NSString *)arg1 ;
-(void)setShareLocationURL:(NSString *)arg1 ;
-(UIImage *)shareLocationSnapshotImage;
-(void)setShareLocationSnapshotImage:(UIImage *)arg1 ;
-(void)setWillWeiboLocationCallback:(id)arg1 ;
-(void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 important:(BOOL)arg3 ;
-(BOOL)contactViewController:(id)arg1 shouldPerformDefaultActionForContact:(id)arg2 property:(id)arg3 labeledValue:(id)arg4 ;
-(void)setCardContentProvider:(id)arg1 ;
-(void)setCustomHeaderView:(UIView *)arg1 ;
-(UIView *)customHeaderView;
-(void)setCustomFooterView:(UIView *)arg1 ;
-(UIView *)customFooterView;
-(void)setAttribution:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(BOOL)allowsAddingToAddressBook;
-(void)setIsLocation:(BOOL)arg1 ;
-(void)setVCards:(NSArray *)arg1 ;
-(NSArray *)vCards;
-(UITableView *)vCardTableView;
-(void)setVCardTableView:(UITableView *)arg1 ;
-(void)createNewContacts;
-(void)addToExistingContacts;
-(void)setPrimaryCNProperty:(NSString *)arg1 ;
-(void)setPrimaryCountryCode:(NSString *)arg1 ;
-(NSString *)primaryCNProperty;
-(NSString *)primaryCountryCode;
-(id)primaryPropertyStringForContact:(id)arg1 ;
-(NSMutableArray *)unmergedRecords;
-(void)addUnmergedRecords;
-(void)setUnmergedRecords:(NSMutableArray *)arg1 ;
-(id)findMatchingCardsForRecord:(void*)arg1 ;
-(NSArray *)vCardsProperties;
-(void)showUnmergedContactsAlert;
-(void)presentAddToContactsSheet;
-(void)presentShareContactSheet;
-(void)presentNewContactViewControllerForAddToContacts;
-(void)presentPeoplePickerNavigationControllerForMergeToContact;
-(void)setVCardsProperties:(NSArray *)arg1 ;
-(const void*)addressBook;
-(ABContactViewController *)contactViewController;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(void)setContactViewController:(ABContactViewController *)arg1 ;
-(UIView *)personHeaderView;
-(void)setPersonHeaderView:(UIView *)arg1 ;
-(const void*)displayedPerson;
-(id<ABStyleProvider>)styleProvider;
-(void)setAlternateName:(NSString *)arg1 ;
-(void)setStyleProvider:(id<ABStyleProvider>)arg1 ;
-(void)setAddressBook:(const void*)arg1 ;
-(void)setDisplayedProperties:(NSArray *)arg1 ;
-(void)setDisplayedPerson:(const void*)arg1 ;
-(void)setAllowsActions:(BOOL)arg1 ;
-(void)setHighlightedItemForProperty:(int)arg1 withIdentifier:(int)arg2 ;
-(void)setAllowsAddingToAddressBook:(BOOL)arg1 ;
-(id)initWithVCardData:(id)arg1 ;
-(void)setAllowsSharing:(BOOL)arg1 ;
-(void)setAllowsContactBlocking:(BOOL)arg1 ;
-(void)setPrimaryProperty:(int)arg1 ;
-(void)setUnknownPersonViewDelegate:(id<ABUnknownPersonViewControllerDelegate>)arg1 ;
-(UIFont *)messageFont;
@end

