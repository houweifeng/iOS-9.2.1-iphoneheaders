/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:00 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFMailAttachmentPlugInDelegate <NSObject>
@optional
-(BOOL)attachment:(id)arg1 startDownloadWithProgress:(id)arg2 userInitiated:(BOOL)arg3;
-(void)displayAttachmentTooLargeAlert;
-(void)attachment:(id)arg1 displayMenuFromRect:(CGRect)arg2 iconRect:(CGRect)arg3 inView:(id)arg4;
-(id)attachment:(id)arg1 iconForSize:(CGSize)arg2;
-(BOOL)attachment:(id)arg1 cancelDownloadWithProgress:(id)arg2;
-(BOOL)startDownloadAndSaveToCameraRollForAttachment:(id)arg1 withDownloadProgress:(id)arg2;
-(BOOL)isAttachmentDownloadable:(id)arg1;
-(void)attachment:(id)arg1 displayViewerFromRect:(CGRect)arg2 inView:(id)arg3;
-(void)attachment:(id)arg1 didFinishDownloadWithProgress:(id)arg2;
-(id)attachmentWithIdentifier:(id)arg1;

@end

