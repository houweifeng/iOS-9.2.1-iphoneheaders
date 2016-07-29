/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UILabel.h>

@class FocusedTruncationRenderer;

@interface MFSimpleLabel : UILabel {

	FocusedTruncationRenderer* _renderer;
	id _layout;
	NSRange _focusedRange;

}

@property (assign,nonatomic) NSRange focusedRange;              //@synthesize focusedRange=_focusedRange - In the implementation block
@property (nonatomic,retain) id layout;                         //@synthesize layout=_layout - In the implementation block
-(void)dealloc;
-(id)init;
-(void)setAttributedText:(id)arg1 ;
-(id)layout;
-(void)setLayout:(id)arg1 ;
-(void)drawTextInRect:(CGRect)arg1 ;
-(NSRange)focusedRange;
-(void)setFocusedRange:(NSRange)arg1 ;
@end

