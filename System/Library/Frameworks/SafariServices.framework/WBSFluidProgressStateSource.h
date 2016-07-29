/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:11 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSFluidProgressStateSource <NSObject>
@required
-(double)estimatedProgress;
-(id)progressState;
-(id)expectedOrCurrentURL;
-(void)clearFluidProgressState;
-(BOOL)createFluidProgressState;
-(BOOL)hasFailedURL;

@end

