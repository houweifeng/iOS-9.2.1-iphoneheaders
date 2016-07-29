/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:19 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOSearchProvider.h>
#import <libobjc.A.dylib/PBRequesterDelegate.h>

@class GEORequester, NSString;

@interface GEOVoltaireSearchProvider : GEOSearchProvider <PBRequesterDelegate> {

	GEORequester* _requester;
	/*^block*/id _finished;
	BOOL _cancelled;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(void)dealloc;
-(void)requesterDidCancel:(id)arg1 ;
-(void)requester:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requesterDidFinish:(id)arg1 ;
-(void)search:(id)arg1 timeout:(long long)arg2 useBackgroundConnection:(BOOL)arg3 finished:(/*^block*/id)arg4 error:(/*^block*/id)arg5 ;
@end

