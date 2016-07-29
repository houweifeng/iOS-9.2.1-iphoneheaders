/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CNLabelValuePair : NSObject <NSCopying> {

	NSString* _label;
	id _value;

}

@property (copy,readonly) NSString * label;              //@synthesize label=_label - In the implementation block
@property (copy,readonly) id value;                      //@synthesize value=_value - In the implementation block
+(id)labeledValueWithLabel:(id)arg1 value:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)value;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(id)initWithLabel:(id)arg1 value:(id)arg2 ;
@end

