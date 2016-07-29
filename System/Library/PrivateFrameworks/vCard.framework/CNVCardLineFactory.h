/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:38 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNVCardLineFactory.h>

@protocol CNVCardLineFactory <NSObject>
@required
-(id)stringLineWithName:(id)arg1 value:(id)arg2;
-(id)versionPlaceholderLine;
-(id)arrayLineWithName:(id)arg1 value:(id)arg2;
-(id)arrayLineWithName:(id)arg1 value:(id)arg2 itemSeparator:(id)arg3;
-(id)lineWithLiteralValue:(id)arg1;
-(id)dataLineWithName:(id)arg1 value:(id)arg2;

@end


@class NSString;

@interface CNVCardLineFactory : NSObject <CNVCardLineFactory>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)version30LineFactory;
+(id)version21LineFactory;
-(id)stringLineWithName:(id)arg1 value:(id)arg2 ;
-(id)versionPlaceholderLine;
-(id)arrayLineWithName:(id)arg1 value:(id)arg2 ;
-(id)arrayLineWithName:(id)arg1 value:(id)arg2 itemSeparator:(id)arg3 ;
-(id)lineWithLiteralValue:(id)arg1 ;
-(id)dataLineWithName:(id)arg1 value:(id)arg2 ;
@end

