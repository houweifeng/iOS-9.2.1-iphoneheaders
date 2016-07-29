/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:16 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>

@class NSString;

@interface SXComponentAnchor : SXJSONObject

@property (nonatomic,readonly) long long targetAnchorPosition; 
@property (nonatomic,readonly) long long originAnchorPosition; 
@property (nonatomic,readonly) NSString * targetComponentIdentifier; 
@property (nonatomic,readonly) NSRange range; 
-(NSRange)range;
-(NSString *)targetComponentIdentifier;
-(long long)originAnchorPosition;
-(long long)targetAnchorPosition;
-(long long)anchorAlignmentForString:(id)arg1 ;
-(long long)originAnchorPositionWithValue:(id)arg1 withType:(int)arg2 ;
-(long long)targetAnchorPositionWithValue:(id)arg1 withType:(int)arg2 ;
@end

