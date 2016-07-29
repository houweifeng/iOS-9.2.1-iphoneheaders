/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:49 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@class SSURLRequestProperties;

@interface SUXMLHTTPRequestOperation : ISOperation {

	/*^block*/id _outputBlock;
	SSURLRequestProperties* _requestProperties;

}

@property (copy) id outputBlock; 
-(void)run;
-(BOOL)_isAllowedURL:(id)arg1 withURLBag:(id)arg2 ;
-(void)setOutputBlock:(id)arg1 ;
-(id)initWithRequestProperties:(id)arg1 ;
-(id)outputBlock;
@end

