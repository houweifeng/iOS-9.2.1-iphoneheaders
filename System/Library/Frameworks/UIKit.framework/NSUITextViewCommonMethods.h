/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSTextContainer;


@protocol NSUITextViewCommonMethods <NSTextLayoutOrientationProvider,NSTextContainerView>
@property (assign,nonatomic,__weak) NSTextContainer * textContainer; 
@property (assign,nonatomic) NSRange markedRange; 
@optional
-(NSRange)markedRange;
-(void)addTextAttachmentView:(id)arg1 forAttachment:(id)arg2;
-(NSTextContainer *)textContainer;
-(void)setTextContainer:(id)arg1;
-(void)setMarkedRange:(NSRange)arg1;

@required
-(CGPoint*)textContainerOrigin;
-(CGRect*)visibleRect;
-(UIEdgeInsets*)textContainerInset;
-(void)setConstrainedFrameSize:(CGSize)arg1;
-(void)invalidateTextContainerOrigin;
-(CGSize*)minSize;
-(BOOL)isHorizontallyResizable;
-(void)setNeedsDisplayInRect:(CGRect)arg1 avoidAdditionalLayout:(BOOL)arg2;

@end

