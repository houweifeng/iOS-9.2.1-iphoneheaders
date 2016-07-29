/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:25:48 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface _UIDictionaryManager : NSObject {

	NSArray* _availableDefinitionDictionaries;

}

@property (readonly) NSArray * availableDefinitionDictionaries;              //@synthesize availableDefinitionDictionaries=_availableDefinitionDictionaries - In the implementation block
+(void)initialize;
+(id)_filteredDictionaryIDs;
+(id)assetManager;
-(id)init;
-(BOOL)_hasDefinitionForTerm:(id)arg1 ;
-(id)_currentlyAvailableDefinitionDictionaries;
-(id)_availableDictionaryAssetsUsingRemoteInfo:(BOOL)arg1 ;
-(id)_allAvailableDefinitionDictionariesUsingRemoteInfo:(BOOL)arg1 ;
-(id)_definitionValuesForTerm:(id)arg1 ;
-(id)_availableDictionaryAssets;
-(NSArray *)availableDefinitionDictionaries;
@end

