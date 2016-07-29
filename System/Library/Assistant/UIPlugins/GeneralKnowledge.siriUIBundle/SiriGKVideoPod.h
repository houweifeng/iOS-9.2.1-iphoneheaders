/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:22:35 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Assistant/UIPlugins/GeneralKnowledge.siriUIBundle/GeneralKnowledge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeneralKnowledge/GeneralKnowledge-Structs.h>
#import <GeneralKnowledge/SiriGKBasePod.h>

@class NSMutableArray;

@interface SiriGKVideoPod : SiriGKBasePod {

	NSMutableArray* _viewArray;

}
-(id)initWithPod:(id)arg1 safariBackURL:(id)arg2 usingPersistentStore:(id)arg3 ;
-(long long)viewCount;
-(double)minimumLineSpacing;
-(double)minimumInteritemSpacing;
-(UIEdgeInsets)edgeInsets;
-(id)footerView;
-(id)viewAtIndex:(long long)arg1 ;
-(long long)keylineType;
@end

