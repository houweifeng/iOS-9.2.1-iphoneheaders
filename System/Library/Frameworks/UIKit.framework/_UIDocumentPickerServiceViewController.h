/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL;


@protocol _UIDocumentPickerServiceViewController <NSObject>
@property (nonatomic,copy,readonly) NSURL * uploadURL; 
@optional
-(void)performAction:(long long)arg1 item:(id)arg2 view:(id)arg3 completion:(/*^block*/id)arg4;
-(BOOL)shouldShowAction:(long long)arg1;
-(void)itemsOrSelectionDidChange:(BOOL)arg1;

@required
-(NSURL *)uploadURL;
-(void)setupNavigationItemForPicker:(id)arg1 isRoot:(BOOL)arg2;
-(void)didSelectItem:(id)arg1;
-(BOOL)shouldShowSearch;

@end

