/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <MPUFoundation/MPUImageStackItemView.h>

@class UIImageView, MPUBorderConfiguration, MPUBorderDrawingCache;

@interface MPUBorderedImageStackItemView : MPUImageStackItemView {

	UIImageView* _borderImageView;
	MPUBorderConfiguration* _borderConfiguration;
	MPUBorderDrawingCache* _borderDrawingCache;

}

@property (nonatomic,copy) MPUBorderConfiguration * borderConfiguration;              //@synthesize borderConfiguration=_borderConfiguration - In the implementation block
@property (nonatomic,retain) MPUBorderDrawingCache * borderDrawingCache;              //@synthesize borderDrawingCache=_borderDrawingCache - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setBorderDrawingCache:(MPUBorderDrawingCache *)arg1 ;
-(void)setBorderConfiguration:(MPUBorderConfiguration *)arg1 ;
-(MPUBorderDrawingCache *)borderDrawingCache;
-(void)_updateBorderImageView;
-(void)_borderDrawingCacheWasInvalidated:(id)arg1 ;
-(MPUBorderConfiguration *)borderConfiguration;
@end
