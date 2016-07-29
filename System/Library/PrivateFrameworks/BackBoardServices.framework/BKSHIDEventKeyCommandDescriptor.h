/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventDescriptor.h>

@class NSString;

@interface BKSHIDEventKeyCommandDescriptor : BKSHIDEventDescriptor {

	NSString* _input;
	long long _modifierFlags;
	NSString* _unmodifiedInput;
	NSString* _shiftModifiedInput;
	NSString* _commandModifiedInput;

}

@property (nonatomic,retain,readonly) NSString * input;                    //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) long long modifierFlags;                    //@synthesize modifierFlags=_modifierFlags - In the implementation block
@property (nonatomic,readonly) BOOL isTextualDescriptor; 
@property (nonatomic,retain) NSString * unmodifiedInput;                   //@synthesize unmodifiedInput=_unmodifiedInput - In the implementation block
@property (nonatomic,retain) NSString * shiftModifiedInput;                //@synthesize shiftModifiedInput=_shiftModifiedInput - In the implementation block
@property (nonatomic,retain) NSString * commandModifiedInput;              //@synthesize commandModifiedInput=_commandModifiedInput - In the implementation block
+(BOOL)_keyCodeIsModifierKey:(long long)arg1 ;
+(id)keyCommandDescriptorForEvent:(IOHIDEventRef)arg1 gsKeyboard:(GSKeyboardRef)arg2 ;
+(BOOL)_shouldMatchKeyCommandsWithKeyCode:(long long)arg1 gsKeyboard:(GSKeyboardRef)arg2 ;
+(id)descriptorWithInput:(id)arg1 modifierFlags:(long long)arg2 ;
+(BOOL)supportsSecureCoding;
-(id)initWithInput:(id)arg1 modifierFlags:(long long)arg2 ;
-(NSString *)commandModifiedInput;
-(void)setCommandModifiedInput:(NSString *)arg1 ;
-(BOOL)isTextualDescriptor;
-(long long)describes:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)input;
-(long long)modifierFlags;
-(void)setUnmodifiedInput:(NSString *)arg1 ;
-(void)setShiftModifiedInput:(NSString *)arg1 ;
-(NSString *)unmodifiedInput;
-(NSString *)shiftModifiedInput;
@end

