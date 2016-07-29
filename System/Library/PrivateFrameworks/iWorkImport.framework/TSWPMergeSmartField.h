/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:26 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPPlaceholderSmartField.h>

@class NSString;

@interface TSWPMergeSmartField : TSWPPlaceholderSmartField {

	NSString* _property;
	NSString* _label;
	NSString* _key;
	int _category;
	BOOL _requiresFollowingWhitespace;
	NSString* _whitespace;
	NSString* _guid;
	NSString* _tableField;

}

@property (nonatomic,copy) NSString * property;                             //@synthesize property=_property - In the implementation block
@property (nonatomic,copy) NSString * label;                                //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * key;                                  //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) int category;                                  //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) BOOL requiresFollowingWhitespace;              //@synthesize requiresFollowingWhitespace=_requiresFollowingWhitespace - In the implementation block
@property (nonatomic,copy) NSString * whitespace;                           //@synthesize whitespace=_whitespace - In the implementation block
@property (nonatomic,copy) NSString * guid;                                 //@synthesize guid=_guid - In the implementation block
@property (nonatomic,copy) NSString * tableField;                           //@synthesize tableField=_tableField - In the implementation block
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(int)smartFieldKind;
-(BOOL)allowsPasteAsSmartField;
-(const PlaceholderSmartFieldArchive*)placeholderSmartFieldArchiveFromUnarchiver:(id)arg1 ;
-(id)scriptTag;
-(void)setRequiresFollowingWhitespace:(BOOL)arg1 ;
-(void)setWhitespace:(NSString *)arg1 ;
-(void)setTableField:(NSString *)arg1 ;
-(BOOL)requiresFollowingWhitespace;
-(NSString *)whitespace;
-(NSString *)tableField;
-(void)dealloc;
-(NSString *)key;
-(void)setCategory:(int)arg1 ;
-(int)category;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(void)setProperty:(NSString *)arg1 ;
-(NSString *)property;
-(NSString *)guid;
-(void)setGuid:(NSString *)arg1 ;
@end

