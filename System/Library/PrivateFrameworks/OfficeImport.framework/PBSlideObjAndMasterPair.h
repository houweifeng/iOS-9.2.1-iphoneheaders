/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:04 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PDSlide;

@interface PBSlideObjAndMasterPair : NSObject {

	PDSlide* mSlide;
	int mMasterId;

}
+(id)createPair:(id)arg1 masterId:(int)arg2 ;
-(void)dealloc;
-(void)setSlide:(id)arg1 masterId:(int)arg2 ;
-(id)slide;
-(int)masterId;
@end

