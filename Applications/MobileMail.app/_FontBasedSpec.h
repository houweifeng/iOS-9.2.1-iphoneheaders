/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIFont, MessageHeaderLayoutToolbox;

@interface _FontBasedSpec : NSObject {

	UIFont* _font;
	MessageHeaderLayoutToolbox* _toolbox;

}

@property (assign) UIFont * font;                                     //@synthesize font=_font - In the implementation block
@property (assign) MessageHeaderLayoutToolbox * toolbox;              //@synthesize toolbox=_toolbox - In the implementation block
+(id)fontSpecWithFont:(id)arg1 ;
-(double)leadingValue;
-(double)leadingValueWithCoefficient:(double)arg1 ;
-(double)yOriginFromBaselineWithLeadingCoefficient:(double)arg1 ;
-(MessageHeaderLayoutToolbox *)toolbox;
-(void)setToolbox:(MessageHeaderLayoutToolbox *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
@end

