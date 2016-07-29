/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:26:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface UIKBKeyDisplayContents : NSObject {

	BOOL _fillPath;
	BOOL _force1xImages;
	BOOL _stringKeycapOverImage;
	BOOL _flipImageHorizontally;
	NSString* _displayString;
	NSString* _displayStringImage;
	NSArray* _secondaryDisplayStrings;
	NSArray* _secondaryDisplayStringImages;
	NSArray* _variantDisplayContents;
	NSArray* _highlightedVariantsList;
	long long _displayPathType;
	UIKBKeyDisplayContents* _fallbackContents;

}

@property (nonatomic,retain) NSString * displayString;                               //@synthesize displayString=_displayString - In the implementation block
@property (nonatomic,retain) NSString * displayStringImage;                          //@synthesize displayStringImage=_displayStringImage - In the implementation block
@property (nonatomic,retain) NSArray * secondaryDisplayStrings;                      //@synthesize secondaryDisplayStrings=_secondaryDisplayStrings - In the implementation block
@property (nonatomic,retain) NSArray * secondaryDisplayStringImages;                 //@synthesize secondaryDisplayStringImages=_secondaryDisplayStringImages - In the implementation block
@property (nonatomic,retain) NSArray * variantDisplayContents;                       //@synthesize variantDisplayContents=_variantDisplayContents - In the implementation block
@property (nonatomic,retain) NSArray * highlightedVariantsList;                      //@synthesize highlightedVariantsList=_highlightedVariantsList - In the implementation block
@property (assign,nonatomic) long long displayPathType;                              //@synthesize displayPathType=_displayPathType - In the implementation block
@property (assign,nonatomic) BOOL fillPath;                                          //@synthesize fillPath=_fillPath - In the implementation block
@property (assign,nonatomic) BOOL force1xImages;                                     //@synthesize force1xImages=_force1xImages - In the implementation block
@property (assign,nonatomic) BOOL stringKeycapOverImage;                             //@synthesize stringKeycapOverImage=_stringKeycapOverImage - In the implementation block
@property (assign,nonatomic) BOOL flipImageHorizontally;                             //@synthesize flipImageHorizontally=_flipImageHorizontally - In the implementation block
@property (nonatomic,retain) UIKBKeyDisplayContents * fallbackContents;              //@synthesize fallbackContents=_fallbackContents - In the implementation block
+(id)displayContents;
-(void)dealloc;
-(id)description;
-(void)setDisplayString:(NSString *)arg1 ;
-(NSString *)displayString;
-(void)setVariantDisplayContents:(NSArray *)arg1 ;
-(void)setSecondaryDisplayStrings:(NSArray *)arg1 ;
-(NSArray *)secondaryDisplayStrings;
-(void)setHighlightedVariantsList:(NSArray *)arg1 ;
-(void)setDisplayPathType:(long long)arg1 ;
-(void)setDisplayStringImage:(NSString *)arg1 ;
-(NSArray *)highlightedVariantsList;
-(NSString *)displayStringImage;
-(void)setForce1xImages:(BOOL)arg1 ;
-(NSArray *)secondaryDisplayStringImages;
-(NSArray *)variantDisplayContents;
-(long long)displayPathType;
-(BOOL)fillPath;
-(BOOL)force1xImages;
-(UIKBKeyDisplayContents *)fallbackContents;
-(BOOL)stringKeycapOverImage;
-(BOOL)flipImageHorizontally;
-(void)setSecondaryDisplayStringImages:(NSArray *)arg1 ;
-(void)setFillPath:(BOOL)arg1 ;
-(void)setFallbackContents:(UIKBKeyDisplayContents *)arg1 ;
-(void)setStringKeycapOverImage:(BOOL)arg1 ;
-(void)setFlipImageHorizontally:(BOOL)arg1 ;
@end

