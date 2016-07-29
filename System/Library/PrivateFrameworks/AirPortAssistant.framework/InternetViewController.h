/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:03 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <AirPortAssistant/AssistantSubUIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIView, UILabel, UIActivityIndicatorView, UIImageView, NSString;

@interface InternetViewController : AssistantSubUIViewController <UIScrollViewDelegate> {

	UIView* spinnerWithStatusAdjacentView;
	UILabel* spinnerWithStatusAdjacentLabel;
	UIActivityIndicatorView* spinnerWithStatusAdjacentSpinner;
	UIView* tableHeaderContainerView;
	UIView* diagramContainerView;
	UIView* descriptionContainerView;
	UILabel* descriptionLabel;
	UIImageView* cablingImageLastFrame;
	unsigned long long internetFlow;
	NSString* _swapDescriptionText;
	NSString* _swapSourceLabelText;

}

@property (nonatomic,retain) NSString * swapDescriptionText;                      //@synthesize swapDescriptionText=_swapDescriptionText - In the implementation block
@property (nonatomic,retain) NSString * swapSourceLabelText;                      //@synthesize swapSourceLabelText=_swapSourceLabelText - In the implementation block
@property (nonatomic,retain) UIView * spinnerWithStatusAdjacentView; 
@property (nonatomic,retain) UIView * descriptionContainerView; 
@property (nonatomic,retain) UIView * diagramContainerView; 
@property (nonatomic,retain) UIImageView * cablingImageLastFrame; 
@property (nonatomic,retain) UIView * tableHeaderContainerView; 
@property (assign,nonatomic) unsigned long long internetFlow; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addInternetWANPluginUI;
-(void)addInternetNotWorkingUI;
-(void)addSwapCablingUI;
-(void)addInformationalDiagramWithWANConnectedBaseProductID:(unsigned)arg1 replacementProductID:(unsigned)arg2 ;
-(void)setCommonTraitsForLabel:(id)arg1 forSize:(double)arg2 ;
-(void)dealloc;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setTableHeaderContainerView:(UIView *)arg1 ;
-(void)presentInternetDisconnectedUI;
-(void)presentInternetWANPluginUI;
-(void)presentSwapCablingCompleteUI;
-(void)presentSwapCablingUI;
-(UIView *)tableHeaderContainerView;
-(UIView *)spinnerWithStatusAdjacentView;
-(void)setSpinnerWithStatusAdjacentView:(UIView *)arg1 ;
-(unsigned long long)internetFlow;
-(void)setDescriptionContainerView:(UIView *)arg1 ;
-(void)setDiagramContainerView:(UIView *)arg1 ;
-(void)setCablingImageLastFrame:(UIImageView *)arg1 ;
-(void)setSwapDescriptionText:(NSString *)arg1 ;
-(void)setSwapSourceLabelText:(NSString *)arg1 ;
-(void)setInternetFlow:(unsigned long long)arg1 ;
-(void)determineInfoForDevice:(id)arg1 deviceDiagramInfo:(SCD_Struct_In2*)arg2 ;
-(void)startAnimatingCablingForView:(id)arg1 startingOpacity:(float)arg2 endingOpacity:(float)arg3 duration:(double)arg4 ;
-(UIView *)descriptionContainerView;
-(UIView *)diagramContainerView;
-(UIImageView *)cablingImageLastFrame;
-(NSString *)swapDescriptionText;
-(NSString *)swapSourceLabelText;
@end

