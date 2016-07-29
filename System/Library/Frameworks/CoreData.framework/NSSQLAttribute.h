/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLColumn.h>

@interface NSSQLAttribute : NSSQLColumn {

	BOOL _unique;
	BOOL _constrained;

}

@property (assign,getter=isConstrained,nonatomic) BOOL constrained;              //@synthesize constrained=_constrained - In the implementation block
-(BOOL)isConstrained;
-(id)attributeDescription;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(unsigned)_sqlTypeForAttributeType:(unsigned long long)arg1 flags:(unsigned long long)arg2 ;
-(id)initForReadOnlyFetchWithExpression:(id)arg1 ;
-(BOOL)shouldIndex;
-(void)setConstrained:(BOOL)arg1 ;
-(BOOL)isUnique;
@end

