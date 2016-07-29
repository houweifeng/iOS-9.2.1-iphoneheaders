/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIFoundation/NSTextAttachment.h>

@class _MFAtomLayoutView;

@interface _MFAtomAttachment : NSTextAttachment {

	_MFAtomLayoutView* _atomView;
	id _representedObject;

}

@property (nonatomic,retain,readonly) _MFAtomLayoutView * atomView;              //@synthesize atomView=_atomView - In the implementation block
@property (nonatomic,retain,readonly) id representedObject;                      //@synthesize representedObject=_representedObject - In the implementation block
+(id)attachmentWithAtomLayoutView:(id)arg1 representedObject:(id)arg2 ;
-(id)initWithAtomLayoutView:(id)arg1 representedObject:(id)arg2 ;
-(void)dealloc;
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(id)representedObject;
-(_MFAtomLayoutView *)atomView;
-(id)imageForBounds:(CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3 ;
@end

