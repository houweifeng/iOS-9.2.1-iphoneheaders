/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:55 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SAWebAcePicture : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * format; 
@property (nonatomic,copy) NSNumber * height; 
@property (nonatomic,copy) NSNumber * width; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)acePicture;
+(id)acePictureWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSNumber *)width;
-(NSNumber *)height;
-(void)setWidth:(NSNumber *)arg1 ;
-(void)setHeight:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(NSString *)format;
-(void)setFormat:(NSString *)arg1 ;
-(id)encodedClassName;
@end

