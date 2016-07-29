/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:44:13 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /Applications/News.app/Frameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXJSONObject.h>

@class NSArray, NSString, SXMetaData, SXJSONDictionary, SXDocumentLayout, SXDocumentStyle, SXJSONArray;

@interface SXDocument : SXJSONObject {

	NSArray* _components;

}

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) SXMetaData * metadata; 
@property (nonatomic,readonly) NSString * authoringVersion; 
@property (nonatomic,readonly) NSString * converterVersion; 
@property (nonatomic,readonly) NSString * version; 
@property (nonatomic,readonly) NSArray * components;                                //@synthesize components=_components - In the implementation block
@property (nonatomic,readonly) SXJSONDictionary * resources; 
@property (nonatomic,readonly) SXJSONDictionary * componentStyles; 
@property (nonatomic,readonly) SXJSONDictionary * textStyles; 
@property (nonatomic,readonly) SXJSONDictionary * componentTextStyles; 
@property (nonatomic,readonly) SXJSONDictionary * componentLayouts; 
@property (nonatomic,readonly) SXDocumentLayout * layout; 
@property (nonatomic,readonly) SXDocumentStyle * documentStyle; 
@property (nonatomic,readonly) SXJSONArray * allComponents; 
+(id)jsonPropertyNameForObjCPropertyName:(id)arg1 ;
+(/*^block*/id)objectValueClassBlockForPropertyWithName:(id)arg1 ;
+(/*^block*/id)valueClassBlockForPropertyWithName:(id)arg1 ;
-(SXJSONArray *)allComponents;
-(SXDocumentStyle *)documentStyle;
-(SXDocumentLayout *)layout;
-(SXJSONDictionary *)componentLayouts;
-(SXJSONDictionary *)componentTextStyles;
-(SXJSONDictionary *)textStyles;
-(SXJSONDictionary *)componentStyles;
-(SXJSONDictionary *)resources;
-(NSString *)version;
-(NSString *)converterVersion;
-(NSString *)authoringVersion;
-(SXMetaData *)metadata;
-(NSString *)language;
-(NSString *)title;
-(NSString *)identifier;
-(NSArray *)components;
@end

