/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:34:30 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSKCompatibilityDelegate.h>

@class NSString;

@interface TNBaseCompatibilityDelegate : NSObject <TSKCompatibilityDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)nestedDocumentFilename;
-(Class)exporterClassForType:(id)arg1 options:(id)arg2 ;
-(BOOL)isSageDocumentType:(id)arg1 ;
-(Class)importerClassForType:(id)arg1 ;
-(Class)exportOptionsControllerClass;
-(id)exportableTypes;
-(BOOL)isTCMessageExceptionErrorDomain:(id)arg1 ;
-(id)indexXmlFilename;
-(id)needNewerVersionIndexXmlContentString;
-(id)backwardsCompatibleTypeForType:(id)arg1 ;
-(id)newExportableDocumentTypesForFlag:(unsigned long long)arg1 ;
@end

