/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:07 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSCHStyleOwning <NSObject,TSCHStyleVending>
@optional
-(void)propertiesWereMutated:(id)arg1;

@required
-(id)chartInfo;
-(int)defaultPropertyForGeneric:(int)arg1;
-(int)specificPropertyForGeneric:(int)arg1;
-(BOOL)hasIntValueForProperty:(int)arg1 value:(int*)arg2;
-(BOOL)hasFloatValueForProperty:(int)arg1 value:(float*)arg2;
-(BOOL)hasObjectValueForProperty:(int)arg1 value:(id*)arg2;
-(id)operationPropertyNameFromGenericProperty:(int)arg1;
-(id)nonstyle;
-(id)swapTuplesForMutations:(id)arg1 forImport:(BOOL)arg2;
-(id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2;
-(id)style;
-(id)context;
-(id)model;
-(id)valueForProperty:(int)arg1;
-(id)defaultProperties;

@end

