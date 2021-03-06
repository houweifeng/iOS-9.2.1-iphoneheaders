/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:48 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@class NSURL;

@interface CANodeButton : UIButton {

	BOOL hasLabel;
	NSURL* _url;

}

@property (retain) NSURL * url;                //@synthesize url=_url - In the implementation block
@property (assign) BOOL hasLabel; 
-(id)init;
-(void)layoutSubviews;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(BOOL)hasLabel;
-(void)setHasLabel:(BOOL)arg1 ;
@end

