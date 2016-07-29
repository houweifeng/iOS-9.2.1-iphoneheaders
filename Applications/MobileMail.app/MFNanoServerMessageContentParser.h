/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NNMKHTMLParser;

@interface MFNanoServerMessageContentParser : NSObject {

	NNMKHTMLParser* _htmlParser;

}
-(id)parseMessage:(id)arg1 maxImageWidth:(double)arg2 messageBody:(id*)arg3 imageAttachmentsURLsToLoad:(id*)arg4 imageAttachmentsLoaded:(id*)arg5 ;
-(id)_attachmentForURL:(id)arg1 mimePart:(id)arg2 ;
-(id)_nanoAttachmentForURL:(id)arg1 mimePart:(id)arg2 ;
-(BOOL)_parseMimeParts:(id)arg1 messageBody:(id)arg2 attributedString:(id)arg3 maxLength:(unsigned long long)arg4 maxImageWidth:(double)arg5 maxImageAttachments:(unsigned long long)arg6 shouldTryAlternatives:(BOOL)arg7 urlsForValidation:(id)arg8 nanoAttachmentsList:(id)arg9 imageAttachmentsURLsToLoad:(id)arg10 imageAttachmentsLoaded:(id)arg11 usingAlternativePart:(BOOL*)arg12 partiallyLoaded:(BOOL*)arg13 ;
-(id)_parseTextAttachmentMimePart:(id)arg1 messageBody:(id)arg2 maxImageAttachments:(unsigned long long)arg3 nanoAttachmentsList:(id)arg4 imageAttachmentsURLsToLoad:(id)arg5 ;
-(id)_parseStringMimePart:(id)arg1 maxLength:(unsigned long long)arg2 ;
-(id)_parseWebMessageDocumentMimePart:(id)arg1 messageBody:(id)arg2 maxLength:(unsigned long long)arg3 maxImageWidth:(double)arg4 maxImageAttachments:(unsigned long long)arg5 shouldTryAlternatives:(BOOL)arg6 urlsForValidation:(id)arg7 finalNanoAttachmentsList:(id)arg8 finalImageAttachmentsURLsToLoad:(id)arg9 finalImageAttachmentsLoaded:(id)arg10 usingAlternativePart:(BOOL*)arg11 partiallyLoaded:(BOOL*)arg12 ;
-(void)_parseAttachmentsFromMimePart:(id)arg1 messageBody:(id)arg2 maxImageAttachments:(unsigned long long)arg3 nanoAttachmentsList:(id)arg4 imageAttachmentsURLsToLoad:(id)arg5 ;
-(void)dealloc;
@end

