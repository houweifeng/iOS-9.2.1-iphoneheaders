/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:28:18 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class CoreDAVPrincipalItem, CoreDAVInvertItem, CoreDAVGrantItem, CoreDAVDenyItem, CoreDAVItemWithNoChildren, CoreDAVItemWithHrefChildItem;

@interface CoreDAVACEItem : CoreDAVItem {

	CoreDAVPrincipalItem* _principal;
	CoreDAVInvertItem* _invert;
	CoreDAVGrantItem* _grant;
	CoreDAVDenyItem* _deny;
	CoreDAVItemWithNoChildren* _protectedItem;
	CoreDAVItemWithHrefChildItem* _inherited;

}

@property (nonatomic,retain) CoreDAVPrincipalItem * principal;                       //@synthesize principal=_principal - In the implementation block
@property (nonatomic,retain) CoreDAVInvertItem * invert;                             //@synthesize invert=_invert - In the implementation block
@property (nonatomic,retain) CoreDAVGrantItem * grant;                               //@synthesize grant=_grant - In the implementation block
@property (nonatomic,retain) CoreDAVDenyItem * deny;                                 //@synthesize deny=_deny - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithNoChildren * protectedItem;              //@synthesize protectedItem=_protectedItem - In the implementation block
@property (nonatomic,retain) CoreDAVItemWithHrefChildItem * inherited;               //@synthesize inherited=_inherited - In the implementation block
+(id)copyParseRules;
+(id)privilegeItemWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(CoreDAVDenyItem *)deny;
-(CoreDAVGrantItem *)grant;
-(CoreDAVItemWithHrefChildItem *)inherited;
-(CoreDAVItemWithNoChildren *)protectedItem;
-(void)setInvert:(CoreDAVInvertItem *)arg1 ;
-(void)setGrant:(CoreDAVGrantItem *)arg1 ;
-(void)setDeny:(CoreDAVDenyItem *)arg1 ;
-(void)setProtectedItem:(CoreDAVItemWithNoChildren *)arg1 ;
-(void)setInherited:(CoreDAVItemWithHrefChildItem *)arg1 ;
-(id)initWithPrincipal:(id)arg1 shouldInvert:(BOOL)arg2 action:(int)arg3 withPrivileges:(id)arg4 ;
-(void)setPrincipal:(CoreDAVPrincipalItem *)arg1 ;
-(CoreDAVPrincipalItem *)principal;
-(void)write:(id)arg1 ;
-(CoreDAVInvertItem *)invert;
@end

