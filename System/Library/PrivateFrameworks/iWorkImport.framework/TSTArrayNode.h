/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTExpressionNode.h>

@class NSString, NSArray;

@interface TSTArrayNode : TSTExpressionNode {

	TSCEVectorIndexPair mDimensions;
	NSString* mWhitespaceBeforeFirstChild;
	NSArray* mWhitespaceAfterDelimiters;

}

@property (retain) NSString * whitespaceBeforeFirstChild; 
@property (retain) NSArray * whitespaceAfterDelimiters; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(ArrayNodeArchive*)arg1 archiver:(id)arg2 ;
-(id)initFromArchive:(const ArrayNodeArchive*)arg1 unarchiver:(id)arg2 ;
-(id)argumentSpec;
-(void)buildASTNodeArray:(TSCEASTNodeArray*)arg1 hostCell:(SCD_Struct_TS315)arg2 symbolTable:(TSCESymbolTable*)arg3 ;
-(id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4 ;
-(id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3 ;
-(void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2 ;
-(TSTCSENodeData)recordHashesForSubexpressions:(id)arg1 ;
-(id)initWithContext:(id)arg1 firstIndex:(unsigned long long)arg2 lastIndex:(unsigned long long)arg3 ;
-(id)initWithContext:(id)arg1 children:(id)arg2 columns:(unsigned char)arg3 rows:(unsigned short)arg4 firstIndex:(unsigned long long)arg5 lastIndex:(unsigned long long)arg6 ;
-(NSArray *)whitespaceAfterDelimiters;
-(void)setWhitespaceAfterDelimiters:(NSArray *)arg1 ;
-(void)setWhitespaceBeforeFirstChild:(NSString *)arg1 ;
-(NSString *)whitespaceBeforeFirstChild;
-(void)dealloc;
-(id)string;
-(TSCEVectorIndexPair)dimensions;
-(int)tokenType;
@end

