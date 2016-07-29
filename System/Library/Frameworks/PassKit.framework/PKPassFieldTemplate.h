/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:59 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, UIFont;

@interface PKPassFieldTemplate : NSObject {

	NSNumber* _boxedTextAlignment;
	NSNumber* _boxedVerticalPadding;
	NSNumber* _boxedSuppressesLabel;
	NSNumber* _boxedValueCanWrap;
	NSNumber* _boxedSuppressesEmptyLabel;
	UIFont* _labelFont;
	UIFont* _valueFont;
	Class _viewSubclass;

}

@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) double verticalPadding; 
@property (nonatomic,retain) UIFont * labelFont;                                //@synthesize labelFont=_labelFont - In the implementation block
@property (nonatomic,retain) UIFont * valueFont;                                //@synthesize valueFont=_valueFont - In the implementation block
@property (assign,nonatomic) BOOL suppressesLabel; 
@property (assign,nonatomic) BOOL suppressesEmptyLabel; 
@property (assign,nonatomic) BOOL valueCanWrap; 
@property (nonatomic,retain) Class viewSubclass;                                //@synthesize viewSubclass=_viewSubclass - In the implementation block
@property (nonatomic,retain) NSNumber * boxedTextAlignment;                     //@synthesize boxedTextAlignment=_boxedTextAlignment - In the implementation block
@property (nonatomic,retain) NSNumber * boxedVerticalPadding;                   //@synthesize boxedVerticalPadding=_boxedVerticalPadding - In the implementation block
@property (nonatomic,retain) NSNumber * boxedSuppressesLabel;                   //@synthesize boxedSuppressesLabel=_boxedSuppressesLabel - In the implementation block
@property (nonatomic,retain) NSNumber * boxedValueCanWrap;                      //@synthesize boxedValueCanWrap=_boxedValueCanWrap - In the implementation block
@property (nonatomic,retain) NSNumber * boxedSuppressesEmptyLabel;              //@synthesize boxedSuppressesEmptyLabel=_boxedSuppressesEmptyLabel - In the implementation block
+(id)fieldTemplateWithTextAlignment:(long long)arg1 ;
+(id)_templateByResolvingTemplate:(id)arg1 withDefault:(id)arg2 ;
+(id)fieldTemplateWithVerticalPadding:(double)arg1 ;
+(id)fieldTemplateWithViewSubclass:(Class)arg1 ;
-(void)dealloc;
-(void)setTextAlignment:(long long)arg1 ;
-(long long)textAlignment;
-(double)verticalPadding;
-(void)setVerticalPadding:(double)arg1 ;
-(void)setValueFont:(UIFont *)arg1 ;
-(UIFont *)valueFont;
-(void)setLabelFont:(UIFont *)arg1 ;
-(void)setViewSubclass:(Class)arg1 ;
-(NSNumber *)boxedTextAlignment;
-(void)setBoxedTextAlignment:(NSNumber *)arg1 ;
-(NSNumber *)boxedVerticalPadding;
-(void)setBoxedVerticalPadding:(NSNumber *)arg1 ;
-(NSNumber *)boxedSuppressesLabel;
-(void)setBoxedSuppressesLabel:(NSNumber *)arg1 ;
-(NSNumber *)boxedSuppressesEmptyLabel;
-(void)setBoxedSuppressesEmptyLabel:(NSNumber *)arg1 ;
-(NSNumber *)boxedValueCanWrap;
-(void)setBoxedValueCanWrap:(NSNumber *)arg1 ;
-(UIFont *)labelFont;
-(Class)viewSubclass;
-(BOOL)suppressesLabel;
-(void)setSuppressesLabel:(BOOL)arg1 ;
-(BOOL)suppressesEmptyLabel;
-(void)setSuppressesEmptyLabel:(BOOL)arg1 ;
-(BOOL)valueCanWrap;
-(void)setValueCanWrap:(BOOL)arg1 ;
@end

