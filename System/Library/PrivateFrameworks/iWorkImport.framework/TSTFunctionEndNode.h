/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:23 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTExpressionNode.h>

@class TSTFunctionNode;

@interface TSTFunctionEndNode : TSTExpressionNode {

	TSTFunctionNode* mFunctionNode;

}

@property (assign,nonatomic) TSTFunctionNode * functionNode; 
-(id)initFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)saveToArchive:(FunctionEndNodeArchive*)arg1 archiver:(id)arg2 ;
-(id)initFromArchive:(const FunctionEndNodeArchive*)arg1 unarchiver:(id)arg2 ;
-(void)buildASTNodeArray:(TSCEASTNodeArray*)arg1 hostCell:(SCD_Struct_TS315)arg2 symbolTable:(TSCESymbolTable*)arg3 ;
-(id)initWithContext:(id)arg1 functionNode:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4 ;
-(TSTFunctionNode *)functionNode;
-(id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4 ;
-(void)insertFormulaText:(id)arg1 includeWhitespace:(BOOL)arg2 ;
-(id)exportString;
-(void)setFunctionNode:(TSTFunctionNode *)arg1 ;
-(void)dealloc;
-(id)string;
-(int)tokenType;
@end

