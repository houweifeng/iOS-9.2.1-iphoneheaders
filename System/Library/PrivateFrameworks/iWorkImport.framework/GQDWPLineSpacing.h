/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:58 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDNameMappable.h>

@class NSString;

@interface GQDWPLineSpacing : NSObject <GQDNameMappable> {

	int mMode;
	float mAmount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(const StateSpec*)stateForReading;
-(int)readAttributesFromReader:(xmlTextReaderRef)arg1 processor:(id)arg2 ;
-(id)init;
-(int)mode;
-(float)amount;
@end

