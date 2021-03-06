/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:44 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISOperation.h>

@interface RefreshUpdateDownloadOperation : ISOperation {

	long long _downloadID;

}

@property (readonly) long long downloadIdentifier; 
-(BOOL)_refreshDownloadUsingUpdate:(id)arg1 application:(id)arg2 ;
-(id)initWithDownloadIdentifier:(long long)arg1 ;
-(void)run;
-(long long)downloadIdentifier;
@end

