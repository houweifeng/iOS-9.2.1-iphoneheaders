/*
* This header is generated by classdump-dyld 1.0
* on Saturday, July 30, 2016 at 1:31:02 AM Japan Standard Time
* Operating System: Version 9.2.1 (Build 13D15)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WDText, WDDocument, WDAContent;

@interface WDATextBox : NSObject {

	WDText* mText;
	unsigned long long mNextTextBoxId;
	BOOL mOle;
	WDDocument* mDocument;
	WDAContent* mParent;

}
-(void)dealloc;
-(id)init;
-(id)description;
-(id)text;
-(void)setText:(id)arg1 ;
-(id)document;
-(void)setDocument:(id)arg1 ;
-(unsigned long long)nextTextBoxId;
-(id)parent;
-(void)setParent:(id)arg1 ;
-(void)setOle:(BOOL)arg1 ;
-(BOOL)isOle;
-(void)setNextTextBoxId:(unsigned long long)arg1 ;
@end

