/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:12 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSCHStyleOwnerPath;

@interface TSCHStyleOwnerPropertyKey : NSObject <NSCopying> {

	TSCHStyleOwnerPath* mStyleOwnerPath;
	int mProperty;

}

@property (nonatomic,readonly) TSCHStyleOwnerPath * styleOwnerPath; 
@property (nonatomic,readonly) int property; 
+(id)propertyKeyWithStyleOwnerPath:(id)arg1 property:(int)arg2 ;
-(id)initWithStyleOwnerPath:(id)arg1 property:(int)arg2 ;
-(TSCHStyleOwnerPath *)styleOwnerPath;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)property;
@end

