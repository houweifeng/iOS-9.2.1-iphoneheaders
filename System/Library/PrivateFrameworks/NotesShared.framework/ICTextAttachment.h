/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <UIFoundation/NSTextAttachment.h>
#import <libobjc.A.dylib/TTAttachment.h>

@class ICAttachment, NSMapTable, NSMutableSet, NSString;

@interface ICTextAttachment : NSTextAttachment <TTAttachment> {

	ICAttachment* _attachment;
	NSMapTable* _viewsMapTable;
	NSMutableSet* _swappedViewsSet;

}

@property (retain) ICAttachment * attachment;                             //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,retain) NSMapTable * viewsMapTable;                  //@synthesize viewsMapTable=_viewsMapTable - In the implementation block
@property (nonatomic,retain) NSMutableSet * swappedViewsSet;              //@synthesize swappedViewsSet=_swappedViewsSet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)textAttachmentIsContent:(id)arg1 ;
+(id)textAttachmentWithAttachment:(id)arg1 ;
+(id)textAttachmentWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)initWithAttachment:(id)arg1 ;
-(void)setAttachment:(ICAttachment *)arg1 ;
-(ICAttachment *)attachment;
-(CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(CGRect)arg2 glyphPosition:(CGPoint)arg3 characterIndex:(unsigned long long)arg4 ;
-(id)attachmentIdentifier;
-(id)attachmentUTI;
-(UIView*)viewForLayoutManagerNoCreate:(id)arg1 ;
-(BOOL)requiresSpaceAfterAttachmentForPrinting;
-(void)fixAttachmentForAttributedString:(id)arg1 range:(NSRange)arg2 ;
-(void)setViewsMapTable:(NSMapTable *)arg1 ;
-(void)setSwappedViewsSet:(NSMutableSet *)arg1 ;
-(NSMapTable *)viewsMapTable;
-(id)attachmentFileWrapper;
-(id)attachmentAsNSTextAttachment;
-(id)attachmentAttributesForAttributedString;
-(UIView*)newlyCreatedView;
-(UIView*)newlyCreatedViewForManualRendering;
-(NSMutableSet *)swappedViewsSet;
-(UIView*)viewForLayoutManager:(id)arg1 ;
-(void)clearViewForLayoutManager:(id)arg1 ;
-(id)allViews;
-(UIView*)swapOutOldViewByRecreatingViewFromLayoutManager:(id)arg1 toLayoutManager:(id)arg2 forManualRendering:(BOOL)arg3 ;
-(void)swapBackOldView:(UIView*)arg1 fromLayoutManager:(id)arg2 toLayoutManager:(id)arg3 ;
@end

