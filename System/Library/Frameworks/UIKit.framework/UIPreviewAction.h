/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKit/UIPreviewActionItem.h>

@class NSString, UIImage, UIColor;

@interface UIPreviewAction : NSObject <NSCopying, UIPreviewActionItem> {

	NSString* _identifier;
	/*^block*/id _handler;
	long long _style;
	UIImage* _image;
	UIColor* _color;
	NSString* _title;

}

@property (nonatomic,copy) id handler;                                                     //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) long long style;                                              //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) UIImage * image;                                              //@synthesize image=_image - In the implementation block
@property (setter=_setColor:,getter=_color,nonatomic,retain) UIColor * color;              //@synthesize color=_color - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                               //@synthesize title=_title - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_actionWithPreviewMenuItem:(id)arg1 ;
+(id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
+(id)_actionWithTitle:(id)arg1 style:(long long)arg2 color:(id)arg3 image:(id)arg4 handler:(/*^block*/id)arg5 ;
+(id)_actionWithTitle:(id)arg1 style:(long long)arg2 image:(id)arg3 handler:(/*^block*/id)arg4 ;
+(id)_actionWithTitle:(id)arg1 color:(id)arg2 image:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIImage *)image;
-(long long)style;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(void)_setColor:(id)arg1 ;
-(id)_color;
-(id)handler;
-(void)setHandler:(id)arg1 ;
@end

