/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:32:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTasks/SiriTasks-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSArray;

@interface _STVocabularyGenerationDocument : NSObject <NSCopying> {

	NSMutableDictionary* _itemsBySiriIDCache;
	NSMutableDictionary* _itemsByStringCache;
	BOOL _resetOnNextSync;
	BOOL _haveAssignedAllSiriIDs;
	NSString* _appBundleID;
	NSString* _intentSlot;
	NSString* _validity;
	NSString* _thisGeneration;
	NSArray* _vocabularyItems;

}

@property (assign,nonatomic) BOOL resetOnNextSync;                     //@synthesize resetOnNextSync=_resetOnNextSync - In the implementation block
@property (nonatomic,copy) NSString * appBundleID;                     //@synthesize appBundleID=_appBundleID - In the implementation block
@property (nonatomic,copy) NSString * intentSlot;                      //@synthesize intentSlot=_intentSlot - In the implementation block
@property (nonatomic,copy) NSString * validity;                        //@synthesize validity=_validity - In the implementation block
@property (nonatomic,copy) NSString * thisGeneration;                  //@synthesize thisGeneration=_thisGeneration - In the implementation block
@property (nonatomic,copy) NSArray * vocabularyItems;                  //@synthesize vocabularyItems=_vocabularyItems - In the implementation block
@property (assign,nonatomic) BOOL haveAssignedAllSiriIDs;              //@synthesize haveAssignedAllSiriIDs=_haveAssignedAllSiriIDs - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)_initWithDictionary:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)appBundleID;
-(void)setAppBundleID:(NSString *)arg1 ;
-(void)setVocabularyItems:(NSArray *)arg1 ;
-(void)setIntentSlot:(NSString *)arg1 ;
-(id)diffFromPreviousDocument:(id)arg1 ;
-(void)assignMissingSiriIDsForOptimalDiffFromPreviousDocument:(id)arg1 ;
-(NSArray *)vocabularyItems;
-(id)_itemsBySiriID;
-(id)_vocabularyItemWithString:(id)arg1 ;
-(NSString *)intentSlot;
-(BOOL)haveAssignedAllSiriIDs;
-(BOOL)resetOnNextSync;
-(id)_everyVocabularyItemSiriID;
-(id)_vocabularyItemForSiriID:(id)arg1 ;
-(void)_clearVocabularyItemCaches;
-(id)_valueForSelector:(SEL)arg1 ofClass:(Class)arg2 from:(id)arg3 ;
-(void)_addValueForSelector:(SEL)arg1 toDictionary:(id)arg2 ;
-(NSString *)thisGeneration;
-(void)setResetOnNextSync:(BOOL)arg1 ;
-(id)_stringForSelector:(SEL)arg1 from:(id)arg2 ;
-(void)setThisGeneration:(NSString *)arg1 ;
-(void)_takeValuesFromDictionary:(id)arg1 ;
-(void)setHaveAssignedAllSiriIDs:(BOOL)arg1 ;
-(void)setValidity:(NSString *)arg1 ;
-(NSString *)validity;
-(id)writeToFile:(id)arg1 ;
@end

