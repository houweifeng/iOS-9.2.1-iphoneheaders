/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString, OADColorMap, OADColorScheme;

@interface CMState : NSObject {

	NSMutableDictionary* components;
	NSMutableDictionary* htmlResource;
	NSString* mResourceUrlPrefix;
	OADColorMap* mColorMap;
	OADColorScheme* mColorScheme;
	id mResources;
	int mSrcFormat;
	BOOL mIsThumbnail;
	BOOL mIsOnPhone;
	long long _textLevel;

}
-(void)dealloc;
-(id)init;
-(id)colorScheme;
-(void)setColorScheme:(id)arg1 ;
-(BOOL)isOnPhone;
-(long long)textLevel;
-(void)pushTextLevel;
-(void)popTextLevel;
-(void)setIsOnPhone:(BOOL)arg1 ;
-(void)setSrcFormat:(int)arg1 ;
-(BOOL)isThumbnail;
-(void)setIsThumbnail:(BOOL)arg1 ;
-(id)colorMap;
-(id)resources;
-(void)copyFromCMStateWithoutComponents:(id)arg1 ;
-(id)getHtmlResource;
-(void)setHtmlResource:(id)arg1 ;
-(id)resourceUrlPrefix;
-(int)sourceFormat;
-(id)componentByName:(id)arg1 ;
-(void)setComponentWithName:(id)arg1 value:(id)arg2 ;
-(void)setResourceUrlPrefix:(id)arg1 ;
-(void)setColorMap:(id)arg1 ;
-(void)setResources:(id)arg1 ;
-(BOOL)isOffice12;
@end

