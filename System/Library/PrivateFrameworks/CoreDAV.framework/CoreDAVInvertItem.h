/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVPrincipalItem;

@interface CoreDAVInvertItem : CoreDAVItem {

	CoreDAVPrincipalItem* _principal;

}

@property (nonatomic,retain) CoreDAVPrincipalItem * principal;              //@synthesize principal=_principal - In the implementation block
+(id)copyParseRules;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setPrincipal:(CoreDAVPrincipalItem *)arg1 ;
-(CoreDAVPrincipalItem *)principal;
-(void)write:(id)arg1 ;
@end

