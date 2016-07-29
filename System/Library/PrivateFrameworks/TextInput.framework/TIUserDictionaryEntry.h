/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSNumber;


@protocol TIUserDictionaryEntry <NSObject>
@property (nonatomic,copy) NSString * phrase; 
@property (nonatomic,copy) NSString * shortcut; 
@property (nonatomic,retain) NSNumber * timestamp; 
@required
-(NSNumber *)timestamp;
-(void)setTimestamp:(id)arg1;
-(NSString *)phrase;
-(void)setShortcut:(id)arg1;
-(void)setPhrase:(id)arg1;
-(NSString *)shortcut;

@end
