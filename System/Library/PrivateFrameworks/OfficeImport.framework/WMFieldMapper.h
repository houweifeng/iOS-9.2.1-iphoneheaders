/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:30:46 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WMParagraphMapper.h>

@class NSMutableString, NSString;

@interface WMFieldMapper : WMParagraphMapper {

	int mMode;
	unsigned mType;
	NSMutableString* mMarkerText;
	NSString* mLink;

}
-(void)dealloc;
-(void)mapRunAt:(id)arg1 run:(id)arg2 withState:(id)arg3 ;
-(id)initWithWDFieldMarker:(id)arg1 parent:(id)arg2 ;
-(void)mapFieldMarkerAt:(id)arg1 marker:(id)arg2 withState:(id)arg3 ;
@end

