/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:28 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WFLSMMap;

@interface WFJudge : NSObject {

	WFLSMMap* map;

}
+(id)defaultLSMMapPath;
+(id)defaultJudge;
-(id)initWithMap:(id)arg1 ;
-(id)_pronounceOnWebpage:(id)arg1 ;
-(id)pronounceOnWebpage:(id)arg1 ;
-(id)pronounceOnPageContent:(id)arg1 pageURL:(id)arg2 debugPage:(id*)arg3 pageTitle:(id*)arg4 ;
-(id)pronounceOnPageContent:(id)arg1 pageURL:(id)arg2 whitelistUserPreferences:(id)arg3 debugPage:(id*)arg4 pageTitle:(id*)arg5 ;
@end

