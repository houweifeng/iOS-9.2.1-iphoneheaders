/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:51 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLRelationship.h>

@class NSString;

@interface NSSQLManyToMany : NSSQLRelationship {

	NSString* _correlationTableName;
	NSString* _columnName;
	NSString* _orderColumnName;

}
-(id)columnName;
-(BOOL)isReflexive;
-(id)correlationTableName;
-(id)inverseColumnName;
-(id)inverseOrderColumnName;
-(id)orderColumnName;
-(unsigned)columnSQLType;
-(unsigned)orderColumnSQLType;
-(id)initWithEntity:(id)arg1 propertyDescription:(id)arg2 ;
-(void)_setColumnName:(id)arg1 ;
-(id)inverseManyToMany;
-(void)_setInverseManyToMany:(id)arg1 ;
-(void)_setCorrelationTableName:(id)arg1 ;
-(void)_setOrderColumnName:(id)arg1 ;
-(BOOL)isTableSchemaEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)isMaster;
@end
