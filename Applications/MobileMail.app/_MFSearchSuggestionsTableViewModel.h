/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:01 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSMutableDictionary;

@interface _MFSearchSuggestionsTableViewModel : NSObject <NSCopying> {

	/*^block*/id _comparator;
	NSMutableArray* _orderedIdentifiers;
	NSMutableDictionary* _objectsByIdentifier;

}

@property (nonatomic,readonly) unsigned long long numberOfSections; 
-(id)initWithSectionComparator:(/*^block*/id)arg1 ;
-(id)sectionForIdentifier:(id)arg1 ;
-(void)setSection:(id)arg1 forIdentifier:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(unsigned long long)numberOfSections;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)enumerateSections:(/*^block*/id)arg1 ;
-(id)identifierAtIndex:(unsigned long long)arg1 ;
-(id)sectionAtIndex:(unsigned long long)arg1 ;
@end

