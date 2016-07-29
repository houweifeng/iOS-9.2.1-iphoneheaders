/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class UITraitCollection, NSSet;

@interface _UIRelationshipTraitStorageRecord : NSObject <NSCoding> {

	UITraitCollection* _traitCollection;
	NSSet* _addedObjects;
	NSSet* _removedObjects;

}

@property (nonatomic,readonly) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,readonly) NSSet * addedObjects;                             //@synthesize addedObjects=_addedObjects - In the implementation block
@property (nonatomic,readonly) NSSet * removedObjects;                           //@synthesize removedObjects=_removedObjects - In the implementation block
-(UITraitCollection *)traitCollection;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithTraitCollection:(id)arg1 addedObjects:(id)arg2 removedObjects:(id)arg3 ;
-(NSSet *)addedObjects;
-(NSSet *)removedObjects;
@end

