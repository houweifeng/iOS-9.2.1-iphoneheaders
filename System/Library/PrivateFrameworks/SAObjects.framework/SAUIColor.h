/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SAUIColor : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * alpha; 
@property (assign,nonatomic) long long blueValue; 
@property (assign,nonatomic) long long greenValue; 
@property (assign,nonatomic) long long redValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)color;
+(id)colorWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)alpha;
-(void)setAlpha:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(long long)blueValue;
-(void)setBlueValue:(long long)arg1 ;
-(long long)greenValue;
-(void)setGreenValue:(long long)arg1 ;
-(long long)redValue;
-(void)setRedValue:(long long)arg1 ;
-(id)encodedClassName;
@end

