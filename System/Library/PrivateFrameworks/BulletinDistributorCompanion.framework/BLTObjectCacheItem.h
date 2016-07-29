/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:27:27 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSObject;

@interface BLTObjectCacheItem : NSObject {

	NSObject* _object;
	double _lastAccessedDate;

}

@property (nonatomic,readonly) NSObject * object;                    //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) double lastAccessedDate;              //@synthesize lastAccessedDate=_lastAccessedDate - In the implementation block
+(id)cacheItemWithObject:(id)arg1 ;
-(id)description;
-(NSObject *)object;
-(void)touch;
-(id)initWithObject:(id)arg1 ;
-(double)lastAccessedDate;
@end

