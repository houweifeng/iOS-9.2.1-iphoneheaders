/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:43:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Library/Application Support/AdSheet/MapWebKitPlugin.webplugin/MapWebKitPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapWebKitPlugin/MapWebKitPlugin-Structs.h>
#import <libobjc.A.dylib/MKAnnotation.h>

@class NSString;

@interface MapPluginAnnotationSO : NSObject <MKAnnotation> {

	BOOL _hasLeftCalloutButton;
	BOOL _hasRightCalloutButton;
	BOOL _animatesDrop;
	BOOL _draggable;
	NSString* _identifier;
	NSString* _title;
	NSString* _subtitle;
	NSString* _imageURLString;
	unsigned long long _pinColor;
	SCD_Struct_Ma2 _coordinate;
	CGPoint _centerOffset;

}

@property (assign,nonatomic) SCD_Struct_Ma2 coordinate;              //@synthesize coordinate=_coordinate - In the implementation block
@property (nonatomic,copy) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                      //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy) NSString * imageURLString;                //@synthesize imageURLString=_imageURLString - In the implementation block
@property (assign) CGPoint centerOffset;                             //@synthesize centerOffset=_centerOffset - In the implementation block
@property (assign) BOOL hasLeftCalloutButton;                        //@synthesize hasLeftCalloutButton=_hasLeftCalloutButton - In the implementation block
@property (assign) BOOL hasRightCalloutButton;                       //@synthesize hasRightCalloutButton=_hasRightCalloutButton - In the implementation block
@property (assign) unsigned long long pinColor;                      //@synthesize pinColor=_pinColor - In the implementation block
@property (assign) BOOL animatesDrop;                                //@synthesize animatesDrop=_animatesDrop - In the implementation block
@property (assign) BOOL draggable;                                   //@synthesize draggable=_draggable - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)imageURLString;
-(void)setHasRightCalloutButton:(BOOL)arg1 ;
-(id)initWithWebScriptObject:(id)arg1 ;
-(BOOL)hasLeftCalloutButton;
-(BOOL)hasRightCalloutButton;
-(id)initDroppedPinAtCoordinate:(SCD_Struct_Ma2)arg1 title:(id)arg2 identifier:(id)arg3 ;
-(void)setImageURLString:(NSString *)arg1 ;
-(void)setHasLeftCalloutButton:(BOOL)arg1 ;
-(BOOL)draggable;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)title;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
-(CGPoint)centerOffset;
-(void)setCenterOffset:(CGPoint)arg1 ;
-(BOOL)animatesDrop;
-(void)setPinColor:(unsigned long long)arg1 ;
-(void)setAnimatesDrop:(BOOL)arg1 ;
-(unsigned long long)pinColor;
-(void)setCoordinate:(SCD_Struct_Ma2)arg1 ;
-(SCD_Struct_Ma2)coordinate;
-(void)setDraggable:(BOOL)arg1 ;
@end

