/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:25 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ASAsset, NSArray, NSNumber, NSString;

@interface VTAsset : NSObject {

	ASAsset* _asset;

}

@property (nonatomic,readonly) NSArray * languages; 
@property (getter=isInstalled,nonatomic,readonly) BOOL installed; 
@property (nonatomic,readonly) NSNumber * version; 
@property (nonatomic,readonly) NSString * path; 
-(id)description;
-(NSString *)path;
-(NSNumber *)version;
-(NSArray *)languages;
-(BOOL)isInstalled;
-(id)initWithASAsset:(id)arg1 ;
@end

