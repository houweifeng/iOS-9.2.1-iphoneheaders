/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:52 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADShapeProperties.h>

@class OADConnection;

@interface OADConnectorProperties : OADShapeProperties {

	OADConnection* mFrom;
	OADConnection* mTo;

}
+(id)defaultProperties;
-(void)dealloc;
-(id)init;
-(id)description;
-(id)from;
-(id)to;
-(id)initWithDefaults;
@end

