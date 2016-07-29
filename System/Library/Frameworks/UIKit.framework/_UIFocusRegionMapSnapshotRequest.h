/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIView;

@interface _UIFocusRegionMapSnapshotRequest : NSObject <NSCopying> {

	BOOL _includeFocusGuides;
	BOOL _includeFocusContainerGuides;
	BOOL _clipToSnapshotRect;
	UIView* _rootView;
	unsigned long long _focusHeading;
	UIView* _focusableRegionAncestorView;
	CGRect _snapshotRect;
	CGRect _viewSearchRect;
	CGRect _focusedRect;
	CGRect _visualRepresentationMinimumArea;

}

@property (assign,nonatomic,__weak) UIView * rootView;                                 //@synthesize rootView=_rootView - In the implementation block
@property (assign,nonatomic) CGRect snapshotRect;                                      //@synthesize snapshotRect=_snapshotRect - In the implementation block
@property (assign,nonatomic) CGRect viewSearchRect;                                    //@synthesize viewSearchRect=_viewSearchRect - In the implementation block
@property (assign,nonatomic) CGRect focusedRect;                                       //@synthesize focusedRect=_focusedRect - In the implementation block
@property (assign,nonatomic) unsigned long long focusHeading;                          //@synthesize focusHeading=_focusHeading - In the implementation block
@property (assign,nonatomic) BOOL includeFocusGuides;                                  //@synthesize includeFocusGuides=_includeFocusGuides - In the implementation block
@property (assign,nonatomic) BOOL includeFocusContainerGuides;                         //@synthesize includeFocusContainerGuides=_includeFocusContainerGuides - In the implementation block
@property (assign,nonatomic) BOOL clipToSnapshotRect;                                  //@synthesize clipToSnapshotRect=_clipToSnapshotRect - In the implementation block
@property (assign,nonatomic,__weak) UIView * focusableRegionAncestorView;              //@synthesize focusableRegionAncestorView=_focusableRegionAncestorView - In the implementation block
@property (assign,nonatomic) CGRect visualRepresentationMinimumArea;                   //@synthesize visualRepresentationMinimumArea=_visualRepresentationMinimumArea - In the implementation block
+(id)requestWithRootView:(id)arg1 ;
-(id)initWithRootView:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)focusHeading;
-(id)takeSnapshot;
-(void)setFocusHeading:(unsigned long long)arg1 ;
-(CGRect)viewSearchRect;
-(UIView *)rootView;
-(void)setRootView:(UIView *)arg1 ;
-(CGRect)snapshotRect;
-(void)setSnapshotRect:(CGRect)arg1 ;
-(void)setViewSearchRect:(CGRect)arg1 ;
-(CGRect)focusedRect;
-(void)setFocusedRect:(CGRect)arg1 ;
-(BOOL)includeFocusGuides;
-(void)setIncludeFocusGuides:(BOOL)arg1 ;
-(BOOL)includeFocusContainerGuides;
-(void)setIncludeFocusContainerGuides:(BOOL)arg1 ;
-(BOOL)clipToSnapshotRect;
-(void)setClipToSnapshotRect:(BOOL)arg1 ;
-(UIView *)focusableRegionAncestorView;
-(void)setFocusableRegionAncestorView:(UIView *)arg1 ;
-(CGRect)visualRepresentationMinimumArea;
-(void)setVisualRepresentationMinimumArea:(CGRect)arg1 ;
@end

