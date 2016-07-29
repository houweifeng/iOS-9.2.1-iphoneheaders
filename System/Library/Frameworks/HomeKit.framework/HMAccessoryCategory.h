/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:24:31 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMObjectMerge.h>

@class NSString, NSUUID;

@interface HMAccessoryCategory : NSObject <NSSecureCoding, HMObjectMerge> {

	NSString* _categoryType;
	NSString* _name;

}

@property (nonatomic,copy) NSString * categoryType;                               //@synthesize categoryType=_categoryType - In the implementation block
@property (nonatomic,copy,readonly) NSString * localizedDescription; 
@property (nonatomic,copy) NSString * name;                                       //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(NSString *)categoryType;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)localizedDescription;
-(void)setCategoryType:(NSString *)arg1 ;
-(NSUUID *)uniqueIdentifier;
-(BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2 ;
-(id)initWithType:(id)arg1 name:(id)arg2 ;
@end

