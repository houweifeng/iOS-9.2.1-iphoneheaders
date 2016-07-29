/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:39 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL;

@interface YTVideoReference : NSObject {

	NSURL* _contentURL;
	unsigned _duration;
	int _profile;

}
-(void)dealloc;
-(id)description;
-(unsigned)duration;
-(id)archiveDictionary;
-(int)profile;
-(id)contentURL;
-(id)initFromArchiveDictionary:(id)arg1 ;
-(id)initWithContentURL:(id)arg1 duration:(unsigned)arg2 profile:(int)arg3 ;
@end

