/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:36 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/Microblog.siriUIBundle/Microblog
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Microblog/Microblog-Structs.h>
#import <SiriUI/SiriUISnippetViewController.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>
#import <UIKit/UITextViewDelegate.h>

@class SAMicroblogObject, NSArray, NSURL, NSDictionary, NSString, ACMicroblogSnippetView, CLLocationManager, CLLocation;

@interface ACMicroblogSnippetViewController : SiriUISnippetViewController <CLLocationManagerDelegate, UITextViewDelegate> {

	SAMicroblogObject* _microblog;
	NSArray* _recipients;
	NSURL* _identifier;
	NSDictionary* _socialProfileReferences;
	NSDictionary* _hashtagReferences;
	NSArray* _corrections;
	NSString* _text;
	ACMicroblogSnippetView* _view;
	CLLocationManager* _locationManager;
	CLLocation* _bestLocation;
	BOOL _updatingLocation;
	/*^block*/id _locationAcquiredHandler;
	int _status;
	int _geotagStatus;
	int _type;
	double _lastDesiredHeight;
	BOOL _confirmable;

}

@property (assign,setter=_setConfirmable:,getter=isConfirmable,nonatomic) BOOL confirmable;              //@synthesize confirmable=_confirmable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_speechTokenForString:(id)arg1 confident:(BOOL)arg2 ;
-(void)_cancelLocationButtonTapped:(id)arg1 ;
-(BOOL)isConfirmable;
-(void)_callLocationAcquiredHandler;
-(void)_stopUpdatingLocation;
-(void)_cleanupLocationServices;
-(void)waitUntilLocationAcquiredOrTimeElapsed:(float)arg1 andExecute:(/*^block*/id)arg2 ;
-(id)_completeText:(id)arg1 ;
-(void)_locationButtonTapped:(id)arg1 ;
-(int)_characterCountForEnteredText:(id)arg1 ;
-(void)_setConfirmable:(BOOL)arg1 ;
-(void)_initializeLocationSearch;
-(BOOL)_isLocationUseAuthorizedForBundle:(id)arg1 ;
-(id)_effectiveMicroblogBundle;
-(BOOL)_isLocationUsePermitted;
-(void)_updateGeotagStatus;
-(void)_updateCountLabel;
-(id)_weiboCorrectionsForText:(id)arg1 ;
-(id)_correctionsForText:(id)arg1 ;
-(id)_alternateInterpretationsForToken:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)setCancelled:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)textViewShouldBeginEditing:(id)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)_setText:(id)arg1 ;
-(id)initWithAceObject:(id)arg1 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)configureReusableHeaderView:(id)arg1 ;
-(Class)headerViewClass;
-(void)willCancel;
-(void)willConfirm;
-(double)desiredHeight;
-(void)setConfirmed:(BOOL)arg1 ;
@end

