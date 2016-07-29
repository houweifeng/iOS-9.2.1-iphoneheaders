/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIView;


@protocol MKCalloutSource <NSObject>
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,retain,readonly) UIView * leftCalloutAccessoryView; 
@property (nonatomic,retain,readonly) UIView * rightCalloutAccessoryView; 
@property (nonatomic,retain,readonly) UIView * detailCalloutAccessoryView; 
@optional
-(NSString *)subtitle;
-(UIView *)rightCalloutAccessoryView;
-(UIView *)detailCalloutAccessoryView;
-(UIView *)leftCalloutAccessoryView;

@required
-(id)title;
-(CGPoint*)calloutAnchorPointWithCanvasSize:(CGSize)arg1 canvasScale:(double)arg2 snapToPixels:(BOOL)arg3;
-(CGPoint*)screenPointToScrollRelativeToWithCanvasSize:(CGSize)arg1 canvasScale:(double)arg2;
-(id)debugAnchorPointString;

@end

