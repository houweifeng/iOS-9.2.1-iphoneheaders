/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:42 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/SpringBoardPlugins/InCallLockScreen.lockbundle/InCallLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface PHCallParticipantLabelDescriptor : NSObject {

	BOOL _dynamic;
	long long _type;
	NSString* _string;
	NSArray* _strings;

}

@property (assign,nonatomic) long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * string;                            //@synthesize string=_string - In the implementation block
@property (nonatomic,retain) NSArray * strings;                          //@synthesize strings=_strings - In the implementation block
@property (assign,getter=isDynamic,nonatomic) BOOL dynamic;              //@synthesize dynamic=_dynamic - In the implementation block
+(id)labelDescriptorWithArray:(id)arg1 ;
+(id)labelDescriptorWithFormat:(id)arg1 ;
+(id)labelDescriptorWithString:(id)arg1 ;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSString *)string;
-(void)setDynamic:(BOOL)arg1 ;
-(void)setString:(NSString *)arg1 ;
-(void)setStrings:(NSArray *)arg1 ;
-(NSArray *)strings;
-(BOOL)isDynamic;
@end

