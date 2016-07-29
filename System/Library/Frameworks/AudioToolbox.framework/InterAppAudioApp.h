/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:32 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AudioToolbox/AudioToolbox-Structs.h>
@class BKSApplicationStateMonitor, NSString, UIImage, NSURL;

@interface InterAppAudioApp : NSObject {

	BKSApplicationStateMonitor* appMonitor;
	BOOL _isHost;
	BOOL _isCurrentApp;
	BOOL _isForeground;
	long long _key;
	NSString* _name;
	UIImage* _icon;
	NSURL* _url;

}

@property (nonatomic,readonly) long long key;                  //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSString * name;                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) UIImage * icon;                 //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) NSURL * url;                    //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL isHost;                    //@synthesize isHost=_isHost - In the implementation block
@property (nonatomic,readonly) BOOL isCurrentApp;              //@synthesize isCurrentApp=_isCurrentApp - In the implementation block
@property (nonatomic,readonly) BOOL isForeground;              //@synthesize isForeground=_isForeground - In the implementation block
-(BOOL)processRunningOnForeground:(int)arg1 ;
-(id)init:(const InterAppAudioAppInfo*)arg1 iconSize:(float)arg2 ;
-(BOOL)isHost;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(long long)key;
-(NSURL *)url;
-(UIImage *)icon;
-(BOOL)isForeground;
-(BOOL)isCurrentApp;
@end

