/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:33:57 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDTCell.h>

@class GQDWPLayoutStorage;

@interface GQDTTextCell : GQDTCell {

	CFStringRef mStringValue;
	GQDWPLayoutStorage* mLayoutStorage;

}
-(int)readContentForTextCell:(xmlTextReaderRef)arg1 ;
-(int)readContentForTCell:(xmlTextReaderRef)arg1 ;
-(id)layoutStorage;
-(void)dealloc;
-(CFStringRef)stringValue;
@end

