/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKAnnotationContainerView.h>

@interface MKNewAnnotationContainerView : MKAnnotationContainerView {

	BOOL _suppress;

}
-(void)setAnnotationViewsRotationRadians:(double)arg1 animation:(id)arg2 ;
-(void)stopSuppressingUpdates;
-(void)_updateAddedAnnotationRotation:(id)arg1 ;
-(void)_updateAnnotationView:(id)arg1 ;
-(void)_updateAnnotationViewPerspective;
-(void)suppressUpdates;
-(void)_updateAnnotationViewPositions;
@end

