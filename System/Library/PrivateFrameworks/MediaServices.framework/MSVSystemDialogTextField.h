/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:17 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MSVSystemDialogTextField : NSObject {

	BOOL _secure;
	NSString* _title;
	long long _keyboardType;

}

@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (assign,getter=isSecure,nonatomic) BOOL secure;              //@synthesize secure=_secure - In the implementation block
@property (assign,nonatomic) long long keyboardType;                   //@synthesize keyboardType=_keyboardType - In the implementation block
+(id)textFieldWithTitle:(id)arg1 secure:(BOOL)arg2 ;
+(id)textFieldWithTitle:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setSecure:(BOOL)arg1 ;
-(BOOL)isSecure;
-(id)initWithTitle:(id)arg1 ;
-(long long)keyboardType;
-(void)setKeyboardType:(long long)arg1 ;
@end

