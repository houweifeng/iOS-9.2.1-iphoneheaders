/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSValidationErrorLocalizationPolicy.h>

@class NSSet;

@interface NSMergedPolicyLocalizationPolicy : NSValidationErrorLocalizationPolicy {

	NSSet* _mergedPolicies;

}
-(void)addPolicy:(id)arg1 ;
-(void)_ensureFullLocalizationDictionaryIsLoaded;
-(id)_localizedStringForKey:(id)arg1 value:(void*)arg2 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

