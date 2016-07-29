/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:20 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEOGeocodeProvider : NSObject {

	/*^block*/id _batchSuccessHandler;
	/*^block*/id _errorHandler;

}

@property (nonatomic,copy) id batchSuccessHandler;              //@synthesize batchSuccessHandler=_batchSuccessHandler - In the implementation block
@property (nonatomic,copy) id errorHandler;                     //@synthesize errorHandler=_errorHandler - In the implementation block
+(id)providerName;
-(void)cancel;
-(void)dealloc;
-(id)errorHandler;
-(void)setErrorHandler:(id)arg1 ;
-(void)setBatchSuccessHandler:(id)arg1 ;
-(void)batchReverseGeocode:(id)arg1 success:(/*^block*/id)arg2 error:(/*^block*/id)arg3 ;
-(id)batchSuccessHandler;
@end

