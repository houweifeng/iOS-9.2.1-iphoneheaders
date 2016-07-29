/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/TPStarkPhoneCallContainerDataSource.h>
#import <libobjc.A.dylib/TPStarkPhoneCallContainerDelegate.h>

@protocol TPStarkPhoneCallGalleryViewDelegate;
@class TPStarkPhoneCallContainer, NSString;

@interface TPStarkPhoneCallGalleryView : UIView <TPStarkPhoneCallContainerDataSource, TPStarkPhoneCallContainerDelegate> {

	id<TPStarkPhoneCallGalleryViewDelegate> _delegate;
	TPStarkPhoneCallContainer* _container;

}

@property (assign) id<TPStarkPhoneCallGalleryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (retain) TPStarkPhoneCallContainer * container;                         //@synthesize container=_container - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)statusStringForDisplayForCall:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<TPStarkPhoneCallGalleryViewDelegate>)arg1 ;
-(void)dealloc;
-(id<TPStarkPhoneCallGalleryViewDelegate>)delegate;
-(TPStarkPhoneCallContainer *)container;
-(void)setContainer:(TPStarkPhoneCallContainer *)arg1 ;
-(void)startListeningForCallNotifications;
-(void)stopListeningForCallNotifications;
-(void)phoneCallDataDidChange:(id)arg1 ;
-(id)primaryCalls;
-(id)phoneCallForIndex:(unsigned long long)arg1 isMerged:(BOOL*)arg2 ;
-(id)mergedStringForMergedCalls;
-(id)mergedCalls;
-(unsigned long long)numberOfViewCellsForPhoneCallContainer:(id)arg1 ;
-(id)phoneCallContainer:(id)arg1 titleForViewCellAtIndex:(unsigned long long)arg2 ;
-(id)phoneCallContainer:(id)arg1 subtitleForViewCellAtIndex:(unsigned long long)arg2 ;
-(BOOL)phoneCallContainer:(id)arg1 cellIsDimmedAtIndex:(unsigned long long)arg2 ;
-(void)phoneCallContainer:(id)arg1 phoneCallViewTappedAtIndex:(unsigned long long)arg2 ;
-(void)reloadPhoneCallData;
-(void)addPrimaryPhoneCall:(id)arg1 animated:(BOOL)arg2 ;
-(void)mergePrimaryPhoneCallsAnimated:(BOOL)arg1 ;
-(void)endPhoneCall:(id)arg1 animated:(BOOL)arg2 ;
-(void)setIsShowingCallFailure:(BOOL)arg1 ;
@end

