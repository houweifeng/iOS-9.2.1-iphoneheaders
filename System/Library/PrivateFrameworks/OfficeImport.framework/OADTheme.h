/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:54 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, OADBaseStyles, OADDrawableDefaults;

@interface OADTheme : NSObject {

	NSString* mName;
	OADBaseStyles* mBaseStyles;
	OADDrawableDefaults* mDrawableDefaults;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) OADBaseStyles * baseStyles; 
@property (nonatomic,readonly) OADDrawableDefaults * drawableDefaults; 
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(BOOL)isEmpty;
-(OADBaseStyles *)baseStyles;
-(OADDrawableDefaults *)drawableDefaults;
-(void)validateTheme;
-(void)setBaseStyles:(OADBaseStyles *)arg1 ;
@end

