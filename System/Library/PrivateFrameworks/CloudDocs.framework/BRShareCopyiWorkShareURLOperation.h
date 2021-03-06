/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:56 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class CKShare, NSString;

@interface BRShareCopyiWorkShareURLOperation : BROperation {

	CKShare* _share;
	NSString* _appName;
	/*^block*/id _shareCopyURLCompletionBlock;

}

@property (copy) id shareCopyURLCompletionBlock;              //@synthesize shareCopyURLCompletionBlock=_shareCopyURLCompletionBlock - In the implementation block
@property (nonatomic,retain) CKShare * share;                 //@synthesize share=_share - In the implementation block
@property (nonatomic,retain) NSString * appName;              //@synthesize appName=_appName - In the implementation block
-(void)dealloc;
-(void)main;
-(void)setAppName:(NSString *)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(NSString *)appName;
-(id)shareCopyURLCompletionBlock;
-(void)setShareCopyURLCompletionBlock:(id)arg1 ;
-(id)initWithShare:(id)arg1 appName:(id)arg2 ;
-(void)setShare:(CKShare *)arg1 ;
-(CKShare *)share;
@end

