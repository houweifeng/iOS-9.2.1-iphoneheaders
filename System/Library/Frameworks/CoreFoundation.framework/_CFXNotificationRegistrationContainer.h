/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:23:53 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/_CFXNotificationRegistrationBase.h>

@interface _CFXNotificationRegistrationContainer : _CFXNotificationRegistrationBase {

	SCD_Struct_CF7* _children;

}
+(Class)childClass;
-(id)initWithParent:(id)arg1 childKeyCallbacks:(const SCD_Struct_CF1*)arg2 ;
-(void)resetChildren;
-(void)dealloc;
-(void)invalidate;
-(void)removeChild:(id)arg1 ;
-(BOOL)enumerate:(/*^block*/id)arg1 ;
-(id)initWithParent:(id)arg1 ;
-(void)addChild:(id)arg1 ;
-(void)finalize;
@end

