/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:03 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface IKCSSParseObject : NSObject {

	NSArray* _cssValue;
	long long _type;

}

@property (nonatomic,retain) NSArray * cssValue;              //@synthesize cssValue=_cssValue - In the implementation block
@property (assign,nonatomic) long long type;                  //@synthesize type=_type - In the implementation block
+(id)stringifyList:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSArray *)cssValue;
-(void)setCssValue:(NSArray *)arg1 ;
@end

