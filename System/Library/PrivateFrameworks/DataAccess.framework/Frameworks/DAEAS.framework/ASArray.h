/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:41 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>
#import <libobjc.A.dylib/ASParsingWithSubItems.h>
#import <libobjc.A.dylib/ASParsingFrontingBasicType.h>

@class NSMutableArray, NSDictionary;

@interface ASArray : ASItem <ASParsingWithSubItems, ASParsingFrontingBasicType> {

	NSMutableArray* _items;
	NSDictionary* _subclassRuleSet;

}
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
-(id)description;
-(void)addItem:(id)arg1 ;
-(id)initWithSubclassRuleSet:(id)arg1 ;
-(id)commonValue;
-(id)asParseRules;
@end

