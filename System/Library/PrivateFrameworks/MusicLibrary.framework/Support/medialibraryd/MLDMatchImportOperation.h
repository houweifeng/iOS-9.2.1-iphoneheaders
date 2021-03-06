/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:33 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <medialibraryd/medialibraryd-Structs.h>
#import <medialibraryd/MLDDAAPImportOperation.h>

@interface MLDMatchImportOperation : MLDDAAPImportOperation
-(unsigned long long)importSource;
-(shared_ptr<MLDDAAPImportItem>*)importItemFromDAAPElement:(shared_ptr<DAAP::Element>*)arg1 ;
-(shared_ptr<MLDDAAPImportItem>*)containerImportItemFromDAAPElement:(shared_ptr<DAAP::Element>*)arg1 withTrackIds:(vector<long long, std::__1::allocator<long long> >*)arg2 ;
-(void)updateImportProgress:(float)arg1 ;
-(BOOL)_performMatchImportWithTransaction:(id)arg1 ;
-(void)main;
@end

