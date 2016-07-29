/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PreferenceBundles/CoreRoutineSettings.bundle/CoreRoutineSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreRoutineSettings/RTMapAndTableViewController.h>

@class RTRoutineManager, RTPrivacyCluster, RTPrivacyLOIViewController, RTPrivacyVisitsViewController;

@interface RTPrivacyClusterViewController : RTMapAndTableViewController {

	RTRoutineManager* _routineManager;
	RTPrivacyCluster* _privacyCluster;
	RTPrivacyLOIViewController* _loiViewController;
	RTPrivacyVisitsViewController* _visitsViewController;

}

@property (assign,nonatomic,__weak) RTRoutineManager * routineManager;                          //@synthesize routineManager=_routineManager - In the implementation block
@property (nonatomic,retain) RTPrivacyCluster * privacyCluster;                                 //@synthesize privacyCluster=_privacyCluster - In the implementation block
@property (nonatomic,retain) RTPrivacyLOIViewController * loiViewController;                    //@synthesize loiViewController=_loiViewController - In the implementation block
@property (nonatomic,retain) RTPrivacyVisitsViewController * visitsViewController;              //@synthesize visitsViewController=_visitsViewController - In the implementation block
-(id)initWithPrivacyCluster:(id)arg1 andRoutineManager:(id)arg2 ;
-(RTPrivacyCluster *)privacyCluster;
-(void)selectRowItem:(id)arg1 ;
-(RTPrivacyVisitsViewController *)visitsViewController;
-(RTPrivacyLOIViewController *)loiViewController;
-(void)setLoiViewController:(RTPrivacyLOIViewController *)arg1 ;
-(void)_displayCluster:(id)arg1 mapView:(id)arg2 ;
-(void)setVisitsViewController:(RTPrivacyVisitsViewController *)arg1 ;
-(void)_removeCluster:(id)arg1 mapView:(id)arg2 ;
-(void)setPrivacyCluster:(RTPrivacyCluster *)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(RTRoutineManager *)routineManager;
-(void)setRoutineManager:(RTRoutineManager *)arg1 ;
@end

