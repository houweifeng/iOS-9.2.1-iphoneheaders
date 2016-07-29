/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:03 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortAssistant/AUUITableViewController.h>

@class AssistantUIViewController, NSDictionary, NSMutableDictionary;

@interface AssistantSubUIViewController : AUUITableViewController {

	AssistantUIViewController* _parentController;
	NSDictionary* _inParamDict;
	NSMutableDictionary* _outResultsDict;

}

@property (assign,nonatomic) AssistantUIViewController * parentController;              //@synthesize parentController=_parentController - In the implementation block
@property (nonatomic,retain) NSDictionary * inParamDict;                                //@synthesize inParamDict=_inParamDict - In the implementation block
@property (nonatomic,readonly) NSDictionary * outResultsDict;                           //@synthesize outResultsDict=_outResultsDict - In the implementation block
+(id)labelViewInContainer:(id*)arg1 width:(double)arg2 constrain:(BOOL)arg3 ;
+(id)labelViewInContainer:(id*)arg1 width:(double)arg2 ;
+(id)labelViewInContainer:(id*)arg1 width:(double)arg2 withSpinner:(id*)arg3 above:(BOOL)arg4 ;
+(id)topoViewWithWidth:(double)arg1 ;
+(id)containerViewWithWidth:(double)arg1 ;
+(id)tableViewWithWidth:(double)arg1 height:(double)arg2 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)setParentController:(AssistantUIViewController *)arg1 ;
-(AssistantUIViewController *)parentController;
-(void)setLeftNavigationButton:(id)arg1 enable:(BOOL)arg2 hide:(BOOL)arg3 ;
-(NSDictionary *)inParamDict;
-(void)setRightNavigationButton:(id)arg1 enable:(BOOL)arg2 hide:(BOOL)arg3 ;
-(id)getProductLocalizedStringWithFormat:(id)arg1 ;
-(void)setInParamDict:(NSDictionary *)arg1 ;
-(NSDictionary *)outResultsDict;
@end

