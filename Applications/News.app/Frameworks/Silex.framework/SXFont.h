/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIFont;

@interface SXFont : NSObject {

	BOOL _isObfuscated;
	NSString* _fontName;
	double _fontSize;
	NSString* _filePath;
	UIFont* _font;

}

@property (nonatomic,readonly) NSString * fontName;              //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,readonly) double fontSize;                  //@synthesize fontSize=_fontSize - In the implementation block
@property (nonatomic,readonly) NSString * filePath;              //@synthesize filePath=_filePath - In the implementation block
@property (assign,nonatomic) BOOL isObfuscated;                  //@synthesize isObfuscated=_isObfuscated - In the implementation block
@property (nonatomic,retain) UIFont * font;                      //@synthesize font=_font - In the implementation block
-(id)initWithFontName:(id)arg1 withSize:(double)arg2 path:(id)arg3 isObfuscated:(BOOL)arg4 ;
-(BOOL)isObfuscated;
-(void)setIsObfuscated:(BOOL)arg1 ;
-(id)UIFont;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(NSString *)fontName;
-(NSString *)filePath;
-(double)fontSize;
-(id)initWithFont:(id)arg1 ;
@end

