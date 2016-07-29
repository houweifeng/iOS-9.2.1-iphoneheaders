/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:46 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticExtensions/DEAttachmentItem.h>

@class UIImage;

@interface DEAttachmentVideo : DEAttachmentItem {

	UIImage* _thumbnail;

}

@property (nonatomic,retain) UIImage * thumbnail;              //@synthesize thumbnail=_thumbnail - In the implementation block
+(id)attachmentVideoWithURL:(id)arg1 ;
+(id)attachmentVideoWithAssetURL:(id)arg1 andThumbnail:(id)arg2 ;
-(UIImage *)thumbnail;
-(void)setThumbnail:(UIImage *)arg1 ;
-(id)generateThumbnailFromURL:(id)arg1 ;
@end

