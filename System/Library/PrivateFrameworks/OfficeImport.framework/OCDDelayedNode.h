/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OCDDelayedNodeContext;
@interface OCDDelayedNode : NSObject {

	id<OCDDelayedNodeContext> mDelayedContext;
	BOOL mLoaded;

}
-(void)dealloc;
-(BOOL)isLoaded;
-(BOOL)load;
-(void)setLoaded:(BOOL)arg1 ;
-(void)setDelayedContext:(id)arg1 ;
-(id)delayedContext;
@end

