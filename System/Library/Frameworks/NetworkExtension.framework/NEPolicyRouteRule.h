/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NEPrettyDescription.h>

@class NSString;

@interface NEPolicyRouteRule : NSObject <NEPrettyDescription> {

	long long _action;
	NSString* _interfaceName;
	long long _type;

}

@property (assign) long long action;                    //@synthesize action=_action - In the implementation block
@property (copy) NSString * interfaceName;              //@synthesize interfaceName=_interfaceName - In the implementation block
@property (assign) long long type;                      //@synthesize type=_type - In the implementation block
+(id)routeRuleWithAction:(long long)arg1 forInterfaceName:(id)arg2 ;
+(id)routeRuleWithAction:(long long)arg1 forType:(long long)arg2 ;
-(id)init;
-(id)description;
-(void)setType:(long long)arg1 ;
-(long long)type;
-(long long)action;
-(void)setAction:(long long)arg1 ;
-(BOOL)validate;
-(void)setInterfaceName:(NSString *)arg1 ;
-(NSString *)interfaceName;
-(id)actionString;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)initInternal;
-(BOOL)addTLVsToMessage:(id)arg1 ;
-(unsigned char)actionValue;
-(unsigned char)typeValue;
-(id)typeString;
@end

