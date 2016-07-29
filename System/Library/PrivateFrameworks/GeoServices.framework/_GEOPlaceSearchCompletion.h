/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:29:21 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOCompletion.h>

@class NSArray, NSString;

@interface _GEOPlaceSearchCompletion : NSObject <GEOCompletion> {

	NSArray* _groups;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * groups;                    //@synthesize groups=_groups - In the implementation block
-(void)dealloc;
-(NSArray *)groups;
-(id)initWithResponse:(id)arg1 traits:(id)arg2 mapItems:(id)arg3 ;
@end

