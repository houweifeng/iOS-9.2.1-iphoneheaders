/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor, NSArray, UIImage;

@interface UIPreviewMenuItem : NSObject <NSCopying> {

	NSString* identifier;
	NSString* _title;
	/*^block*/id _handler;
	UIColor* _color;
	long long _style;
	NSArray* __subitems;
	UIImage* _image;

}

@property (nonatomic,copy) NSString * title;                                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) id handler;                                                             //@synthesize handler=_handler - In the implementation block
@property (setter=_setColor:,getter=_color,nonatomic,retain) UIColor * color;                      //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) long long style;                                                      //@synthesize style=_style - In the implementation block
@property (setter=_setSubitems:,getter=_subitems,nonatomic,copy) NSArray * _subitems;              //@synthesize _subitems=__subitems - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                      //@synthesize image=_image - In the implementation block
+(id)itemWithViewControllerPreviewAction:(id)arg1 ;
+(id)itemWithViewControllerQuickAction:(id)arg1 ;
+(id)itemWithTitle:(id)arg1 style:(long long)arg2 handler:(/*^block*/id)arg3 ;
+(id)_itemWithTitle:(id)arg1 color:(id)arg2 image:(id)arg3 handler:(/*^block*/id)arg4 ;
+(id)itemWithTitle:(id)arg1 style:(long long)arg2 items:(id)arg3 ;
+(id)_itemWithTitle:(id)arg1 style:(long long)arg2 image:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIImage *)image;
-(long long)style;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(NSArray *)_subitems;
-(void)_setColor:(id)arg1 ;
-(id)_color;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)_setSubitems:(id)arg1 ;
@end

