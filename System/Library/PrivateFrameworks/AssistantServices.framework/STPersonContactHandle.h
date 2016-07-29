/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface STPersonContactHandle : NSObject <NSSecureCoding> {

	NSString* _handle;
	NSString* _label;
	unsigned long long _type;

}

@property (nonatomic,copy) NSString * handle;                      //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy) NSString * label;                       //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(BOOL)isEqualToPersonContactHandle:(id)arg1 ;
-(void)setHandle:(NSString *)arg1 ;
-(NSString *)handle;
@end

