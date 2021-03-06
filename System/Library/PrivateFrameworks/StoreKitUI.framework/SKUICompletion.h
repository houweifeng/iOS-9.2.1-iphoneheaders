/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:47 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SKUICacheCoding.h>

@class NSString, NSMutableDictionary;

@interface SKUICompletion : NSObject <SKUICacheCoding> {

	NSString* _alternateTitle;
	NSString* _title;
	NSString* _URLString;

}

@property (nonatomic,readonly) NSString * alternateTitle;                              //@synthesize alternateTitle=_alternateTitle - In the implementation block
@property (nonatomic,readonly) NSString * title;                                       //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * URLString;                                   //@synthesize URLString=_URLString - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSMutableDictionary * cacheRepresentation; 
-(NSString *)title;
-(NSString *)URLString;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(NSMutableDictionary *)cacheRepresentation;
-(NSString *)alternateTitle;
-(id)initWithCompletionDictionary:(id)arg1 ;
@end

