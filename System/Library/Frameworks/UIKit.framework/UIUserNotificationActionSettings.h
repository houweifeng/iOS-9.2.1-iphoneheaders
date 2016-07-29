/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:40 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface UIUserNotificationActionSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _category;
	NSDictionary* _actionsByContext;

}

@property (nonatomic,copy) NSString * category;                          //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSDictionary * actionsByContext;              //@synthesize actionsByContext=_actionsByContext - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(id)actions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCategory:(id)arg1 actionsByContext:(id)arg2 ;
-(id)actionsForContext:(unsigned long long)arg1 ;
-(unsigned long long)_maximumActionsForContext:(unsigned long long)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)validatedSettings;
-(NSDictionary *)actionsByContext;
-(void)setActionsByContext:(NSDictionary *)arg1 ;
@end

