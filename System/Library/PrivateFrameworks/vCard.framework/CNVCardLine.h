/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNVCardParameterLine.h>

@class NSString, NSMutableArray, NSArray;

@interface CNVCardLine : NSObject <CNVCardParameterLine> {

	NSString* _name;
	id _value;
	NSMutableArray* _parameters;
	NSString* _grouping;
	NSMutableArray* _groupedLines;
	NSString* _itemSeparator;

}

@property (readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (readonly) id value;                                      //@synthesize value=_value - In the implementation block
@property (readonly) NSArray * parameters;                          //@synthesize parameters=_parameters - In the implementation block
@property (readonly) NSString * groupingName;                       //@synthesize grouping=_grouping - In the implementation block
@property (readonly) NSArray * groupedLines;                        //@synthesize groupedLines=_groupedLines - In the implementation block
@property (readonly) NSString * itemSeparator;                      //@synthesize itemSeparator=_itemSeparator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)versionPlaceholderLine;
+(id)lineWithLiteralValue:(id)arg1 ;
+(id)lineWithName:(id)arg1 value:(id)arg2 itemSeparator:(id)arg3 ;
+(id)lineWithName:(id)arg1 value:(id)arg2 ;
-(void)dealloc;
-(NSString *)name;
-(id)value;
-(NSArray *)parameters;
-(void)serializeWithStrategy:(id)arg1 ;
-(void)addParameterWithName:(id)arg1 value:(id)arg2 ;
-(id)initWithName:(id)arg1 value:(id)arg2 itemSeparator:(id)arg3 ;
-(id)makeGroupingNameWithCounter:(long long*)arg1 ;
-(NSString *)itemSeparator;
-(void)insertParameterWithName:(id)arg1 value:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)addGroupedLine:(id)arg1 withCounter:(long long*)arg2 ;
-(BOOL)canSerializeWithStrategy:(id)arg1 ;
-(void)serializeValueWithStrategy:(id)arg1 ;
-(NSString *)groupingName;
-(NSArray *)groupedLines;
@end

