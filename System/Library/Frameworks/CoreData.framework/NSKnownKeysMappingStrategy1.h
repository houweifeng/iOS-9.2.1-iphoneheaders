/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:50 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSKnownKeysMappingStrategy.h>

@interface NSKnownKeysMappingStrategy1 : NSKnownKeysMappingStrategy {

	int _cd_rc;
	int _reserved64;
	void* _table;
	unsigned long long _length;
	id _reserved1;
	id* _keys;

}
+(BOOL)accessInstanceVariablesDirectly;
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
+(void)initialize;
-(Class)classForArchiver;
-(id)initForKeys:(id*)arg1 count:(unsigned long long)arg2 ;
-(CFArrayRef)_makeBranchTableForKeys:(const char**)arg1 count:(unsigned long long)arg2 ;
-(void)_coreCreationForKeys:(const id*)arg1 count:(unsigned long long)arg2 ;
-(void)_coreDealloc:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)retain;
-(oneway void)release;
-(unsigned long long)retainCount;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)length;
-(id)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(BOOL)_isDeallocating;
-(id*)keys;
-(BOOL)_tryRetain;
-(id)initForKeys:(id)arg1 ;
-(unsigned long long)indexForKey:(id)arg1 ;
-(unsigned long long)fastIndexForKnownKey:(id)arg1 ;
@end

