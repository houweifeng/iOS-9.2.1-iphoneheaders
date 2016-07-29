/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIButton.h>
#import <Silex/SXVideoOverlayButton.h>

@interface SXFlatVideoOverlayButton : UIButton <SXVideoOverlayButton> {

	long long _style;
	id _target;
	SEL _action;

}
-(void)recalculateBackdropView;
-(id)initWithStyle:(long long)arg1 ;
-(long long)style;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(id)_normalButtonImage;
-(id)_highlightedButtonImage;
-(id)_createOverlayImageWithBackgroundWhite:(double)arg1 backgroundAlpha:(double)arg2 glyphAlpha:(double)arg3 ;
-(void)_handleTap:(id)arg1 ;
@end

