/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:45 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/ICAttachmentModel.h>

@interface ICAttachmentImageModel : ICAttachmentModel
+(id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1 ;
-(id)activityItems;
-(BOOL)hasPreviews;
-(/*^block*/id)genericListThumbnailCreator;
-(/*^block*/id)genericBrickThumbnailCreator;
-(void)generatePreviews;
-(void)updateFileBasedAttributes;
-(BOOL)showThumbnailInNoteList;
-(BOOL)hasThumbnailImage;
-(void)updateAttachmentSize;
@end

